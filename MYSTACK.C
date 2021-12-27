#include<stdio.h>
#include<conio.h>
#define max 20
typedef struct stack
{
 int data [max];
 int top;

}stack;
void init(stack *);
void push(stack *,int);
int pop(stack *);
int isfull(stack *);
int isempy(stack *);
void display(stack *);
void init(stack *s)
{
s->top=-1;
printf("\n initilisezed succesfully");
}
void push(stack *s,int x)
{
 s->top=s->top+1;
 s->data[s->top]=x;
 }
int pop(stack *s)
{
 int x;
 x=s->data[s->top];
 s->top=s->top-1;
 return x;
}
int isfull(stack *s)
{
 if(s->top==max-1)
 return 1;
 else
 return 0;

}
int isempy(stack *s)
{
 if(s->top==-1)
 return 1;
 else
 return 0;
}
void display(stack *s)
{
 int i;
 for(i=s->top;i>0;i--)
 {
 printf("%d",s->data[i]);
 }
}
void main()
{
 struct stack *s;
 int x,ch,i;
 clrscr();
 do
 {
  printf("\n1 initilized \n2 push \n3 pop \n4 isfull \n5 isempty \n6 display \n7 exit");
  printf("\n enter your choice:");
  scanf("%d",&ch);
  switch(ch)
  {
  case 1:
  init(s);
  break;
  case 2:
  if(isfull(s))
  printf("\n can not insert an elements.. overflow");
  else
  {
  printf("enter to the data to insert..");
  scanf("%d",&x);
  push(s,x);
  }
  break;
  case 3:if(isempy(s))
  printf("\n can not delet an element... underflow");
  else
  {
  x=pop(s);
   printf("\n element poped...%d ",x);
  }
  break;
  case 4:
  if(isfull(s))
  printf("\n stack is full");
  else

  printf("\n stack is not full....");

  break;
  case 5:
  if(isempy (s))
  printf("\n stack is empy..");
  else
  printf("\n stack is not empy");

  break;
  case 6:
  printf("\n stack contents:");
  display(s);
  break;
  case 7:exit(0);
  }
 }      while(ch!=7);
}