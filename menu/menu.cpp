//
// Created by tuddy on 04-Mar-22.
//

#include "menu.h"

void RunMenu() {
    int array[100], len=0;
    char option = '\0';
    bool runMenu = true;
    bool arrayAlreadyRead = false;

    while(runMenu){
        PrintOptions();
        cin >> option;

        switch (option) {
            case '1':
            {
                // read array
                ReadArray(len, array);
                arrayAlreadyRead = true;
                break;
            }
            case '2':
            {
                // print array
                if(arrayAlreadyRead){
                    PrintArray(len, array);
                }
                else{
                    HandleError(option);
                }
                break;
            }
            case '3':
            {
                // find max increasing sequence of array
                int sequenceStart=0, sequenceLen=1;
                FindLargestIncreasingSequence(len, array, sequenceStart, sequenceLen);
                PrintArray(sequenceLen, array + sequenceStart);

                break;
            }
            case 'x':
            {
                // exit
                runMenu = false;
                break;
            }
            default:
            {
                HandleError(option);
                break;
            }
        }
    }
}

void PrintOptions() {
    cout << "1. Read an array" << endl;
    cout << "2. Print an array" << endl;
    cout << "3. Display largest increasign sequence of array" << endl;
    cout << "x. Exit program" << endl;
}

void HandleError(char option) {
    if(option == '2'){
        cout << "Unable to print array!" << endl;
    }
    else{
        cout << "Unrecognized option: " << option << endl;
    }
}
