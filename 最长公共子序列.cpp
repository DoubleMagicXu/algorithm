#include<iostream>
using namespace std;
template <class Type>
void lcsLength(int m, int n,char *x,char *y, Type *c, Type *b)
{
  for(int i=0;i<=n;i++)c[0][i]=0;
  for(int i=0;i<=m;i++)c[i][0]=0;
  for(int i=1;i<=m;i++)
  {
    for(int j=1;j<=n;j++)
    {
      if(x[i-1]==y[j-1])
      {
        c[i][j]=c[i-1][j-1]+1;
        b[i][j]=1;
      }
      else if(c[i-1][j]>=c[i][j-1])
      {
        c[i][j]=c[i-1][j];
        b[i][j]=2;
      }
      else
      {
        c[i][j]=c[i][j-1];
        b[i][j]=3;
      }
    }
  }

}
template <class Type>
void lcs(int i,int j,char *x,Type *b)
{
  if(i==0||j==0)return;
  if(b[i][j]==1)
  {
    lcs(i-1,j-1,x,b);
    cout<<x[i-1];
  }
  else if(b[i][j]==2)lcs(i-1,j,x,b);
  else lcs(i,j-1,x,b);
}

int main()
{
  char x[7]={'A','B','C','B','D','A','B'};
  char y[6]={'B','D','C','A','B','A'};
  int c[8][7];
  int b[8][7];
  lcsLength(7,6,x,y,c,b);
  cout<<c[7][6]<<endl;
  lcs(7,6,x,b);
  return 0;
}
