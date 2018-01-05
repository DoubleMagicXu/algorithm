#include <iostream>
using namespace std;
/*
多段图是带权有向图，可用邻接表或者邻接矩阵表示
输入:多段图段数，每段顶点数,每条边的权重.
*/
//`const int nodeSize=12;//一共十二个顶点
const int paragraphSize=5;//总共五段
int paragraphNodeSize[paragraphSize]={1,4,3,3,1};//每段的顶点数
int m[nodeSize][nodeSize]={
  {0,9,7,3,2,0,0,0,0,0,0,0},
  {0,0,0,0,0,4,2,1,0,0,0,0},
  {0,0,0,0,0,2,7,0,0,0,0,0},
  {0,0,0,0,0,}//待续
}
int way[nodeSize];//存放路径节点的数组
int solution(int **m);//求最短路径的函数
int main()
{
  cout<<"hello,world!"<<endl;
  return 0;
}
int solution(int **m)
{

}
