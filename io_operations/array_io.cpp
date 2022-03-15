//
// Created by tuddy on 04-Mar-22.
//

#include "array_io.h"

void ReadArray(int &len, int array[]){
    int i;
    cout << "Array length = " << flush;

    cin >> len;
    for(i = 0; i < len; i++){
        cout << "v[" << i << "] = " << flush;

        cin >> array[i];;
    }
}

void PrintArray(int len, int array[]){
    int i;
    cout << "Array is ";
    for(i = 0; i < len; i++)
        cout << array[i] << " " << flush;
    cout << endl;
}