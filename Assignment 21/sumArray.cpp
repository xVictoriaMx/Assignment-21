#include "sumArray.h"
#include <iostream>

using namespace std;


int sumArray(const unique_ptr<int[]>& arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}