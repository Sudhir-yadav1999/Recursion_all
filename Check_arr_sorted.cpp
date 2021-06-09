#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;
class ch
{
  public:
  int check_arr(int arr[],int n)
  {
      //if arrray has 0 or no element 
      if(n==0 || n==1)
      {
          return 1;
      }
      
      
      if(arr[n-1]<arr[n-2])
      {
          return 0;
      }
     
      return check_arr(arr,n-1);
      
  }
  
  
};



int main()
{
  
int n;
cout<<"check array is sorted or not using recursion :";

int arr[]={5,9,8,10,2,15};
int size=sizeof(arr)/sizeof(arr[0]);
ch h1;
cout<<h1.check_arr(arr,size); //if zero array is not sorted if 1 array is sorted 

    return 0;
}
