//
//  main.cpp
//  FunctionExample
//
//  Created by ertuğrul gazi akça on 23.10.2017.
//  Copyright © 2017 iosDev. All rights reserved.
//

#include <iostream>

using namespace std;
int func1();

int main() {
    // insert code here...
    
    cout << func1() ; 
    
    
    
    
    return 0;
}
int func1(){
    int sum = 0 ;
    
    for (int i = 1; i<=100 ; i++) {
        if (i % 5 == 0  ) {
            continue;
        }
        sum += i;
        
    }
    return sum;
}
