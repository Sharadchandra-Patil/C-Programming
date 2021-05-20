#include<stdio.h> 

int main()
{     char name[10]; 

    printf("Enter the name");
    //scanf("%[0-9]",name);
    //scanf("%[^0-9]",name);
    //scanf("%[A-Z]",name);
    scanf("%[^A-Z]",name);

    printf("%s",name);

    //char name[50];
    char city[50];
    char job[50];   

    printf("Enter the name");
    //scanf("%[^\n]",name);
    gets(name);
    // scan set --> %[^\n]
    // scanf terminates on white-space 
// name is the name of the array 
// so name of the array rep base address 

    printf("Enter the city");
    //scanf("%s",city);
    gets(city);
    // %s -> scans the string
    // format specifier  

    printf("Enter the job");
   // scanf("%*c%s",job);
    gets(job); 

    printf("Name=%s city=%s job=%s",name,city,job);


}
