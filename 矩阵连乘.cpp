##include<iostream>
uisng namespace std;
void matrixChain(int *p,int length,int ** m,int **s);//矩阵个数为length个
void traceBack(int i,int j,int **s);
int  main()
{
  return 0;
}
void matrixChain(int *p,int length,int ** m,int **s)
{
  //首先初始化矩阵
  for(int i=0;i<n;i++)
  {
    m[i][i]=0;
  }
  //应该是三重循环
  for(int l=1;l<=n-1;l++)//矩阵之间间隔
  {
    for(int i=0;i<length-l;i++)
    {
      int j=i+l;//末尾=起始+间隔
      //首先初始化
      m[i][j]=m[i][i]+m[i+1]m[j]+p[i]*p[i+1]*p[j+1];
      s[i][j]=i;//在i处断开
      for(int k=i;k<j;k++)
      {
        int temp=m[i][k]+m[k+1][j]+p[i]*p[k+1]*p[j+1];
        if(temp<m[i][j])
        {
          m[i][j]=temp;
        }
      }
    }
  }
}
void traceBack(int i,int j,int **s)
{
  if(i==j)
  {
    return;
  }
  traceBack(i,s[i][j],s);
  traceBack(s[i][j]+1,j,s);
  cout<<"Multipy A"<<i<<","<<s[i][j];
  cout<<"and A"<<(s[i][j]+1)<<","<<j<<endl;
}
