#include<stdio.h>
int main(void)
{   float x,y=20;
    scanf("%d",&x);

   // x=5/2; // here first we get rhs=2 thrn during assignment it get converted into float ans=2.000000
    //y=2/5; // ans = 0.000000
    printf("%d\n",x);// ans=2.000000
	printf("%d\n",y);// ans=0.000000
    printf("%d\n",10/3);    //ans=3  ,Eats fractional part and ans is int
    printf("%f\n",10/3);    //output 0.000000 as ans in int 
                             //as %f is upper datatype it prints 0.000000 not garbage 
    printf("%d\n",(float)10/3);  //as %d lower datatype prints garbage
    printf("%f\n",(float)10/3);  //ans=3.333333 used typecasting
    printf("%f\n",10.0/3);
    printf("%f\n",(double)10/3);
    printf("%lf\n",(double)10/3);
    printf("%f\n",(float)(10/3));
    return 0;
}
