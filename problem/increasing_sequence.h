//
// Created by tuddy on 04-Mar-22.
//

#ifndef LAB2MODEL_INCREASING_SEQUENCE_H
#define LAB2MODEL_INCREASING_SEQUENCE_H

/**
 * Searches for the largest strictly increasing sequence in an array and returns it's start and length
 * @param len the array length
 * @param array the array
 * @param startPosition (out) the start position of the largest increasing sequence
 * @param sequenceLen (out) the length of the increasing sequence
 */
void FindLargestIncreasingSequence(int len, int array[], int& startPosition, int& sequenceLen);

/**
 * Iterates the array and returns the largest length that is strictly increasing (from the start of the array)
 * @param len the maximal array length
 * @param array the array
 * @return the largest length of an increasing sequence starting from the array's first element
 */
int FindMaximalIncreasingLengthFromStart(int maxLen, int array[]);

/**
 * Checks if an array is strictly increasing
 * @param len the array length
 * @param array the array
 * @return
 *  true - the array is strictly increasing
 *  false - the array is not strictly increasing
 */
bool SequenceIsIncreasing(int len, int array[]);

#endif //LAB2MODEL_INCREASING_SEQUENCE_H
