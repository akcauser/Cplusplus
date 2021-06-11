//
//  main.cpp
//  arrayFuncWithPointers
//
//  Created by ertuğrul gazi akça on 21.02.2018.
//  Copyright © 2018 iosDev. All rights reserved.
//

#include <iostream>

using namespace std;

double ortalamaHesapla(int *, int);

int main() {
    
    int dizi[] = {10, 8, 3, 7, 1};
    double ort;
    
    ort = ortalamaHesapla(dizi, 5);
    
    cout << "Ortalama : " << ort ; 
    
    return 0;
}
double ortalamaHesapla(int *diziAdresi, int elemanSayisi){
    int toplam = 0 ; 
    double ortalama;
    
    for (int i = 0 ; i < elemanSayisi ;  ++i) {
        toplam += *(diziAdresi + i); 
    }
    
    ortalama = double(toplam) / elemanSayisi;
    return ortalama;
}
