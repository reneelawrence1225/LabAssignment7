#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, j, temp, swap;
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int n = sizeof(arr) / sizeof(arr[0]);


    //primary loop also prints swap number
    for(i = 0; i < n - 1; i++){

        swap = 0;

        for(j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                //swapping
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                //incrementing the swaps count for the index
                swap++;
            }
        }

        printf("Index %d: %d swaps\n", i , swap);

        //makes certain that every index swap count is printed
        if(i == 7){
            i++;
            printf("Index %d: %d swaps\n", i , swap);
        }

    }

}









