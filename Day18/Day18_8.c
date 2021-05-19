#include<stdio.h> 

int main()
{
    char name[30]; 

    printf("Enter the name");
    //scanf("%[0-9]",name);
    //scanf("%[^0-9]",name);
    //scanf("%[A-Z]",name);
    //scanf("%[^A-Z]",name);

    printf("%s",name);
}

/*
int main()
{
    char name[50];
    char city[50];
    char job[50];   

    printf("Enter the name");
    scanf("%[^\n]%*c",name);
    // scan set --> %[^\n]
    // scanf terminates on white-space 
// name is the name of the array 
// so name of the array rep base address 

    printf("Enter the city");
    scanf("%s%*c",city);
    // %s -> scans the string
    // format specifier  

    printf("Enter the job");
    //scanf("%s",job);
    gets(job); 

    printf("Name=%s city=%s job=%s",name,city,job);


}
*/