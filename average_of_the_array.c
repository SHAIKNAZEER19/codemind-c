#include<stdio.h>
int main()
{
    int n,i;
    float s=0,avg;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
        
    }
    avg=s/n;
    printf("%.2f",avg);  
    
}