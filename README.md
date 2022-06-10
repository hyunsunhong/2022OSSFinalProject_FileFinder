# FileExplore :mag_right:
# This repository includes source codes for filefinder for linux.

### How did I implemented? :question:
#### The key idea is DFS!
#### Strting from home directory, it recursively search for given file name.











### How to build:question:
#### Run 'make' to build 'file_finder' file.
#### If it succesfully build, result will be as below. 

##### <code>
##### pi@raspberrypi:~/worksapce/ $ make
##### gcc concat_function.c -c -o concat_function.o
##### gcc explore_function.c -c -o explore_function.o
##### gcc main.c -c -o main.o
##### gcc concat_function.o explore_function.o main.o -o file_explore
</code>





### How to use:question:
### To make 'file_explore' excutable in any directory. Set environment variable as below.
#### <code>
#### export PATH=~/your_path:”$PATH”
#### . ~/.bashrc
</code>


#### Let's assume we want to find file called 'example'.
##### Its usage and results is as below.
##### When 'example' is not in the server.
##### <code>
pi@raspberrypi:~/workspace $ file_explore example
</code>


##### When 'example' is in the server.
##### <code> 
pi@raspberrypi:~/workspace/ $ file_explore example
/home/pi/Desktop/workspace/dir1/dir2/example
</code>





# Thank you.
