#include<iostream>
using namespace std;
/*
二维数组作为函数参数方法:
1   mul(int a[][3]);
2   mul(int a[]);//*(p + colNum * i + j
３　模板

*/

template <class Type>
void mul(Type *a,Type *b,Type *c,int ar,int ac,int br,int bc)//通用方法:　模板 Type*
{
  if(ac!=br)return;
  for(int i=0;i<ar;i++)
  {
    for(int j=0;j<bc;j++)
    {
      c[i][j]=0;
      for(int k=0;k<ac;k++)
      {
        c[i][j]+=a[i][k]*b[k][j];
      }
    }
  }
}

int main()
{
  int a[2][2]={1,1,1,1};
  int b[2][2]={1,1,1,1};
  int c[2][2];
  mul(a,b,c,2,2,2,2);
  for(int i=0;i<2;i++)
  {
    for(int j=0;j<2;j++)
    {
      cout<<c[i][j];
    }
    cout<<endl;
  }
}
