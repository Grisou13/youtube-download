FILES="musique/*"
for f in $FILES
do
	echo "File : $f"
	mkdir mp3/musique/
	ffmpeg -i "$f" "mp3/$f.mp3"
done
