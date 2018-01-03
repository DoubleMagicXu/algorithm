#include<iostream>
using namespace std;
template <class Type>
void copy(Type a[],Type b[],int p,int q)
{
  for(int i=p;i<=q;i++)
  {
    a[i]=b[i];
  }
}
template <class Type>
void merge(Type a[],Type b[],int p,int q,int r)
{
  int i=p;
  int j=q+1;
  int k=p;
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
}
template <class Type>
void mergeSort(Type a[],int p,int r)
{
  if(p<r)
  {
    int q=(p+r)/2;
    mergeSort(a,p,q);
    mergeSort(a,q+1,r);
    Type* b=new Type[r-p+1];
    merge(a,b,p,q,r);
    copy(a,b,p,r);
    //delete []b;
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
