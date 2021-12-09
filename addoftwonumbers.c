#include<stdio.h>
void main()
{
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    int t;
    int m=n-1;
    for(t=1;t<=m;t++)
    {
        if((t+m==n)&&(t!=m))
        printf("%d + %d\n ",t,m);   
        m--;
    }
    printf("hi");
}
