 #include<stdio.h> 
 #pragma pack(1)
 struct test
 {
     int a; // 4 
     char b;// 1
     int c; // 4
     char c1;// 1  
}; 

int main()
{
    printf("%d",sizeof(struct test)); 
}