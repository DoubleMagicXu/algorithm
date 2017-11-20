#include<iostream>
#include<algorithm>
using namespace std;
/*01背包问题
典型的动态规划问题
*/
/*
存放价值的数组v 存放重量的数组w，背包最大重量为c 数组长度为n
 二维数组m[i][j] 表示最大价值
*/

void knapSack(int *v,int *w,int c,int n,int **m);
void traceBack(int **m,int *s );
int main()
{
  return 0;
}
void knapSack(int *v,int *w,int c,int n,int **m)
{
  /*m[i][j]表示从第i+1到第n件物品挑选，且背包剩余容量为j时的最大价值。
  一共n件物品,背包容量为c,所以二维数组:m[n][c];
  */
  //首先开始第一层的初始化
  int jMax=min(w[n-1]-1,c);//这样保证数组不会越界
  for(int j=0;j<=jMax;j++)
  {
    m[n-1][j]=0;//背包容不下
  }
  for(int j=jMax+1;j<=c;j++)
  {
    m[n-1][j]=v[n-1];//容得下
  }
  for(int i=n-2;i>=0;i--)
  {
    jMax=min(w[i]-1,c);//保证数组不会越界
    for(int j=0;j<=jMax;j++)
    {
      m[i][j]=m[i+1][j];
    }
    for(int j=jMax+1;j<=c;j++)
    {
      m[i][j]=max(v[i]+m[i+1][j-w[i]],m[i+1][j]);
    }
  }
}
void traceBack(int **m,int *s,int *w,int c)
{
  for(int i=0;i<n;i++)
  {
    if(m[i][c]==m[i+1][c])
    {
      s[i]=0;//没装进背包里
    }
    else
    {
      s[i]=1;
      c-=w[i];//值传递，不改变实际c值.
    }
  }
}
