#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;
class ch
{
  public:
  int sum(int arr[],int n,int val)
  {
      //if arrray has 0 or no element 
      if(n==0)
      {
         if(arr[0]==val)
         {return true;}
          return false;
      }
     
     if(arr[n-1]==val)
     {
         return true;
     }
     
     return sum(arr,n-1,val);
  }
  
  
};



int main()
{
  
int value;
cout<<"Check a no is present or not enter value to check :";
cin>>value;
int arr[]={5,9,8,10,2,15};
int size=sizeof(arr)/sizeof(arr[0]);
ch h1;
cout<<h1.sum(arr,size,value); //if zero array is not sorted if 1 array is sorted 

    return 0;
}
