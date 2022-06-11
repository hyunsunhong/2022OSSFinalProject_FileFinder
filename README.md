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

End with an example of getting some data out of the system or using it for a little demo

## Running the tests

Explain how to run the automated tests for this system

### Break down into end to end tests

Explain what these tests test and why

```
Give an example
```

### And coding style tests

Explain what these tests test and why

```
Give an example
```

## Deployment

Add additional notes about how to deploy this on a live system

## Built With

* [Dropwizard](http://www.dropwizard.io/1.0.2/docs/) - The web framework used
* [Maven](https://maven.apache.org/) - Dependency Management
* [ROME](https://rometools.github.io/rome/) - Used to generate RSS Feeds

## Contributing

Please read [CONTRIBUTING.md](https://gist.github.com/PurpleBooth/b24679402957c63ec426) for details on our code of conduct, and the process for submitting pull requests to us.

## Versioning

We use [SemVer](http://semver.org/) for versioning. For the versions available, see the [tags on this repository](https://github.com/your/project/tags). 

## Authors

* **Billie Thompson** - *Initial work* - [PurpleBooth](https://github.com/PurpleBooth)

See also the list of [contributors](https://github.com/your/project/contributors) who participated in this project.

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details

## Acknowledgments

* Hat tip to anyone whose code was used
* Inspiration
* etc








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
