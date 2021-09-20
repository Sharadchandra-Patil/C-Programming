#include<stdio.h>

//a , a+1 
// &a , &a+1 

int main(void)
{
    char *str="Sunbeam";
    printf("str : %s str = %u",str,str);
     printf("\n value at str : %c",*str);
     printf("\n *(str+1) =  %c",*(str+1));
     // *(str+1)
    // *(784+1)
    // *785
    //u
      printf("\n *str+1 =  %c",*str+1);
     //*str+1
     //*784 + 1
     // S + 1
     // T 

    return 0;
}



/*
int main(void)
{
    char *str="ABCD";
    // 784   785   786   787 
    printf("str : %s str = %u",str,str);
     printf("\n value at str : %c",*str);
     printf("\n *(str+1) =  %c",*(str+1));
     //*(str+1)
     //*(784+1)
     //*(785)
     // B

     printf("\n *(str+3) =  %c",*(str+3));
     //*(str+3)
     // *(784 + 3)
     // *(787)
     // D 

    printf("\n *str+3 =  %c",*str+3);
    //*str+3
    //*784 + 3
    // A + 3
    // B C D 
     printf("\n *str+7 =  %c",*str+7);
     // *str+7
     // *784+7
     //  A + 7 
     // B C D E F G H 


    return 0;
}

*/



/*
int main(void)
{
    char *str="ABCD";
    printf("str = %s str = %u str = %d",str,str,str); //ABCD
     printf("\n str = %c",str); //segmentation fault
     printf("\n str = %c",*str);
     printf("\n str = %s",*str); //Run time error
     
    return 0;
}

*/



/*
int num=50;
int *ptr=&num;

ptr==>address of num
*ptr==> value at ptr ==> 50
*/

/*
int main(void)
{
    char *str="Sunbeam";
    printf("Str : %s str = %u",str,str);
    printf("\n size = %d",sizeof(str));
    printf("\n value at str = %c ",*str);

    //*str
    //*4784
    //S 
    printf("\n size = %d",sizeof(*str));

    return 0;
}
*/

/*
int main(void)
{
    //char str[]="Sunbeam\0"; //definind a string using character pointer
    //char str[6]="Sunbeam\0";
    char str[]={'a','b','c'};
    char str1[]={'d','e','f','\0'};
    char str2[5]="pune";
    printf("str : %s size = %d",str,sizeof(str));
    printf("\n str1 : %s size = %d",str1,sizeof(str1));    
      printf("\n str2 : %s size = %d",str2,sizeof(str2));   
    //printf("\n size : %d",sizeof(str));
    return 0;
}
*/



/*
int main(void)
{
    // char str[]="SunbeamPune"; // 11 + '\0'  // size = 12 
   // char str[]="Sunbeam\0Pune"; // 12 + '\0'   size = 13 
    //S u n b e a m \0 P u n e \0 
    char str[]="Sunbeam Pune karad"; 
    printf("str : %s",str);
    printf("\n size : %d",sizeof(str));

    return 0;
}
*/

/*
int main(void)
{
    char str[10]; //character array / String
    printf("Enter String : ");
    scanf("%s",str);
    printf("You have entered String : %s",str);
    return 0;

}

*/