#include<stdio.h>
int outer_var=10;
int main()
{
    //int outer_var=100;
    {
        {
            //int outer_var=1000;
            
            printf("outer_var=%d\n",outer_var);
        }
    }
 
}
/*int main()
{
    int outer_var=100;
    {
        {
            int inner_var=1000;     
            printf("outer_var=%d\n",outer_var);
        }
    }
    printf("Inner_var=%d",inner_var);
    // error : out the scope 
}*/