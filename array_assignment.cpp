//
//  main.cpp
//  arrayAssignment
//
//  Created by ertuğrul gazi akça on 29.11.2017.
//  Copyright © 2017 iosDev. All rights reserved.
//

#include <iostream>
     // bu programda strcpy fonksiyonunu tekrardan yazdık 
using namespace std;
int main() {
    
    int myArray[5] = {0,1,2,3,4};
    int newArray[5];
    
    for (int i = 0 ; i< 5; i++) {
        newArray[i] = myArray[i];
    }   
    
    for (int i = 0 ; i< 5; i++) {
        cout<< i << ". index : " <<newArray[i]<<endl;
    }   
    
    
    return 0;
}
