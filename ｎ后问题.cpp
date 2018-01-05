#include<iostream>
#include<algorithm>
class Queen
{
  friend int nQuen(int);
private:
  bool place(int k);
  void backTrack(int t);
  int n;//皇后个数
  int *x;
  int sum;
};
bool Queen::place(int k)
{
  for(int i=0;i<k;i++)
  {
    if(abs(k-i)==abs(x[i]-x[k])||x[i]==x[k])return false;
  }
  return true;
}
void Queen::backTrack(int t)
{
  if(t>=n) sum++;
  else
  {
    for(int i=0;i<n;i++)
    {
      x[t]=i;
      if(place(t)) backTrack(t+1);
    }
  }
}
int nQuen(int n)
{
  Queen X;
  X.n=n;
  X.sum=0;
  int *p=new int[n];
  for(int  i=0;i<n;i++) p[i]=0;
  X.x=p;
  X.backTrack(0);
  delete []p;
  return X.sum;
}
int main()
{
  std::cout<<nQuen(8)<<std::endl;
  return 0;
}
