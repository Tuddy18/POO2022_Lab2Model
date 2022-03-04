//
// Created by tuddy on 04-Mar-22.
//

#ifndef LAB2MODEL_MENU_H
#define LAB2MODEL_MENU_H

#include <iostream>
#include "../io_operations/array_io.h"
#include "../problem/increasing_sequence.h"

using namespace std;

/**
 * Runs a looped menu that awaits an option input and exits on option 'x'
 */
void RunMenu();

/**
 * Prints all menu operations
 */
void PrintOptions();

/**
 * Handles an error option
 * Prints an error message
 * @param option the error option
 */
void HandleError(char option);

#endif //LAB2MODEL_MENU_H
