#include<iostream>
using namespace std;
/*
min{bi,aj}>=min{bj,ai}
n1{i|ai<bi}   n2{i|ai>=bi};
n1按ai非减序排列１，n2按bi非增排列
n1中作业接n2中作业
*/
template <class Type>
int partition(Type *a,int p,int r)
{
  int i=p;
  int j=r+1;
  Type x=a[p];
  while(true)
  {
    while(a[++i]<=x&&i<r);
    while(x<=a[--j]);
    if(i>=j)break;
    swap(a[i],a[j]);
  }
  a[p]=a[j];
  a[j]=x;
  return j;
}
template <class Type>
void quickSort(Type *a,int p,int r)
{
  if(p<r)
  {
    int k=partition(a,p,r);
    quickSort(a,p,k-1);
    quickSort(a,k+1,r);
  }
}
int flowShop(int n,int *a,int *b,int *c )
{
  class JOb
  {
  public:
    int operator <=(Job a)const
    {
      return(key<=a.key);
    }
    int key;
    int index;
    bool job;
  };
  Job *d=new Job[n];
  for(int i=0;i<n;i++)
  {
    d[i].key=a[i]<b[i]?a[i]:b[i];
    d[i].job=a[i]<b[j];
    d[i].index=i;
  }
  //sort(d,n);
  quickSort(d,0,n-1);
  int p=0;
  int r=n-1;
  for(int i=0;i<n;i++)
  {
    if(d[i].job)
    {
      c[p++]=d[i].index;

    }
    else
    {
      c[k--]=d[i].index;
    }
  }
  p=a[c[0]];
  r=p+b[c[0]];
  for(int i=1;i<n;i++)
  {
    p+=a[c[i]];
    k=p<k?k+b[c[i]]:p+b[c[i]];
  }
  delete []d;
  return r;
}
