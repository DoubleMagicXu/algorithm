#include<iostream>
using namespace std;
/*
min{bi,aj}>=min{bj,ai}
n1{i|ai<bi}   n2{i|ai>=bi};
n1按ai非减序排列１，n2按bi非增排列
n1中作业接n2中作业
*/
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
  sort(d,n);
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
