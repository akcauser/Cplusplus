//
//  main.cpp
//  differentTriangle
//
//  Created by ertuğrul gazi akça on 16.10.2017.
//  Copyright © 2017 iosDev. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    // insert code here...
 
   
    
    int n;
    cin >> n ;
    
   
    
    for (int i = 0 ; i <  n/2 + 1 ; i++) {
        
        for (int j = n / 2; j > i  ; j--) {
           
            cout << " ";
        }
        
        for (int j = 0; j < i*2 + 1 ; j++) {
            cout << "*";
        }
        cout << endl;
    }
   
    
    for (int i = n - 1 ;  i > n / 2   ; i--) {
        
        for (int j = n  ; j > i ; j-- ) {
            
            cout << " " ;
        }
        for (int j = 2*i + 1 ; j > n + 1 ; j--) {
            
            cout << "*" ;
        }
        if (n % 2 == 0) {
            cout <<"*";
        }
        
        cout << endl;
        
            }    
    if (n % 2 == 0) {
        for (int i = 0 ; i < n/2; i++) {
            cout << " ";
            }
        
            cout <<"*";
        
    }

    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
