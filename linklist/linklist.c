#include<stdio.h>
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
  print("(1)to insert\n(2)to view\n(3)to delete(4)to exit\n enter your choice");
  switch(choice)
    {
    case 1:
      printf("int number to be inserted");
      scanf("%d",&value);
      rvalue=linsert(&head,value);
      break;
    case 2:
      


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

      *head=new1

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
