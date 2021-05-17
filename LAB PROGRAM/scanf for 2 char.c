#include <stdio.h>

int main()
{
        char ch1, ch2;

        printf("Enter char1 :: ");
        scanf("%c", &ch1);
        
       
        printf("Enter char2 :: ");
        //getchar();
        scanf("%*c%c", &ch2);
        
        printf("\n ch1=%c ch2=%c [%d]", ch1, ch2, ch2);
        return 0;
}
