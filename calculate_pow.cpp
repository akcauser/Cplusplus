//
//  main.cpp
//  lab4
//
//  Created by ertuğrul gazi akça on 23.10.2017.
//  Copyright © 2017 iosDev. All rights reserved.
//

//



#include <iostream>
using namespace std;



int func1();
int main() {
    // insert code here...
   
    func1();
    
    
    
    
    return 0;
}

int func1(){
    int x;
    int n;
cout << "bir sayi gir";
    cin >> x;
cout << "kaçıncı katını istiyosun?";
    cin >> n;

   // int result = 0;
    for (int i = 1000 ; i < 100000 ;i++ )
    {
        if (i % x == 0){
            for (int j = 0 ; j < n ; j++) {
                i += x ;
                
                }
            cout << n <<".sayı : " << i;
            break;
            }
                
    
    }
    

   
    
    return 0;

}













