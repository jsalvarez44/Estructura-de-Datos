#include <iostream>
#include <vector>

#define getSize(arr) sizeof(arr)/sizeof(*arr)

int divide(int arr[], int start, int end) {
    int left, right, pivot, temp;

    pivot = arr[start];
    left = start;
    right = end;

    while (left < right) {
        while (arr[right] > pivot) {
            right--;
        }

        while ((left < right) && (arr[left] <= pivot)) {
            left++;
        }

        if (left < right) {
            temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
        }
    }
    temp = arr[right];
    arr[right] = arr[start];
    arr[start] = temp;

    return right;
}

void quicksort(int arr[], int start, int end){
    int pivot;

    if (start < end) {
        pivot = divide(arr, start, end);

        quicksort(arr, start, pivot - 1);
        quicksort(arr, pivot + 1, end);
    }
}

void imprimir(int arr[], std::string msg){
    std::cout << msg.c_str() << std::endl;

    for(int i=0; i < getSize(arr) ;i++){
        std::cout << getSize(arr) << " ";
    }
}