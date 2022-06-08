file_explore: concat_function.o explore_function.o main.o
	gcc concat_function.o explore_function.o main.o -o file_explore
concat_function.o: concat_function.c
	gcc concat_function.c -c -o concat_function.o
explore_function.o: explore_function.c
	gcc explore_function.c -c -o explore_function.o
main.o: main.c
	gcc main.c -c -o main.o
