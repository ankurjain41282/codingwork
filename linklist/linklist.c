#include<stdio.h>
#include<stdlib.h>
struct node{
  int number;
  struct node* next;
};
int linsert(struct node**,int);
int lview(struct node*);
int ldelete(struct node*,int);

int main()
{
  int choice,value,position,rvalue;
  struct node*head;
  head=(struct node*)malloc(sizeof(struct node));
  head=NULL;
  for(;;){
  printf("(1)to insert\n(2)to view\n(3)to delete\n(4)to exit\n enter your choice");
  scanf("%d",&choice);
  switch(choice)
    {
    case 1:
      printf("int number to be inserted");
      scanf("%d",&value);
      rvalue=linsert(&head,value);
      break;
    case 2:
      lview(head);
      break;
    case 3:
      printf("enter the element to delete");
      scanf("%d",&value);
      ldelete(head,value);
      break;
    case 4:
      exit(0);
      break;
	

    }
  }
}
int linsert(struct node**head,int value)
{
  struct node* new1;
  struct node*temp=NULL;
  new1=(struct node*)malloc(sizeof(struct node));
  new1->number=value;
  new1->next=NULL;
  if(*head==NULL)
    {

      *head=new1;

    }
  else
    { temp=*head;
      while(temp->next!=NULL)
	{
	  temp=temp->next;
	  
	}
      temp->next=new1;
    }
}
int lview(struct node *head)
{
  struct node*temp;
  temp=head;
  while(temp!=NULL)
    {
      printf("%d",temp->number); 
      temp=temp->next;
    }
  return 0;}

int ldelete(struct node* head,int value){
  struct node*new1;
  struct node*temp1;
  new1=head;
  temp1=new1->next;
  while(temp1->value!=value||temp1->next!=NULL)
    {
      new1=new1->next;
      temp1=temp1->next;
      

    }
  

}
