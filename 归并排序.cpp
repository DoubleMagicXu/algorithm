#include<iostream>
using namespace std;

template <class Type>
void merge(Type a[],int p,int q,int r)
{
  int i=p;
  int j=q+1;
  int k=0;
  Type b[r-p+1];
  while(i<=q&&j<=r)
  {
    if(a[i]<=a[j])
    {
      b[k++]=a[i++];
    }
    else
    {
      b[k++]=a[j++];
    }
  }

    while(i<=q)
    {
      b[k++]=a[i++];
    }
    while(j<=r)
    {
      b[k++]=a[j++];
    }
    for(int i=0;i<r-p+1;i++)
    {
      a[i+p]=b[i];
    }
}
template <class Type>
void mergeSort(Type a[],int p,int r)
{
  if(p<r)
  {
    int q=(p+r)/2;
    mergeSort(a,p,q);
    mergeSort(a,q+1,r);
    merge(a,p,q,r);
  }
}
int main()
{
   int a[10]={10,9,8,7,6,5,4,3,2,1};
   mergeSort(a,0,9);
   for(int i=0;i<10;i++)
   {
     cout<<a[i]<<endl;
   }
}
