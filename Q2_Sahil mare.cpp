#include <iostream>
using namespace std;

int main() 
{
  string pass;
  int digit=0,lc=0,uc=0,sc=0;
  
  cin>>pass;
  for(int i=0;i<pass.size();i++)
  {
    if(isdigit(pass[i]))
    {
      digit=digit+1;
    }
    else if(pass[i]>='a' && pass[i]<='z')
    {
      lc=lc+1;
    }
    else if(pass[i]>='A' && pass[i]<='Z')
    {
      uc=uc+1;
    }
    else
    {
      sc=sc+1;
    }
  }
  cout<<"Special Characters - "<<sc;
  cout<<"\nDigit - "<<digit;
  cout<<"\nUppercase Alphabet - "<<uc;
  cout<<"\nLowercase Alphabet - "<<lc;
  
  int sum=digit+lc+uc+sc;
  if(digit>0 && lc>0 && uc>0 && sc>0 && sum>8)
  {
    cout<<"\nStrong Password,good to go!";
  }
}