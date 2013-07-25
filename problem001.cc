#include <iostream>

using namespace std;

int sum(int);

int main() {
    
    int x = 999;
    
    cout << sum(x) << endl;
    
    return 0;
    
}

int sum(int n) {
    
    int total = 0;
    
    if (n > 0) {
        
        if (n % 3 == 0 || n % 5 == 0) {
            
            total = total + n;
            
            return sum(n--);
            
        }
        
        else {
            
            return sum(n--);
            
        }
        
    }
    
    else {
        
        return total;
        
    }
}