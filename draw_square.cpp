//
//  main.cpp
//  squre
//
//  Created by ertuğrul gazi akça on 9.10.2017.
//  Copyright © 2017 iosDev. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    // insert code here...
    cout << "Hello, World!\n";
    
    
    int n ;
    cout << "sayı giriniz :" ;
    cin >> n;
   
    
    for (int i = 1 ; i <= n ; i++) {
        cout << "*" ;
        if (i == 1 || i == n ){
        for (int j = 1 ; j<= n-2 ; j++) {
            
              
                cout << '*' ;
                
        }
        }  
        else {
            for (int j = 1 ; j<= n-2 ; j++) {
                
                
               cout << " ";
                
            }}   
        
        
        cout << "*" << endl;
        
        
       
    }
    
    
    
    
    
    
    
    return 0;
}
