#include <iostream>

using namespace std;

int sum(int);

int main() {
    
    int x = 999;
    
    cout << sum(x) << endl;
    
    return 0;
    
}

int sum(int n) {
    
    if (n > 0) {
        
        if (n % 3 == 0 || n % 5 == 0) {
            
            return (sum(n - 1) + n);
            
        }
        
        else {
            
            return sum(n - 1);
            
        }
        
    }
    
    else {
        
        return 0;
        
    }
}