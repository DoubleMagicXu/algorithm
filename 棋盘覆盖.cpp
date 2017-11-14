#include<iostream>
using namespace std;
static  int tile=0;//瓦片
static int Board[64][64]={0};
void cover(int r,int c,int br,int bc,int size );//行号 列号 黑点行号 黑点列号 大小
int main()
{
  return 0;
}
void cover(int r,int c,int br,int bc,int size )
{
  int t=tile++;//体会一下
  int s=size/2;
  if(size<=1)//无需处理
  {
    return;
  }
  if(br<=r+s-1&&bc<=c+s-1)//在左上角的情况
  {
    cover( r,c,br,bc,s);
  }
  else//不在左上角
  {
    Board[r+s-1][c+s-1]=t;
  }
  if(br>r+s-1&&bc<=c+s-1)//在左下角的情况
  {
    cover( r,c,br,bc,s);
  }
  else//不在左下角
  {
    Board[r+s][c+s-1]=t;
  }
  if(br<=r+s-1&&bc>c+s-1)//在右上角的情况
  {
    cover( r,c,br,bc,s);
  }
  else//不在右上角
  {
    Board[r+s-1][c+s]=t;
  }
  if(br>r+s-1&&bc>c+s-1)//在右下角的情况
  {
    cover( r,c,br,bc,s);
  }
  else//不在右下角
  {
    Board[r+s][c+s]=t;
  }
}
