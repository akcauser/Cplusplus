//
//  main.cpp
//  pointerExamples
//
//  Created by ertuğrul gazi akça on 21.02.2018.
//  Copyright © 2018 iosDev. All rights reserved.
//

#include <iostream>

using namespace std;

void swapping(int *, int *);

int main() {
    // insert code here...
    
    int x = 8 , y = 10 ;
    int *z,*t;
    z = &x;
    t = &y; 
    
    /*
    cout << "Değişkenin değeri : " << x << endl;
    cout << "işaretçinin gösterdiği adresteki değeri : " <<  << endl;
    cout << "değişkenin adresi : " << &x << endl;
    cout << "işaretçinin değeri : " << y << endl;
    */
    
    
    
    cout << "değişkenlerin ilk değerleri: " << endl;
    cout << "x: " << x << " ; y:" << y << endl;
    
    swapping(z,t);
    
    cout << "değişkenlerin yer değiştirdikten sonraki değerleri: " << endl;
    cout << "x: " << x << " ; y:" << y << endl;
    
    
    return 0;
}

void swapping(int *adres1 , int *adres2){
    int temp = *adres1;
    *adres1 = *adres2;
    *adres2 = temp; 
}
