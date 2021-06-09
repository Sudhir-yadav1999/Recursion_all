#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;
class ch
{
  public:
  int sum(int arr[],int n)
  {
      //if arrray has 0 or no element 
      if(n==0)
      {
          return 0;
      }
     
      return arr[n-1]+sum(arr,n-1);
      
  }
  
  
};



int main()
{
  
int n;
cout<<"Sum of array using recursion :";

int arr[]={5,9,8,10,2,15};
int size=sizeof(arr)/sizeof(arr[0]);
ch h1;
cout<<h1.sum(arr,size); //if zero array is not sorted if 1 array is sorted 

    return 0;
}
