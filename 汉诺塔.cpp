#include<iostream>
using namespace std;
/*汉诺塔问题*/
void hanoi(int n,int a,int b,int c)；
void move(int a,int b);
int  main()
{
  //hanoi(3,1,2,3);
  return 0;
}
void hanoi(int n,int a,int b,int c)
{
  if(n>0)
  {
    hanoi(n-1,a,c,b);
    move(a,b);
    hanoi(n-1,c,b,a);
  }
  void move(int a,int b)
  {
    cout<<"从"<<a<<"移到"<<b<<endl;
  }
