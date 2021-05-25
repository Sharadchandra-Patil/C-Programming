struct bit
{
    unsigned int a:3;
    int b:3;
};
int main()
{
    struct bit b1;
    b1.a=4; // 4
    b1.b=1000;
    printf("%d\n",b1.a);
    printf("%d",b1.b);
}