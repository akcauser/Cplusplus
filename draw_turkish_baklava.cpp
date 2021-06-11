//
//  main.cpp
//  turkishBaklava
//
//  Created by ertuğrul gazi akça on 22.10.2017.
//  Copyright © 2017 iosDev. All rights reserved.
//

#include <iostream>
        
using namespace std;

int main() {
    // insert code here...
    
    int kenarSayisi;
    
    cout << "Kenar sayisini girin: ";
    cin >> kenarSayisi;
    
    for (int satirSayisi = 0; satirSayisi < kenarSayisi ; satirSayisi++) {
        for (int sutunSayisi = 0 ; sutunSayisi <= satirSayisi; sutunSayisi++) {
           
            cout << "*";
        }
        
        cout << endl ;
        
    }
    
    
    
    
    return 0;
}
