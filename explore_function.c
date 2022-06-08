#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <dirent.h>
#include <string.h>
#include <sys/types.h>
#include "header.h"

void file_explore(char *source, char *file_name,  int *file_found_cnt) {
	
	DIR *dir_info;
	struct dirent *dir_entry;
	dir_info = opendir(source); // open source directory

	if(NULL != dir_info) { // explore every file and directory in the directory entry 
		while(dir_entry = readdir(dir_info)) {
		
			struct stat buf;
		
			// disregard default hidden directory
			if(strcmp(dir_entry->d_name, ".") == 0 || strcmp(dir_entry->d_name, "..") == 0) continue;
			

			// get the deeper directory for DFS
			char * new_source = concat_directory(source, dir_entry->d_name);
			
			if(strcmp(dir_entry -> d_name, file_name) == 0) {
				(*file_found_cnt)++;
				printf("%s\n", new_source);
			}
			
			// if it is directory, explore deeper recursively
			lstat(new_source, &buf);
			if(S_ISDIR(buf.st_mode)) file_explore(new_source, file_name, file_found_cnt);
			
			free(new_source);
		}
	}
	closedir(dir_info);

}

