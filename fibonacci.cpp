#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;
class fibb
{
  public:
  int fibo(int n)
  {
      
      if(n==0 || n==1)
      {
          return n;
      }
      
     
      return fibo(n-1)+fibo(n-2);
      
  }
  
  
};



int main()
{
  
int n;
cout<<"Enter the fibonacci number to find: ";
cin>>n;

fibb h1;
cout<<h1.fibo(n);

    return 0;
}
