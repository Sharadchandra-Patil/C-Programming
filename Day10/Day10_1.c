#include<stdio.h>

int main()
{  

    // Entry controlled loop 
    // while -> entry controlled 
    /*
      int i=1; // init i to 1 
      while(i<=5)// 1 <=5 // T --> 1 while(1) 
      {
            printf("Inside the loopi:%d\n",i);
            //1 2 3 4 5       
            i++; 
             // 5 --> 6             
      } 
       printf("\noutside the loop i:%d\n",i);  
    */
    /*
      int i=1; 
      while(i<=5)
      {
            printf("Inside the loopi:%d\n",i++);
            // 1 2 3 4 5     
      } 
       printf("\noutside the loop i:%d\n",i);
    */
     /* int i=1; 
      while(i<=5) 
      {
            printf("Inside the loopi:%d\n",++i);
            
      } 
       printf("\noutside the loop i:%d\n",i);
    */

    /*
      int i=1; 
      while(i++<=5) 
      {
            printf("Inside the loopi:%d\n",i);
            
      } 
       printf("\noutside the loop i:%d\n",i);
    */
   /*
    int i=1; 
      while(++i<=5) 
      {
            printf("Inside the loopi:%d\n",i);
            
      } 
       printf("\noutside the loop i:%d\n",i);
    */
    
    /*
    int i=1; 
    while(i<=5); // infinite number of times  
    {
        printf("Inside the loopi:%d\n",i);
        
    } 
       printf("\noutside the loop i:%d\n",i);
    */

   
   /* int i=1; 
    while(i<=5); // terminator
    {
        printf("@@@Inside the loopi:%d\n",i);
        
    } 
       printf("\n##outside the loop i:%d\n",i);
    */ 
   /* int i=1;
    int j=1;   
    while(i<=5,j<=10) // terminator
    {
        printf("i:%dj:%d\n",i,j);
        i++;
        j++;
        
    } 
    */
   /*
   int i=1;
    int j=1; 
    while(i<=10,j<=5) // terminator
    {
        printf("i:%dj:%d\n",i,j);
        i++;
        j++;
        
    } 
      */ 

    
     
     /*char ch=1; 
     while(ch) 
     {
         printf("%d\n",ch); //  
         ch++; // 
     } 
     */
     



    return 0; 
}

