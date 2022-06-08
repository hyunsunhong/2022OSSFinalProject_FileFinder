#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <dirent.h>
#include <string.h>
#include <sys/types.h>
#include "header.h"

int main(int argc, char *argv[]) {
	
	char *file_name = NULL;
	int file_found_cnt;

	// if input argument is invalid, exit with error message
	if(argc != 2) {
		printf("Invalid argumentation.\nPlease execute it with a file name.\n");
		exit(0);
	}
	file_name = argv[1];
	
	file_explore("/home", file_name, &file_found_cnt);

	if(file_found_cnt == 0) {
		printf("%s does not exist.\n", file_name);
	}
	

	return 0;
}
