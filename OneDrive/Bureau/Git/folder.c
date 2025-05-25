#include <stdio.h>

int negative(int *array, int size) {
    int newsize3 = size;
    for (int i = 0; i < size; i++){
        int index = 0;
        if(*(array + i) < 0){
            for (int j = i; j < size - 1; j++){
                *(array + j) = *(array + j + 1);
            }
            newsize3--;
            i--;
        }
    }
    return newsize3;
}

int main (){


    return 0;
}