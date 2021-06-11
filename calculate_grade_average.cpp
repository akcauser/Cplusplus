//
//  main.cpp
//  lab2
//
//  Created by ertuğrul gazi akça on 9.10.2017.
//  Copyright © 2017 iosDev. All rights reserved.
//

#include <iostream>


using namespace std;

int main() {
    // insert code here...
    cout << "Hello, World!\n";
    
    double note;
    double toplam = 0 ;
    double ortalama ;
    int ogrenciSayisi;
    
    cout << "Öğrenci sayısını giriniz : ";
    cin >> ogrenciSayisi;
    
    
   
    
    for (int i = 0 ; i < ogrenciSayisi ; i++ ) {
        
        cout << i + 1 << ". Öğrencinin notunu giriniz : " << endl;
        cin >> note;
        
        toplam = toplam + note ;
        
    }
     
    // scope konusunu araştır öğren .
    
    
    ortalama = toplam / ogrenciSayisi;
    
    cout << "Öğrencilerin not ortalaması : " << ortalama ;
    
    return 0;
}
