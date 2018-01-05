#include<iostream>
using namespace std;
int partition(int *a,int start,int end);
void quickSort(int *a,int start,int end);
void Swap(int *a ,int *b)
{
  int temp=*a;
  *a=*b;
  *b=temp;
}
int main()
{
  return 0;
}
void quickSort(int *a,int start,int end)
{
  if(start<end)
  {
    int middle=partition(a,start,end);
    quickSort(a,start,middle-1);
    quickSort(a,middle+1,end);
  }
}
int partition(int *a,int start,int end)//分割
{
  int i=start;
  int j=end+1;
  int key=a[start];
  while(true)
  {
    while(a[++i]<key&&i<end);
    while(a[--j]>key);
    if(i>=j)
    {
      break;
    }
    Swap(a[i],a[j]);
  }
  a[start]=a[j];//注意
  a[j]=key;
  return j;
}
