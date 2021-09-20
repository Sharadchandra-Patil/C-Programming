#include<stdio.h>


//argv[1] = 20
//argv[2] = 30 
// int i = argv[1];
// int j = argv[2]; 
// i + j 
// 20 30 

//argv[1] = 20
//argv[2] = 30 
// int i = atoi(argv[1]);
// int j = atoi(argv[2]); 
//i+j
//20+30
//50 




int main(int argc,char *argv[],char *env[])
{
    int i;
    printf("Argument Count = %d",argc);
    for(i=0;i<argc;i++)
    {
      printf("\n Argv[%d] = %s",i,argv[i]);
    }

    for(i=0;i<25;i++)
    {
        printf("\n env[%d] = %s",i,env[i]);
    }

}

//string to int ==> atoi() 
//argc : argument count
// argv : argument vector (stroing the command line arguments)


/*
int main(int argc,char *argv[])
{
    int i;
   printf("Argument Count = %d",argc);
    for(i=0;i<argc;i++)
    {
        //printf("\n Argument vector at %d location = %s",i,argv[i]);
        printf("\n Argument vector at %d location = %s",i,*(argv+i));
        //a[i] = *(a+i) 
    }
   
   //printf("\n Argument vector at 0th location = %s",argv[0]);
   //printf("\n Argument vector at 1st location = %s",argv[1]);
   //printf("\n Argument vector at 2nd location = %s",argv[2]);
    return 0;
}

*/