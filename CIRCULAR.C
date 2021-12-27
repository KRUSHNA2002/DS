#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
 int data;
 struct node *next;
}*newnode,*head,*tail;
void create();
{
 char ch;
 do;
}


{
 newnode=(struct node*)malloc(sizeof(struct node));
 printf("enter the data \n");
 scanf("%d",&newnode->data);
 newnode->next=NULL;
 if(head==NULL)
 {
  head=newnode;
  tail=newnode;
 }
 else
 {
  tail->next=newnode;
  tail=newnode;
 }
 printf("do you want to create another \n");
 ch=getche();
 }while(ch!='n')
 }
 void display()
 {
  struct node *temp;
  printf("the link list is ");
  temp=head;
  while(temp!=NULL)
  {
   printf("%3d",temp->data);
   temp=temp->next;
  }
 }
				 c

}