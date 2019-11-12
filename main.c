#include <stdio.h>
#include <stdlib.h>
#define capacity 5    //capacity of stack
int stack[capacity],top=-1;
void push(int);
int pop(void);
int isEmpty(void);
int isFull(void);
void peek(void);
void transverse(void);
void main()
{     int choice,item;
while (1)
{
    printf("1.push\n");
    printf("2.pop\n");
    printf("3.peek\n");
    printf("4.transverse\n");
    printf("5.quit\n");
    printf("enter your choice : ");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1 : printf("enter element");
                 scanf("%d",&item);
                 push(item);
                 break;
        case 2 : item = pop();
                 if (item==0)
                 {
                    printf("stack is empty\n");
                 }
                 else
                 {
                    printf("%d element is popped\n",item);
                 }
                 break;
        case 3 : peek();
        break;
        case 4 : transverse();
        break;
        case 5 : exit(0);
        break;
        default : printf("\n\n**invalid input**\n\n");

    }
}
    return 0;
}
void push(int x)
{
   if (isFull())
   {
        printf("stack is full\n\n");
   }
   else
   {
        top++;
        stack[top]=x;
        printf("element inserted\n\n");
   }
}
int isFull()
{
    if(capacity==top-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int pop()
{
    if (isEmpty())
    {
        return 0;
    }
    else
    {
        return stack[top--];
    }
}
int isEmpty()
{
    if(top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void peek()
{
    if (isEmpty())
    {
        printf("stack is empty\n");
    }
    else
    {
            printf("%d is the peak element\n",stack[top]);
    }
}

void transverse()
{
    if(isEmpty())
    {
        printf("stack is empty\n");
    }
    else
    {
        int i;
        for(i=0;i<=top;i++)
        {
            printf("%d ",stack[i]);
        }
    }
}






