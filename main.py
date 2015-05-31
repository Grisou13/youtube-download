import sys, os, re, json, urllib2, audiotranscode,subprocess as sp, shutil

import pafy

#global vars
debug=False #set the current state of debugging mode

#test urls
#url="https://www.youtube.com/playlist?list=EL1h7dE4-uBGs"
#url="https://www.youtube.com/watch?v=h_At3vblkso&index=1&list=EL1h7dE4-uBGs"

def main(): # main function

	messages=[]
	errors=[]
	upload_dir_files=[]
	if not debug:
		q_id=str(raw_input("Url of your video/playlist ?")) # get user input, for the url
	else:
		q_id="ttps://www.youtube.com/watch?v=h_At3vblkso&index=1&list=EL1h7dE4-uBGs"

	if not debug:
		q_folder=str(raw_input("what foler should it be stored in ?")) # get the foler for the files to be stored in
	else:
		q_folder="./tmp/"

	if not os.path.exists(q_folder): os.makedirs(q_folder)#create directory for the storage of downloaded files

	root,dirs,files = os.walk(q_folder).next()#get listing of current directory
			
	for i,file in enumerate(files):#rebuild files array with only the filename
		upload_dir_files.append(os.path.splitext(str(file))[0])

	if "list" in q_id: # if its a playlist, we need to get all videos individually
		print "There is a playlist url, do you want to download it?"
		var = raw_input("y/n")
		if var=="y":
			print "downloading the playlist..."
			id = q_id.split("list=",1)[1]
			#playlistUrl="https://www.googleapis.com/youtube/v3/playlistItems?part=snippet&maxResults=50&playlistId="+id+"&key=%20AIzaSyAeMo7c1B907YsYvnXQ6HJzJ_tB42NW5yQ" #get playlist items with youtube api v3
			#json_input=urllib2.urlopen(playlistUrl)
			#videos = json.load( json_input )
			videos= pafy.get_playlist(q_id)#get all videos with pafy get_playlist
			for video in videos["items"]: # parcours each item from youtube playlist
				video = video['pafy'] # get new instance of pafy video with the id retrieved from playlist
			
				ok = re.compile(r'[^/]')#re-use of pafy filename generator

				if os.name == "nt":
					ok = re.compile(r'[^\\/:*?"<>|]')

				filename = "".join(x if ok.match(x) else "_" for x in video.title)

				if filename in upload_dir_files:
					errors.append("The file "+ video.title +" alredy exists, so we didnt dowload it again")
				else : 
					messages.append("The file "+ video.title +" is downloaded")
					bestaudio = video.getbestaudio()
					tmp=bestaudio.download(filepath='tmp/')
					
					endfile=q_folder+filename+'.mp3'
					command="ffmpeg -i '"+tmp+"'  '"+endfile+"' "
					sp.call(command,shell=True)
					command="rm -f -r '"+tmp+"'' "
					sp.call(command,shell=True)
					#at.transcode(files,filename+'.mp3')
		else:
			exit(0)
				

	else :  # its a normal video and we let pafy handle it
		id=q_id
		video = pafy.new(id)

		root,dirs,files = os.walk(q_folder).next()#get listing of current directory	
		
		ok = re.compile(r'[^/]')#re-use of pafy filename generator

		if os.name == "nt":
			ok = re.compile(r'[^\\/:*?"<>|]')

		filename = "".join(x if ok.match(x) else "_" for x in video.title)
		#print upload_dir_files
		if filename in upload_dir_files: # check if the file doesnt already exists, if it doesnt dowload it
			errors.append("The file "+ video.title +" alredy exists, so we didnt dowload it again")
		else : 
			messages.append("The file "+ video.title +" is downloaded")
			bestaudio = video.getbestaudio()
			tmp=bestaudio.download(filepath='tmp/')
			
			endfile=q_folder+filename+'.mp3'
			command="ffmpeg -i '"+tmp+"'  '"+endfile+"' "
			sp.call(command,shell=True)
			command="rm -f -r '"+tmp+"'' "
			sp.call(command,shell=True)
			#at.transcode(files,filename+'.mp3')
			

	if len(messages):
		print "We successfully downloaded the files you asked for, check out the directory : "+str(os.path.abspath(q_folder))
	if len(errors):
		print "\n We tried to download some files but there has been an error \n::::: ----------------------- :::::"
		for error in errors:
			print error

	print "Press any key to continue ...."
	raw_input()

if __name__ == "__main__":
	main()
	exit()
