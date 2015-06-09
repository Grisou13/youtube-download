import sys, os, re, json, urllib2, audiotranscode,subprocess, shutil
from subprocess import Popen, PIPE, STDOUT
import pafy

#global vars
debug=False #set the current state of debugging mode
messages=[]
errors=[]
#test urls
#url="https://www.youtube.com/playlist?list=EL1h7dE4-uBGs"
#url="https://www.youtube.com/watch?v=h_At3vblkso&index=1&list=EL1h7dE4-uBGs"
def download(url):
	file=download_file(url)
	filename=convert_filename(file)
	return convert_file(convert_filename(download_file(url)))
def download_file(video,tmp_dir='tmp/'):
	if isinstance(video,str) and type(video) is str:
		video = pafy.new(video)
	#elif isinstance(video,pafy):
	#	video = video
	bestaudio = video.getbestaudio()
	return bestaudio.download(filepath=tmp_dir)
#returns true or false depending if convergion succeded
def convert_file(filename,dest_dir='converted/',tmp_dir='tmp/',format='mp3',delete_tmp=False):
	dest_name=tmp_dir+filename+'.mp3'
	print dest_name
	cmd="ffmpeg -i '"+filename+"'  '"+dest_name+"' "
	sp=Popen(cmd, shell=True, stdin=PIPE, stdout=PIPE, stderr=STDOUT, close_fds=True)
	out, err = sp.communicate()
	print
	#print out
	print err
	print
	#print sp.stderr#.read()
	#print sp.stdout#.read()
	#print
	#return res.stdout.read(),res.stderr.read()
	#sp.call(command,shell=True)
	
	if delete_tmp:
		os.remove(filename)
	if err:
		print err
		add_error(err)
		return False
	if out:
		add_message(out)
	return True

def get_dir_list(dir_path):
	root,dirs,files = os.walk(dir_path).next()#get listing of current directory
	dirlist=[]
	for i,file in enumerate(files):#rebuild files array with only the filename
		dirlist.append(os.path.splitext(str(file))[0])
	return dirlist

def add_error(msg):
	errors.append(msg)

def add_message(msg):
	messages.append(msg)

def print_errors():
	for error in errors:
		print "[Error] "+error


def print_messages():
	for msg in messages:
		print "[Alert] "+msg

def print_all():
	print_errors()
	print_messages()

def convert_filename(filename):
	ok = re.compile(r'[^/]')#re-use of pafy filename generator

	if os.name == "nt":
		ok = re.compile(r'[^\\/:*?"<>|]')

	filename = "".join(x if ok.match(x) else "_" for x in filename)
	return filename


def main(): # main function



	if not debug:
		url=str(raw_input("Url of your video/playlist ?")) # get user input, for the url
	else:
		url="ttps://www.youtube.com/watch?v=h_At3vblkso&index=1&list=EL1h7dE4-uBGs"

	if not debug:
		dest_folder=str(raw_input("what foler should it be stored in ?")) # get the foler for the files to be stored in
	else:
		dest_folder="./tmp/"

	if not os.path.exists(dest_folder): os.makedirs(dest_folder)#create directory for the storage of downloaded files

	

	if "list" in url: # if its a playlist, we need to get all videos individually
		print "There is a playlist url, do you want to download it?"
		var = raw_input("y/n")
		if var=="y":
			print "downloading the playlist..."
			url = url.split("list=",1)[1]
			#playlistUrl="https://www.googleapis.com/youtube/v3/playlistItems?part=snippet&maxResults=50&playlistId="+id+"&key=%20AIzaSyAeMo7c1B907YsYvnXQ6HJzJ_tB42NW5yQ" #get playlist items with youtube api v3
			#json_input=urllib2.urlopen(playlistUrl)
			#videos = json.load( json_input )
			videos= pafy.get_playlist(url)#get all videos with pafy get_playlist
			for video in videos["items"]: # parcours each item from youtube playlist
				print video
				video = video['pafy'] # get new instance of pafy video with the id retrieved from playlist
				video = pafy.new(video)

				if convert_filename(video.title) in get_dir_list('converted/'):
					add_error("The file "+ filename +" alredy exists, so we didnt dowload it again")
				else : 
					add_message("The file "+ filename +" is downloaded")
					#bestaudio = video.getbestaudio()
					convert_file(convert_filename(download_file(video)))
					#tmp=bestaudio.download(filepath='tmp/')
					
					#endfile=dest_folder+filename+'.mp3'
					#command="ffmpeg -i '"+tmp+"'  '"+endfile+"' "
					#sp.call(command,shell=True)
					#command="rm -f -r '"+tmp+"'' "
					#sp.call(command,shell=True)
					#at.transcode(files,filename+'.mp3')
		else:
			exit(0)
				

	else :  # its a normal video and we let pafy handle it
		video = pafy.new(url)	

		#print upload_dir_files
		if convert_filename(video.title) in get_dir_list(dest_folder): # check if the file doesnt already exists, if it doesnt dowload it
			errors.append("The file "+ video.title +" alredy exists, so we didnt dowload it again")
		else : 
			messages.append("The file "+ video.title +" is downloaded")
			convert_file(convert_filename(download_file(video)))
			#bestaudio = video.getbestaudio()
			#tmp=bestaudio.download(filepath='tmp/')
			
			#endfile=dest_folder+filename+'.mp3'
			#command="ffmpeg -i '"+tmp+"'  '"+endfile+"' "
			#sp.call(command,shell=True)
			#command="rm -f -r '"+tmp+"'' "
			#sp.call(command,shell=True)
			#at.transcode(files,filename+'.mp3')
			

	if len(messages):
		print "We successfully downloaded the files you asked for, check out the directory : "+str(os.path.abspath(dest_folder))
	if len(errors):
		print "\n We tried to download some files but there has been an error \n::::: ----------------------- :::::"
	print_all()

	print "Press any key to continue ...."
	raw_input()

if __name__ == "__main__":
	main()
	exit(0)
