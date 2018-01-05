#include<iostream>
template <class Type>
void greedySelector(int n,Type s[],Type f[],bool A[])//按照f[]增序排列
{
  A[0]=1;
  int j=0;
  for(int i=1;i<n;i++)
  {
    if(s[i]>=f[j])
    {
      A[i]=true;
      j=i;
    }
    else
    {
      A[i]=false;
    }
  }
}
int main()
{
  int s[11]={1,3,0,5,3,5,6,8,8,2,12};
  int f[11]={4,5,6,7,8,9,10,11,12,13,14};
  bool A[11];
  greedySelector(11,s,f,A);
  for(int i=0;i<11;i++)
  {
    std::cout<<A[i]<<std::endl;
  }
  return 0;
}
