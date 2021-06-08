#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;
class hello
{
  public:
  int poww(int x,int n)
  {
      
      if(n==0)
      {
          return 1;
      }
      
     
      return x*poww(x,n-1);
      
  }
  
  
};



int main()
{
    
int n,x;
cout<<"Enter the number and then the power";
cin>>x;
cout<<"Enter the number ";
cin>>n;

hello h1;
cout<<h1.poww(x,n);

    return 0;
}
