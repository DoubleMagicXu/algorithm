#include<iostream>
using namespace std;
void bubble(int *,int );
int main(){
    int array[10]={1,4,2,7,4,0,5,0,8,7};
    bubble(array,10);
    for(int i=0;i<10;i++)
        cout<<array[i]<<endl;
    return 0;
}
void bubble(int array[],int length)
{
    for(int i=0;i<length-1;i++)
    {
        for(int j=0;j<length-1-i;j++)
        {
            if(array[j]>array[j+1])
            {
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}
