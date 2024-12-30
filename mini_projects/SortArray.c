#include <stdio.h> 

int sort(int array[], int size){
    int temp;
    for(int i = 0; i < size; i++){ // i = 0; i < 10; i++
        for(int j = i+1; j < size; j++){ // j = 1; j < 10; j++
            if(array[i] > array[j]){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

}

void printArray(int array[], int size){
    for(int i = 0; i < size; i++){ // i = 0; i < 10; i++
        printf("%d ", array[i]);
    }
}

int main(){
    int arr[10] = {1, 5, 3, 7, 2, 9, 8, 4, 6, 0};

    sort(arr, sizeof(arr)/sizeof(arr[0]));
    printArray(arr, sizeof(arr)/sizeof(arr[0]));
}