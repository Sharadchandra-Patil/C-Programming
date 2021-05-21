 #include<stdio.h>
int call_rec1(int v1,int v2);

int main(void) 
{
	int val1=2,val2=2;

	call_rec(val1,val2);
	printf(" in main Val1=%2d Val2=%2d \t",val1,val2);

	return 0;    
}
int call_rec(int v1,int v2)    
{
	if(v1 && v2)     
		call_rec(--v1,v2--);    

	printf("%2d %2d \t",v1,v2);  
}
