#include<stdio.h> 
int main(int argc, char const *argv[],char *envp[])
{
    printf("%d",argc);
    int i; 
    printf("\n");

    for(i=0;envp[i]!=NULL;i++)
    {
        puts(envp[i]); 
    }

    return 0;
}


/*int main(int argc, char const *argv[])
{
    printf("%d",argc);
    int i; 
    printf("\n");

    for(i=0;i<argc;i++)
    {
        puts(argv[i]); 
    }

    return 0;
}
*/