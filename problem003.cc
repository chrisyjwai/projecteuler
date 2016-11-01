/*------------------------------------------------------------------------------------
Initial Optimization: Assuming that projecteuler doesn't publish trick questions
we can also assume that 600851475143 is not the prime we're actually looking for.
With that in mind, 
the prime we're looking for has to have a small prime (2, 3, 5, ..)
that is another factor to make 600851475143. 
Because 600851475143 is odd, that rules out 2 as the small prime.
So the safest number to check for primality down from is 600851475143 / 3
rounded down to the nearest whole integer which is 200283825047 (int cutoff).
------------------------------------------------------------------------------------*/

// Forget all the shit above. Fudemental Theorem of Arithmetic.

#include <iostream>

using namespace std;

int val(int);

long int x = 600851475143;

int main() {

    cout << val(2) << endl;
    
    return 0;
    
}

int val(int n) {

    if (n < x) {
        
		if (x % n == 0) {
            
            x = x / n;
            
            return val(2);
            
        }
        
        else {
          
            return val(n + 1);
			
		}
		
	}
    
    else {
        
		return x;
        
	}
	
}