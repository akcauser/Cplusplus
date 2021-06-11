//
//  main.cpp
//  arrayWithPointer
//
//  Created by ertuğrul gazi akça on 21.02.2018.
//  Copyright © 2018 iosDev. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
     
    int arr[5];
    
    cout << " dizi elemanlarını giriniz : ";
    for (int i = 0 ; i < 5 ; ++i) {
        cin >> *(arr + i);
    }
    
    cout << endl << endl << "Dizinin elemanları : " << endl;
    
    for (int i = 0 ; i < 5; ++i) {
        cout << arr[i] << " ";
    }
    
    for (int i = 0 ; i < 5; ++i) {
        cout << *(arr + i) << " ";
    }
    return 0;
}
