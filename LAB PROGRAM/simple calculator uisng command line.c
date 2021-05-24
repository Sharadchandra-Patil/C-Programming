#include<stdio.h>
//int main(int argc, char *argv[], char* envp[])
int main(int argc, char *argv[])
{
    int no1, no2, ans;
    char op;
    if(argc!=4)
    {
        printf("\n invalid arguments");
        printf("\n ProgName No1 Op No2\n");
    }
    else
    {
          no1= atoi(argv[1]); // stdlib.h
          //op = *argv[2]; // 
          op= argv[2][0]; // 
          no2= atoi(argv[3]);

          switch(op)
          {
               case '+' : ans = no1+no2 ; break;
               case '-' : ans = no1-no2 ; break;
               case '*' : ans = no1*no2 ; break;
               case '/' : ans = no1/no2 ; break;
          }
          printf("\n %d %c %d=%d", no1, op, no2, ans);
    }
    
    return 0;
}