#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
    char *str = argv[1]; //allowed but white space is not allowed in command line argument
    //char *str1 = "sharad patil sangli";  //Not allowed
    //char str[] = "sharad patil,sangli";  //Allowed
    char delimiter[3] = " ,:";
    char *result;

    printf("Before parsing string is : %s \n",str);

    result = strtok(str,delimiter);
    while (result != NULL)
    {
        printf("%s\n",result);
        result = strtok(NULL,delimiter);
    }
    return 0;
}