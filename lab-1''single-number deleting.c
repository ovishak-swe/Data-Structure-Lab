/** Only 1 number can delete by the code**/
#include<stdio.h>
int main()
{
    int array[20];
    int n,i,j,k,item,element,index;
    printf("enter the element of the array:");
    scanf("%d",&n);
    printf("\n input %d integer number\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("element at [%d]=%d\n",i,array[i]);
    }
    printf("enter the array position which you want to delete:");
    scanf("%d",&element);
    for(k=0;k<n;k++)
    {
        if (array[k]==element)
        {
            index=k;
        }
    }
    for(j=index;j<n;j++)
    {
        array[j]=array[j+1];
    }
    printf("\nAfter deleting the element: \n");
    for(i=0;i<n-1;i++)
    {
        printf("\nElement at [%d]=%d\n",i,array[i]);
    }
}
