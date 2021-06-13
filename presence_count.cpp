// Given an array of length N and an integer x, you need to find all the indexes where x is present in the input array. Save all the indexes in an array (in increasing order).
// Do this recursively. Indexing in the array starts from 0.


#include<bits/stdc++.h>
#include <stdio.h>

using namespace std;

int occurance_record(int arr[],int size,int x,int output[])
{
   static int isize=size;
   static int flag=0;
   static int index=0;
    
    if(size==0) //size is zero 
    {
        if(flag==1) //store is not null
        {
            return index;
        }
        
        return -1;
    }
    
    if(arr[0]==x)
    {
      output[index]=isize-size;
      index++;
      flag=1;
       
    }
    
    
    return occurance_record(arr+1,size-1,x,output);
    
}


int main()
{ 
    
    int x=3;
    
    int arr[]={1,2,3,4,5,6,3,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int output[size];
    int tot_size=occurance_record(arr,size,x,output);
    
    for(int i=0;i<tot_size;i++)
    {
        cout<<" Value:: "<<output[i]<<endl;
    }
    
    return 0;
}
