using namespace std;
#include<iostream>
void generateperm(int*array,int sizeofarray,int counter)
{
  int countery=0,x;
  if(counter==sizeofarray)
    {
      for(countery=0;countery<sizeofarray;countery++)
	{
	  std::cout<<array[countery];
	}
      std::cout<<endl;
     }
  //  generateperm(array+1,sizeofarray,counter+1);
  /* while(countery<=counter)
    {
      std::cout<<array[countery];
      countery++;
    }
  std::cout<<endl;
  generateperm(array+1,sizeofarray,counter+1);*/
   for(x=counter;x<sizeofarray;x++)
    {
        swap(array[0],array[x]);
	generateperm(array,sizeofarray,counter+1);
	swap(array[x],array[0]);
    }

}
int main()
{
  int array[]={1,2,3};
  int sizeofarray=0,counter=0;
  sizeofarray=sizeof(array)/sizeof(int);
  generateperm(array,sizeofarray,counter);
 


}
