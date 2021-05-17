#include<stdio.h> 

int main() {
 double a = 1.2;
 double *p = &a;
 double **pp = &p;
 double ***ppp =&pp; 
 printf("%lf\n", a); // 1.2 
 printf("%lf\n", *p); //1.2  
 
 printf("\n\n");
 printf("&pp=%u\n",&p); 
 printf("pp=%u\n",pp);

 printf("**pp=%lf",**pp); 
 printf("**pp=%lf",**ppp);     

 return 0;
}