# File Explorer :mag_right:

This project aims to make a program that search for specific file in the Linux.
It's just like Finder in Mac.

![image](https://user-images.githubusercontent.com/103620676/173172887-78fb0918-b25b-4473-beca-ab2f98e1ee65.png)



## Getting Started

Clone it and just 'make' it!
```
pi@raspberrypi:~/worksapce/ $ make
gcc concat_function.c -c -o concat_function.o
gcc explore_function.c -c -o explore_function.o
gcc main.c -c -o main.o
gcc concat_function.o explore_function.o main.o -o file_explore
```

Then, to make this file executable in anywhere, modify environment variable.
```
export PATH=~/path_where_File_Exists:”$PATH”
. ~/.bashrc
```
:exclamation: Note that if desktop is restarted, you should do above procedure again!




## Running the tests

When example file exist.
```
pi@raspberrypi:~/wherevrer $ file_explore example
/home/pi/Desktop/workspace/example
```

When example file does not exist.
```
pi@raspberrypi:~/wherevrer $ file_explore example
example does not exist.
```




## Acknowledgments

* String parsing and concatenating
* Directory handling using <dirent.h> library
* DFS using recursion
