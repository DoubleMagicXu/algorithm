#include<iostream>
using namespace std;
int find(int *a,int length,int value);
int main()
{
  return 0;
}
int find(int *a,int length,int value)
{
  int left=0;
  int right=length-1;
  while(left<=right)
  {
    int middle=(left+right)/2;
    if(a[middle]==value)
    {
      return middle;
    }
    if(a[middle]>value)
    {
      right=middle-1;
    }
    else
    {
      left=middle+1;
    }
  }
  return -1;
}
