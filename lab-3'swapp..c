#include<stdio.h>
int main()
{
    int a[10];
    int n,i,j,swap;
    printf("enter your array size:");
    scanf("%d",&n);
    printf("enter your elements:");
    for(i=0;i<n;i++)
    {
        scanf("\n%d",&a[i]);
    }
    for(i=0;i<=(n-1);i++)
    {
        for(j=0;j<=(n-i-1);j++)
        {
            if(a[j]>a[j+1])
            {
               swap=a[j];
               a[j]=a[j+1];
               a[j+1]=swap;
            }
        }
    }
    printf("The elements value is:");
    for(j=0;j<n;j++)
    {
        printf("%d\n",a[j]);
    }
    return 0;
}
