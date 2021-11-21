#include<stdio.h>
#include<stdlib.h>

struct node{
  int element;
  struct node* next;
};

int cinsert(struct node**,struct node*,int value);
int cdelete(struct node*,int position);
int cview(struct node*);


int main()
{
  struct node*front;
  struct node*rear;
  int element[]={1,2,3,4,5};
  int counter=0;
  int sizeofelement=sizeof(element)/sizeof(int);
  //printf("enter the element to be inserted");
  //scanf("%d",&element);
  front=(struct node*)malloc(sizeof(struct node*));
  front->next=NULL;
  rear=front;
  
  for(counter=0;counter<sizeofelement;counter++)
    {
      cinsert(&front,rear,element[counter]);
    }

}


 int cinsert(struct node** front,struct node* rear,int value)
 {
   struct node*new1;
   new1=(struct node*)malloc(sizeof(struct node*));
   new1->element=value;
   if((*front)->next==NULL)
     {
     
       (*front)->element=value;
       (*front)->next=new1;
     }
   else
     {
        new1->element=value;
       rear->next=new1;
       
     }
       rear=new1;
       new1->next=*front;
       return 0;
 }
