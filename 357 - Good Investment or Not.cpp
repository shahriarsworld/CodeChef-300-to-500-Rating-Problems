// Chef has invested his money at an interest rate of 
// X
// X percent per annum while the current inflation rate is 
// Y
// Y percent per annum.

// An investment is called good if and only if the interest rate of the investment is at least twice of the inflation rate.
// Determine whether the investment made by Chef is good or not.

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int count,x,y;
	cin>>count;
	for (int i = 0; i < count; i++) {
	    cin>>x >>y;
	    if(x>=(y*2)){
	        std::cout << "YES" << std::endl;
	    }else{
	        std::cout << "NO" << std::endl;
	    }
	}

}
