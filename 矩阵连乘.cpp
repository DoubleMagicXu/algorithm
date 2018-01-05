#include<iostream>
using namespace std;
template <class Type>
void mul(int *p,int n,Type *m,Type *s )
{
  //数组p长度为n+1
  for(int i=0;i<n;i++)
  {
    m[i][i]=0;//初始化１
  }
  for(int r=2;r<=n;r++)//长度
  {
      for(int i=0;i<=n-r;i++)//起始
      {
        int j=i+r-1;//末尾
        m[i][j]=m[i+1][j]+p[i]*p[i+1]*p[j+1];//注意
        s[i][j]=i;
        for(int k=i+1;k<j;k++)
        {
          int t=m[i][k]+m[k+1][j]+p[i]*p[k+1]*p[j+1];
          if(t<m[i][j])
          {
            m[i][j]=t;
            s[i][j]=k;
          }
        }
      }
  }
}
template <class Type>
void traceBack(int i,int j,Type *s)
{
  if(i==j)
  {
    return;
  }
  traceBack(i,s[i][j],s);
  traceBack(s[i][j]+1,j,s);
  cout<<"multiply A"<<i<<","<<s[i][j];
  cout<<"and A"<<s[i][j]+1<<","<<j<<endl;
}
int main()
{
  int p[7]={30,35,15,5,10,20,25};
  int m[6][6];
  int s[6][6];
  mul(p,6,m,s);
  cout<<m[0][5]<<endl;
  traceBack(0,5,s);
  return 0;
}
