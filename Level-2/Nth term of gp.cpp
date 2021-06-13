To find the Nth term in the Geometric Progression series we use the simple formula . 
 
T(N) = a1 * r^(N-1)
t(5) = a1*r^(4);


#include <bits/stdc++.h>

using namespace std;

int Nth_of_GP(int a, int r, int N)
{
	static int flag=0;
	static int store=0;
  
  if(N==0)
  {return store;}
  
  store=a*pow(r,flag);
  flag++;
  return Nth_of_GP(a, r, N-1);
	
}

// Driver code
int main()
{
	// starting number
	int a = 2;
	
	// Common ratio
	int r = 3;
	
	// N th term to be find
	int N = 5;
	
	// Display the output
	cout << "The "<< N <<"th term of the series is : "
		<< Nth_of_GP(a, r, N);

	return 0;
}




int Nth_of_GP(int a, int r, int N)
{
    // using formula to find
    // the Nth term
    // TN = a1 * r(N-1)
    return( a * (int)(pow(r, N - 1)) );
     
}
 
