#include<stdio.h>
#include<stdlib.h>
int printprime(int*array,int n)
{
  int counter;
  int x,y,z,i,j;
  for(x=2;x<n;x++){
    array[x]=1;
  }
  for(i=2;i<n;i++){
    if(array[i]==1){
      for(j=i;i*j<n;j++)
	array[i*j]=0;
    }

  }
   
}
int main()
{
  int n,counter;
  int *array;
  printf("enter n");
  scanf("%d",&n);
  array=(int*)malloc(sizeof(int)*n);
  printprime(array,n);
  for(counter=2;counter<n;counter++)
    {
      if(array[counter]){
      printf("%d",counter);
      }
      printf("\n");
    }
  return 0;
}
