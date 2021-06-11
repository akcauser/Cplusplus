//
//  main.cpp
//  structExamples
//
//  Created by ertuğrul gazi akça on 21.02.2018.
//  Copyright © 2018 iosDev. All rights reserved.
//

#include <iostream>
using namespace std;
typedef struct ogrenci
{
    int ogrNo;
    char adSoyad[20];
    
}OGR;

int main() {
  
    OGR ogr1 = { 16, "Ali" };
    OGR *p = &ogr1;
    
    cout << "öğrencinin adı : " << ogr1.adSoyad << endl;
    cout << "öğrencinin numarası : " << ogr1.ogrNo << endl;
    
    cout << "öğrencinin adı : " << p->adSoyad << endl;
    cout << "öğrencinin numarası : " << p->ogrNo << endl;
    
    cout << "öğrencinin adı : " << (*p).adSoyad << endl;
    cout << "öğrencinin numarası : " << (*p).ogrNo << endl;
    
    return 0;
}
