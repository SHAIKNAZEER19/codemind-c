#include<stdio.h>
int main()
{
    int a, b, big;
    scanf("%d%d", &a, &b);
    if(a>b)
        big=a;
    else
        big=b;
    printf("%d",big);
    return 0;
}