//
//  main.cpp
//  calculator
//
//  Created by ertuğrul gazi akça on 23.10.2017.
//  Copyright © 2017 iosDev. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    // insert code here...
    int a,b,sum = 0,i;
    cout << "1.sayıyı gir : ";
    cin >> a;
    cout << "2.sayıyı gir : ";
    cin >> b;
    cout << "Yapmak istediğiniz işlemin kodunu giriniz : \n" << "1-Toplama\n" << "2-Çıkarma\n"<< "3-Çarpma\n"<< "4-Bölme\n"<<endl;
    cin >> i;
    for ( ; ; ) {
        
    switch (i) {
        case 1:
           sum= a+b;
            break;
        case 2:
           sum= a-b;
            break;
        case 3:
           sum= a*b;
            break;
        case 4:
           sum= a/b;
            break;
            
            default:
            cout<<"Lütfen geçerli bir işlem giriniz!"<<"1-Toplama\n" << "2-Çıkarma\n"<< "3-Çarpma\n"<< "4-Bölme\n"<<endl;;
            cin >> i ;
            continue;
            break;
        }
        break;
        
    }
    
    cout << "Yaptığınız işlemin sonucu : " << sum << endl;
    
    
    
    
    return 0;
}
