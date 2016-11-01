#include <iostream>

using namespace std;

int sum(int);

int val(int);

int x = 0;

int main() {
    
    // cout << "Enter" << endl;
    
    // cin >> x;
    
    cout << sum(x) << endl;
    
    return 0;
    
}

int val(int n) {
    
    if (n == 0) {
        
        return 0;
        
    }
    
    else if (n == 1) {
        
        return 1;
        
    }
    
    else {
        
        return val(n - 1) + val(n - 2);
        
    }
    
}

int sum(int m) {
    
    if (val(m) < 4000000) {
        
        if (val(m) % 2 == 0) {
            
            // cout << m << " " << val(m) <<" "<< sum(m + 1) << endl;
            
            return (val(m) + sum(m + 1));
            
        } 
            
        else {
            
            //cout <<" "<< m <<" "<< val(m) <<" "<< sum(m+1) << endl;
            
            return sum(m+1);
            
        }
            
    }
        
        else {
            
            //cout <<" "<< m <<" "<< val(m) <<" "<< endl;
            
            return 0;
        }
    
}