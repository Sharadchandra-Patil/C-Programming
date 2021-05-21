#include<stdio.h>
// case 2 variable is constant , value of pointer si const and address of pointer is not const

int main(void)
{
    float pj=10.2f;
    const float pi=3.142;
    const float *ptr=&pi;
    // or
    //float const *ptr=&pi;

    printf("\n pi=%.3f *ptr=%.3f pj=%.3f", pi, *ptr, pj);
    
    //*ptr=4.4f; // we can not  change value pi as  value of pointer const
    
    printf("\n pi=%.3f *ptr=%.3f", pi, *ptr);

    ptr=&pj; // allowred as add of pointer is not const
    printf("\n pi=%.3f *ptr=%.3f pj=%.3f", pi, *ptr, pj);

    return 0;
}