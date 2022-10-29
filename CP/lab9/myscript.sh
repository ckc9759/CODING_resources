rm *.o
gcc -c book_fun.c 
gcc -c books_catalog.c
gcc -c main_library.c 
gcc -o search.exe books_catalog.o book_fun.o main_library.o
./search.exe
