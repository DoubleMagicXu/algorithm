#include<iostream>
using namespace std;
/*
** 二分查找
** 输入：非递减整型数组，长度，要查找的数
** 输出：位置，没找到输出-1；
**/
int binsh(int* array,int length,int n);
int main()
{   int array[]={1,2,3,4};
    cout<<binsh(array,4,3)<<endl;
    return 0;
}
int binsh(int* array,int length,int n)
{
   if(length<0)
        return -1;
    int low=0;
    int high=length-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(array[mid]==n)
            return(mid+1);
        if(array[mid]>n)
            high=mid-1;
        else
            low=mid+1;
    }
    return -1;
}
    
