#include<stdio.h>

	int main(int argv, char *argc[])
	{
		
        		//printf("%d %d %d %d", *argc[argv], *argv[argc], *(argc + argv), *(argv + argc));
				printf("%d ", *argc[argv-1]); //*argv[argc], *(argc + argv), *(argv + argc));
        	return 0;
    	}
