using namespace std;
#include<iostream>
bool haspathhelper(int**maze,int size,int**hasvisited,int corx,int cory)
{
  //base case:if we have reached
  if(corx==size && cory==size)
    {
      return true;
    }
  
  //if we have reached the extreme: 
  if(corx<0||cory<0||corx>size||cory>size||maze[corx][cory]==0||hasvisited[corx][cory]==1)
    {
      return false;

    }
  hasvisited[corx][cory]=1;
 if(haspathhelper(maze,size,hasvisited,corx+1,cory))
    {
      return true;
    }
 if(haspathhelper(maze,size,hasvisited,corx-1,cory))
   {

     return true;
   }
 if(haspathhelper(maze,size,hasvisited,corx,cory+1))
   {
     return true;
   }
 if(haspathhelper(maze,size,hasvisited,corx,cory-1))
   {
     return true;
   }
 hasvisited[corx][cory]=0;
 return false;
}
bool haspath(int**maze,int size)
{
  int **hasvisted;
  bool haspathvalue;
  *solution=new int[size];
  for(int x=0;x<size;x++)
    {
      hasvisted[x]=int[size];
    }
  hatpathvalue=haspathhelper(maze,size,solution,0,0)
    {
     


    }

  }

int main()
{


}
