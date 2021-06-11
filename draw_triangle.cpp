//
//  main.cpp
//  lab3
//
//  Created by ertuğrul gazi akça on 16.10.2017.
//  Copyright © 2017 akcauser. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    // insert code here...
    cout << "Hello, World!\n";
    
    int n ;
    cout << "Enter triangle number:";
    cin >> n ;
    
    
    
    for (int i=1; i<=n; i++) {
        for (int j = 1 ; j<=i; j++) {
            cout << "*" ;
           
        }
        
        
    cout << endl;
    }
    
        for (int k=1; k<=n; k++) {
            for (int l = n-1 ; l>=k; l--) {
                cout << "*" ;
            }
            
            cout << endl;
            
        
        }
    int i = 0;
    do {
        
        i++;
    } while (i<5);
        
        
        
    

    
    
    
    
    
    
    
    
    return 0;
}
