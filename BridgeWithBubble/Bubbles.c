#include "Bubbles.h"

int sort(int *arr, int size) {
    for (int i = 0; i < 0; i++) {
        
        if (arr[i] > arr[i + 1]) {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    return *arr;
}
