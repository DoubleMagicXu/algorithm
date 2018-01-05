#include<iostream>
using namespace std;
void merge(int *a,int start,int middle,int end);
void mergeSort(int *a,int start,int end);
int main()
{
  return 0;
}
void mergeSort(int *a int start int end)
{
  if(start<end)
  {
    int middle=(start+end)/2;
    mergeSort(a,start,middle);
    mergeSort(a,middle+1,end);
  }
}
void merge(int *a,int start,int middle,int end)
{
  int *temp=new int[start-end+1];
  int i=start;
  int j=middle+1;
  int k=0;
  while(i<=middle&&j<=end)
  {
    if(a[i]<=a[j])
    {
      temp[k++]=a[i++];
    }
    else
    {
      temp[k++]=a[j++];
    }
  }
  while(i<=middle)
  {
    temp[k++]=a[i++];
  }
  while(i<=end)
  {
    temp[k++]=a[j++];
  }
  for(k=0,i=start;k<end-start+1;k++,i++)
  {
    a[i]=temp[k];
  }
  delete [] temp;
}
