/*************************************************************************
	> File Name: 快速排序.cpp
	> Author:
	> Mail:
	> Created Time: 2017年07月05日 星期三 21时14分23秒
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;
template <class Type>
int partition(Type a[],int p,int r)
{
  int i=p;
  int j=r+1;
  Type x=a[p];
  while(true)
  {

    while(a[++i]<x&&i<r);
    while(a[--j]>x);
    if(i>=j)break;
    swap(a[i],a[j]);

  }
  a[p]=a[j];
  a[j]=x;
  return j;
}
template <class Type>
void quickSort(Type a[],int p,int r)
{
  if(p<r)
  {
    int q=partition(a,p,r);
    quickSort(a,p,q-1);
    quickSort(a,q+1,r);
  }
}
int main()
{
  int a[10]={10,9,8,7,6,5,4,3,2,1};
  quickSort(a,0,9);
  for(int i=0;i<10;i++)
  {
    cout<<a[i]<<endl;
  }
  return 0;
}
