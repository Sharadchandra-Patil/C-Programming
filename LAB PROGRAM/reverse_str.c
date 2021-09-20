#include<stdio.h>
#include<string.h>

void reverse_str(char *str);


int main()
{
	char str[10] = "sharad";
	
	if(strlen(str) != 0)
	    reverse_str(str);
	else
		{
			printf("Entered empty string \n");
		}
	
	printf("Reversed string is %s",str);
	
	return 0;
}

void reverse_str(char *str)
{
	int len = strlen(str);
	char *end = &str[len-1];

	char temp;
	
	/*
	// if strlen() function not used 
	char *end = str;
	while(*end)
		{
			end++;		
		}
		end--;
    */		
	while(str < end)
		{
			temp = *str;
			*str++ = *end;
			*end-- = temp;
		}
}
	
	
