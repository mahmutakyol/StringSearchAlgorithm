//
//  main.cpp
//  katarArama
//
//  Mahmut Akyol / G120910010 
//
//  Created by macbookAir on 15.03.2015.
//  Copyright (c) 2015 macbookAir. All rights reserved.
//

#include <iostream>
#include "string.h"
using namespace std;

int search(const char* x, const char* y){
    int counter = 0;
    
    int x_len = (unsigned)strlen(x);
    int y_len = (unsigned)strlen(y);
    int i = 0;
    int j = 0;
    int counter2 = 0;
    do{
        if(y[i] == x[j]){
            i++;
            j++;
            counter++;
            if (sayac == y_len) {
                counter2++;
                counter = 0;
                i=0;
            }
        }
        else{
            j++;
        }
        x_len--;
    }while (x_len != 0);
    return counter2;
}

int main(int argc, const char * argv[]) {
    
    const char* t;
    const char* z;
    string a ;
    string b ;
    cout << "Input Text:";
    cin.ignore();
    getline(cin,a);
    cout << "Input Word:";
    cin.ignore();
    getline(cin, b);
    t = a.c_str();
    z = b.c_str();
    
    cout << "Number of the wanted word : " << search(t, z) << endl;
    
    
    return 0;
}
