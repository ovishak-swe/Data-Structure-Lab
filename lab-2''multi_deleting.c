/** If same value have this program then both are delete by the program**/
#include <stdio.h>

int main()
{
    int a[50];
    int m,n,i,b[10],k=0,l=0;
    printf("How many Number you want to input???\n");
    scanf("%d",&n);

    for(i=0;i<n;i++){
    printf("A[%d]=",i);
    scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
    {
        printf("\nA[%d]=%d",i,a[i]);
    }


    printf("\nEnter The value you want to delete:");
    scanf("%d",&m);


    for(i=0;i<n;i++){
        if(a[i]==m){
            b[k]=i;
            k++;
        }
    }




    for(l=0;l<k;l++){
    for(i=b[l];i<n;i++){
        a[i]=a[i+1];
    }
    b[l+1]=b[l+1]-(l+1);
    }

    if(k==0){
        printf("\nElement Not found");
    }

    for(i=0;i<n-k;i++){
        printf("\nA[%d]=%d",i,a[i]);
    }
    return 0;
}
