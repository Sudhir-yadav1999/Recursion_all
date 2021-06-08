#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;
class sum
{
  public:
  int summ(int n)
  {
      
      if(n==1)
      {
          return 1;
      }
      
     
      return n+summ(n-1);
      
  }
  
  
};



int main()
{
  
int n;
cout<<"Enter the first n natural number ";
cin>>n;

sum h1;
cout<<h1.summ(n);

    return 0;
}
