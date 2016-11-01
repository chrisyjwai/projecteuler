#include <iostream>

using namespace std;

int val(int);

int m = 1;

int main() {
    
    cout << val(1) << endl;
    
    return 0;
    
}

int val(int n) {
    
    if (n <= 20) {
        
        if (m % n == 0) {
            
            return val(n + 1);
            
        }
        
        else {
            
            m = m + 1;
            
            return val(1);
            
        }
        
    }
    
    else {
        
        return m;
        
    }
    
}