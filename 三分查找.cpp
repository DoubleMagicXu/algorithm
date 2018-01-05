#include<iostream>
using namespace std;
int find(int *a int length,int value);
int main()
{
  return 0;
}
int find(int *a int length,int value)
{
  //三分查找
  int left=0;
  int right=length-1;
  while(left<=right)
  {
    int leftMiddle=(right-left)/3+left;
    int rightMiddle=right-(right-left)/3;
    if(a[leftMiddle]==value)
    {
      return leftMiddle;
    }
    if(a[leftMiddle]>value)
    {
      right=leftMiddle-1;
    }
    else
    {
      if(a[rightMiddle]==value)
      {
        return rightMiddle;
      }
      if(a[rightMiddle]<middle)
      {
        left=middle+1;
      }
      else
      {
        left=leftMiddle+1;
        righ=rightMiddle-1;
      }
    }
  }
  return -1;
}
