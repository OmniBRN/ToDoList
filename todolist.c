#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

void error_handler(char* error_reason)
{
    printf("%s\n", error_reason);
    exit(-1);
}

FILE* get_file()
{
    printf("Enter name of file you want to open");
    

}

int main(int argc, char* argv[])
{
    if(argc > 2) error_handler("Too many arguments\n");
    if(argc == 1)
        
    printf("%s\n", argv[1]);
    return 0;
}