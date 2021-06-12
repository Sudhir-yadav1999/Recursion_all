// Given an array of length N and an integer x, you need to find and return the first index of integer x present in the array. Return -1 if it is not present in the array.
// First index means, the index of first occurrence of x in the input array.
// Do this recursively. Indexing in the array starts from 0.

#include<iostream>
using namespace std;

int firstIndex(int input[], int size, int x) {
 
    static int isize=size;
	  
    if(size==0) 
    {
    return -1;
    if(input[0]==x){
        return isize-size;//9 - 7
        
    }
    }else{
        return firstIndex(input+1,size-1,x);
    }
    
}

int main(){

    int input[]={1,2,3,4,5,3,2,3,4};
    
    cout << firstIndex(input, 9, 3) << endl;
    
}
