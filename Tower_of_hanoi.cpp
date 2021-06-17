#include<bits/stdc++.h>
#include <stdio.h>

using namespace std;
void hanoi(int n,string source,string dest,string help)
{
    
    if(n==1)
    {
        cout<<"Disk 1 from "<<source<<" To "<<dest<<endl;//last rod from a to c
        return ;
    }
    
    hanoi(n-1,source,help,dest); //first rod from a to b using c
    cout<<"Disk "<<n<<" from  "<<source<<" To "<<dest<<endl;//last from a to c
    hanoi(n-1,help,dest,source); //lastt from b to c using a 
}



int main()
{
  int n;
  
  cout<<"enter the no of plates you want to enter :"<<endl;
  cin>>n;
  
  cout<<"Tower of hanoi ::"<<endl;
  hanoi(n,"A","C","B");
  
    return 0;
}
