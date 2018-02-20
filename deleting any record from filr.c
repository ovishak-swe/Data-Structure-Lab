
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,i=0;
    char ch;
    FILE *fptr,*fpt;
    fptr=fopen("file.txt","r");
    if(fptr==NULL){
        printf("Error..\tfile.txt not found.");
        printf("\nPlease first write something in file.txt");
        printf("\nThen try again");
        exit(0);
    }
    ch=getc(fptr);
    while (ch != EOF)
        {
            printf("%c", ch);
            ch = getc(fptr);
        }

        printf("\nEnter line you want to delete:");
        scanf("%d",&a);
        a--;
        int b=a;
        rewind(fptr);
        fpt=fopen("new.txt","w");

        ch=getc(fptr);
        while(ch!=EOF)
        {
            if(ch=='\n'){
                i++;
            }
            if(i!=a){
                putc(ch,fpt);
            }
            ch=getc(fptr);
        }
        fclose(fpt);
        fclose(fptr);
        remove("file.txt");
        rename("new.txt","file.txt");
        printf("\nNew data:\n");
        fptr=fopen("file.txt","r");
        ch=getc(fptr);
        while (ch != EOF)
            {
                printf("%c", ch);
                ch = getc(fptr);
            }

    return 0;
}
