#include <stdio.h>

#include <stdio.h>

int negative(int *array, int size) {
    int newsize = size;
    for (int i = 0; i < size; i++){
        int index = 0;
        if(*(array + i) < 0){
            for (int j = i; j < size - 1; j++){
                *(array + j) = *(array + j + 1);
            }
            newsize--;
            i--;
        }
    }
    return newsize;
}

int main (){


    return 0;
}
int main (){
    int array[4] = {12 , 4, -5, 14};
   negative(&array, 5); 
}