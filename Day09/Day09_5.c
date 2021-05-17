#include<stdio.h>
int main()
{
    enum color // creating the datatype 
    {
        RED=1,BLUE,GREEN,YELLOW
    }; 

    enum color c1,c2,c3,c4;

    c1 = RED;
    c2 = BLUE;
    
    printf("%d\n",c2); // 2 
    c3 = GREEN;
    c4 = YELLOW; 
    printf("%d\n",c1);  
    //RED++;  --> 1++ --> 1 = 1 + 1 // l-value error
	
	 
    printf("%d\n",c1*10);

    //enum color --> datatype 
    // c1 --> name of the variable  
    //datatype variable-name   

}
