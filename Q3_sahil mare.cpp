#include <iostream>
using namespace std;

int main() 
{
  int num,k,prime=0,l;
  cin>>num;
  for(k=2;k<num;k++)
  {
    if(num%k==0)
    {
      break;
    }
  }
  if(num==k)
  {
    cout<<"Please input a different number";
  }
  int i=0,sum=0;
  int arr[num+1];
  while(num%2==0)
  {
    arr[i]=num%2;
    i++;
    num=num/2;
  }
  if(num>0)
  {
    arr[i++]=num;
  }
  cout<<"[";
  cout<<"]";
  for(int l=0;i<sizeof(arr);l++)
  {
   cout<<arr[l]; 
  }
}