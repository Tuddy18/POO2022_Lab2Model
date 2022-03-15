//
// Created by tuddy on 04-Mar-22.
//

#include "increasing_sequence.h"

void FindLargestIncreasingSequence(int len, int *array, int &startPosition, int &sequenceLen) {
    int maxIncreasingLen = 1, maxIncreasingStart=0;
    for(int i=0; i<len-1; i++){
        int* currentElement = array+i;
        int currentMaxLen = len-i;

        int increasingSequenceLen = FindMaximalIncreasingLengthFromStart(currentMaxLen, currentElement);

        if(increasingSequenceLen > maxIncreasingLen){
            maxIncreasingLen = increasingSequenceLen;
            maxIncreasingStart = i;
        }
    }

    startPosition = maxIncreasingStart;
    sequenceLen = maxIncreasingLen;
}

int FindMaximalIncreasingLengthFromStart(int maxLen, int *array) {
    int maxIncreasingLen = 1;
    for(int len=1; len<=maxLen; len++){
        if(SequenceIsIncreasing(len, array)){
            maxIncreasingLen = len;
        }
        else{
            break;
        }
    }

    return maxIncreasingLen;
}

bool SequenceIsIncreasing(int len, int *array) {
    for(int i=1; i<len; i++){
        if(array[i] <= array[i-1]){
            return false;
        }
    }
    return true;
}
