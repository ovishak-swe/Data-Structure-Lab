/*
*c program to implement stack, stack is a   LIFO data structure.
*stack operations: push(insert operation)-pop(delete operation)
*and display stack.
*/
#include<stdio.h>
#define MAXSIZE 5

struct stack
{
    int stk[MAXSIZE];
    int top;
};
typedef struct stack STACK;
STACK s;
void push(void);
int pop(void);
void Display(void);

void main()
{
    system("Color 4F");
    int choice;
    int option=1;
    s.top = -1;

    printf("STACK OPERATION\n");
    while (option)
    {
        printf("---------------------------------------------\n");
        printf("     1     --->  push                     \n");
        printf("     2    --->  pop                      \n");
        printf("     3     --->  Display                  \n");
        printf("     4    --->  Exit                     \n");
        printf("----------------------------------------------\n");

        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            Display();
            break;
        case 4:
            return;
        }
        fflush (stdin);
        printf ("Do you want to continue(type 0 or 1)?\n");
        scanf  ("%d",&option);
    }
}
/* Function to add an element to the stack*/
void push ()
{
    int num;
    if(s.top == (MAXSIZE - 1))
    {
        printf("Stack is Full\n");
        return;
    }
    else
    {
        printf("Enter the element to be pushed\n");
        scanf("%d", &num);
        s.top = s.top+1;
        s.stk[s.top] = num;
    }
    return;
}
/* Function Delete operation from the srack */
int pop()
{
    int num;
    if(s.top == -1)
    {
        printf("Stack is Empty\n");
        return(s.top);
    }
    else
    {
        num = s.stk[s.top];
        printf("poped element is = %d\n",s.stk[s.top]);
        s.top = s.top - 1;
    }
    return(num);
}
/* Function to Display the status of the stack */
void Display()
{
    int i;
    if(s.top == -1)
    {
        printf("stack is empty\n");
        return;
    }
    else
    {
        printf("\n The status of the stack is\n");
        for(i=s.top; i>=0; i--)
        {
            printf("%d\n",s.stk[i]);
        }
    }
    printf("\n");
}
