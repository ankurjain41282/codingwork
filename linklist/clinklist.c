#include<stdio.h>
#include<stdlib.h>

struct node{
  int element;
  struct node* next;
};

int cinsert(struct node**,struct node**,int value);
int cdelete(struct node*,int position);
int cview(struct node*,struct node*);
// struct node*rear;
//rear=NULL;
int main()
{
  struct node*front;

  int element[]={1,2,3,4,5};
  int counter=0;
  struct node *rear;
  int sizeofelement=sizeof(element)/sizeof(int);
  printf("%d",sizeofelement);
  //printf("enter the element to be inserted");
  //scanf("%d",&element);
  front=(struct node*)malloc(sizeof(struct node*));
  front=NULL;
  rear=(struct node*)malloc (sizeof(struct node*));
  rear=front;
  
  for(counter=0;counter<sizeofelement;counter++)
    {
      cinsert(&front,&rear,element[counter]);
    }
  cview(front,rear);
}


int cinsert(struct node** front,struct node**rear,int value)
 {
   struct node*new1;
   new1=(struct node*)malloc(sizeof(struct node*));
   new1->element=value;
   if(*rear==NULL)
     {
       (*front)=(*rear)=new1;
        // (*front)->element=value;
       //(*front)->next=new1;
       
       // new1->next=*front;
     }
   else
     {
       

       // new1->element=value;
       (*rear)->next=new1;
       
     }
   *(rear)=new1;
   (*rear)->next=*front;
       return 0;
 }
int cview(struct node*front,struct node*rear)
{
  struct node*temp;
  temp=front;
  while(temp->next!=front)
    {
      printf("%d\n",temp->element);
	temp=temp->next;
    }
}
