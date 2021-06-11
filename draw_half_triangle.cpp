//
//  main.cpp
//  triangle
//
//  Created by ertuğrul gazi akça on 16.10.2017.
//  Copyright © 2017 iosDev. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    // insert code here...
    
    int n ;
    cout << "Welcome to Draw Half Triangle App" << endl;
    cout << "Enter a number: ";
    cin >> n ;
    for (int i=1; i<=n; i++) {
        for (int j = n ; j>=i; j--) {
            cout << "*" ;
        }
        cout << endl;
    }
    
    cout << "bye..";

    
    return 0;
}
