#include<iostream>
#include<algorithm>
using namespace std;
template <class Type>
void knapSack(int *v,int *w,int c,int n, Type  *m  )
{
  int jMax=min(w[n-1]-1,c);
  for(int i=0;i<=jMax;i++)
  {
    m[n-1][i]=0;
  }
  for(int i=w[n-1];i<=c;i++)
  {
    m[n-1][i]=v[n-1];
  }
  for(int i=n-2;i>=0;i--)
  {
    jMax=min(w[i]-1,c);
    for(int j=0;j<=jMax;j++)
    {
      m[i][j]=m[i+1][j];
    }
    for(int j=w[i];j<=c;j++)
    {
      m[i][j]=max(m[i+1][j],m[i+1][j-w[i]]+v[i]);
    }
  }
}
template <class Type>
void traceBack(Type *m,int *w,int c,int n,int *x)
{
  for(int i=0;i<n-1;i++)
  {
    if(m[i][c]==m[i+1][c])
    {
      x[i]=0;
    }
    else
    {
      c-=w[i];
      x[i]=1;
    }
  }
  x[n-1]=(m[n-1][c])?1:0;
}
int main()
{
  int w[5]={2,2,6,5,4};
  int v[5]={6,3,5,4,6};
  int x[5];
  int m[5][11];
  int c=10;
  knapSack(v,w,c,5,m);
  traceBack(m,w,c,5,x);
  cout<<m[0][10]<<endl;
  for(int i=0;i<5;i++)
  {
    cout<<x[i]<<endl;
  }
  return 0;
}
