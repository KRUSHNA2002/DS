#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
 int data;
 struct node *right;
 struct node *left;

};

  struct node *insert(struct node *p,int d)
  {
  if(p==NULL)
  {
  p=(struct node*)malloc(sizeof(struct node));
  p->left=p->right=NULL;
  p->data=d;
  }
  else
  {
   if(d<p->data)
   {
    p->left=insert(p->left,d);
   }
   else
   if(d>p->data)
   {
    p->right=insert(p->right,d);
   }
  }
 return p;
 }


void preorder(struct node *root)
{
 if(root==0)
 {
 return ;
 }
 printf("%d \t",root->data);
 preorder(root->left);
 preorder(root->right);

}
void inorder(struct node *root)
{
 if(root==0)
 {
 return ;
 }
 inorder(root->left);
 printf("%d \t",root->data);
 inorder(root->right);
}
int postorder(struct node *root)
{
 if(root==0)
 {
 return 0;
 }
 else
 {
 postorder(root->left);
 postorder(root->right);
 printf("%d \t",root->data);
}
 return 1;
}
int countnode1(struct node *root)
{
 int count=0;
 if(root==NULL)
 {
  return 0;
 }
 else
 {
  count=1+countnode1(root->left)+countnode1(root->right);
  return(count);
 }
}
int countleaf(struct node *root)
{
 int c;
 if(root==0)
 {
 return 0;
 }
 else if((root->left==NULL)&&(root->right==NULL))
 {
  return 1;
 }
 else
 {
  c=(countleaf(root->left)+countleaf(root->right));
  return c;
 }
}
 int countnonleaf(struct node *root)
 {
  int c1;
  if(root==NULL)
  {
   return 0;
  }
  else
  {
   if(root->left==NULL && root->right==NULL)
   return 0;
   else
   c1=(1+countnonleaf(root->left)+countnonleaf(root->right));
   return c1;
  }
}

void main()
{
   int x,ch,count,c,c1;
   struct node *root=NULL;
   do
   {
     printf("\n1.insert \n2.preorder \n3.inorder \n4.postorder \n5.contnode \n6.countleaf node \n7.count non leaf node \n8.exit \n");
     scanf("%d",&ch);
    switch(ch)
   {
    case 1:printf("insert \n :");
     scanf("%d",&x);
    root=insert(root,x);
    break;
    case 2:printf("preorder \n :");
	    preorder(root);
	    break;
    case 3:printf("inorder \n :");
	   inorder(root);
	   break;
    case 4:printf("postorder \n :");
	   postorder(root);
    break;
    case 5:count=countnode1(root);
    printf("no of node are %d :",count);
    break;
    case 6:c=countleaf(root);
	   printf("no of leaf nodes are %d:",c);
    break;
    case 7:c1=countnonleaf(root);
	  printf("no of leaf nodes are %d :",c1);
    break;
    case 8:exit(0);
    break;
    default:printf("invalid input");
    }
    }
    while(ch>0 && ch<8);

}
