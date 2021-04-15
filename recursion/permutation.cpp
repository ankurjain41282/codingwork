using namespace std;
#include<iostream>
void generateperm(int*array,int size,int counter)
{
  int countery=0;
  if(counter<=size)
    {
      return;
    }
  while(countery<=counter)
    {
      std::cout<<array[countery];
    }
  generateperm(array+1,size,counter+1);
}
int main()
{
  int array[]={1,2,3};
  int sizeofarray,x,counter=0;
  sizeofarray=sizeof(array)/sizeof(int);
  //generateperm(array,sizeofarray);
  for(x=0;x<sizeofarray;x++)
    {
        swap(array[0],array[x]);
	generateperm(array,sizeofarray,counter);
	swap(array[x],array[0]);
    }



}
