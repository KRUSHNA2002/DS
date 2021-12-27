#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
 int data;
 struct node *next;

}*newnode,*head,*tail;
void create()
{
 char ch;
 do

{
 newnode=(struct node*)malloc(sizeof(struct node));
 printf("enter the data");
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
 }while(ch!='n');
 }
void display()
{struct node *temp;
 printf("the link link list is ");
 temp=head;
 while(temp!=NULL)
 {
  printf("%3d",temp->data);
  temp=temp->next;

 }
 }
 void del_from_begin()
 {
  struct node *temp;
  temp=head;
  head=head->next;
  free(temp);
 }
 void del_from_end()
 {
  struct node *temp,*prevnode;
  temp=head;
  while (temp->next!=NULL)
  {
   prevnode=temp;
   temp=temp->next;
  }
  prevnode->next=NULL;
  free(temp);
 }
 void del_from_pos()
 {
  int i=1,pos;
  struct node *nextnode,*temp;
  temp=head;
  printf("enter the position");
  scanf("%d",&pos);
  while(i<(pos-1))
  {
   temp=temp->next;
   i++;

  }
  nextnode=temp->next;
  temp->next=newnode->next;
  free(nextnode);
 }
 void main()
 {
  int no;
  clrscr();
  while(1)
  {
   printf("create \n");
   printf("display \n");
   printf("delete from begin \n");
   printf("delet e from end \n");
   printf("delete from pos \n");
   printf("enter your choice \n");
   scanf("%d",&no);
   switch(no)
   {
    case 1:create();
    break;
    case 2:display();
    break;
    case 3:del_from_begin();
    break;
    case 4:del_from_end();
    break;
    case 5:del_from_pos();
    break;
    case 6:exit(0);
    break;
    default:printf("invalid input");
   }
  }
 }


