#include<stdio.h>
//int main(int argc, char *argv[], char* envp[])
int main(int argc, char *argv[])
{
    int index;
    printf("\n no of arguments=%d", argc);
    for(index=0; index<argc; index++)
    {
        printf("\n %d] %s", index, argv[index]);
    }
    printf("\n %c", **++argv);
    printf("\n %s", *++argv);
    
    return 0;
}