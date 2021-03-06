// Given an array of length N and an integer x, you need to find and return the last index of integer x present in the array. Return -1 if it is not present in the array.
// Last index means - if x is present multiple times in the array, return the index at which x comes last in the array.
// You should start traversing your array from 0, not from (N - 1).


#include<bits/stdc++.h>
#include <stdio.h>

using namespace std;

int last_occur(int arr[],int size,int x)
{
   static int size_i=size;
   static int store;    
    
    if(size==0) //size is zero 
    {
        if(store!=-1) //store is not null
        {
            return store;
        }
        
        return -1;
    }
    
    if(arr[0]==x)
    {
    
        store=size_i-size; //store the same index
        cout<<"Store ::"<<store<<endl;
    }
    
    
    return last_occur(arr+1,size-1,x);
    
}


int main()
{ 
    
    int x=3;
    
    int arr[]={1,2,3,4,5,6,3,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    cout<<last_occur(arr,size,x);
    
    return 0;
}
