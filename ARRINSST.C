#include<stdio.h>
#include<conio.h>
#define N5
int stack[5];
int top=-1;
void push()
{
 int x,n;
 printf("enter the data");
 scanf("%d",&x);
 if(top==n-1)
 {
  printf("overflow");
 }
 else
 {
  top++;
  stack[top]=x;

 }
}
void pos()
{
 int item;
 if(top==-1)
 {
  printf("underflow");

 }
 else
 {
 item=stack[top];
 top--;
 printf("%d",&item);
}
}
void peak()
{
if(top==-1)
{
 printf("stack is empty");
}
else
{
printf("%d", stack[top]);

}
}
void display()
{
 int i;
 for (i=top;i>0;i--);
 {
  printf("%d",stack[i]);

 }
 }
 void main()
 {
  int no;
  clrscr();
  while(1)
  {
  printf("\n1 push");
  printf("\n2 topo");
  printf("\n3 peak");
  printf("\n4 display");
  printf("\n5 exit");
  printf("enter your choice");
  scanf("%d",&no);
  switch(no)
  {
   case 1:push();
   break;
   case 2:pop();
   break;
   case 3:peak();
   break;
   case 4:display();
   break;
   case 5:exit(0);
   break;
   default:printf("invalid input");
  }
  }
 }


