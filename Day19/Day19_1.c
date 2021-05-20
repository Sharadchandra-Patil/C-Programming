#include<stdio.h>

int main()
{
    //char *name = "sunbeam";
    //char *name1 = "Sunbeam";
    char name2[10] = "Sunbeam"; 

    printf(name2);
    printf("\n");
    printf(name2+1); 
     // const char * format
     printf("\n");
     printf(name2+2);  


    //printf("%u\n",&name[0]);
    //printf("%u\n",&name1[0]);

    //if(name==name1)
        // printf("Same");
   // else 
       // printf("not same"); 

    return 0; 
}

/*
int main()
{
    char *name = "sunbeam"; 
    // RO data section
    // Read only 
    char name1[10] = "sunbeam"; 
    //int i =0;

    //printf("%s\n",name);

    name[0] ='A'; 

    printf("%s\n",name);


}
*/
/*
int main()
{
    char name[10] = "Sunbeam"; 
    char name1[10] = "Sunbeam"; 

    // S    u   n   b     e     a    m    \0
    // 100 101  102 103   104  105  106   107

    // S    u   n   b     e     a    m    \0
    // 200 201  202 203   204  205  206   207

    if(name==name1)
        printf("Same string");
    else 
        printf("not same");




    return 0; 
}
*/