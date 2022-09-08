#include <stdio.h>
#include <stdlib.h>
void solve(int array[], int arrayLen){

    int big = array[0];
    int small = array[0];

    for(int i = 0; i < arrayLen; i++){
        if(array[i] > big){
            big = array[i];
        }

        if(small > array[i]){
            small = array[i];
        }

    }
printf("%d\n",big - small);
}

int main(int argc, char const *argv[]){

    int cases, arrayLen;
    int *array;

    scanf("%d",&cases);

    for(int i = 0; i < cases; i++){
        scanf("%d", &arrayLen);

        array = (int *)malloc(arrayLen * sizeof(int));

        for(int j = 0; j < arrayLen; j++){
            scanf("%d", &array[j]);
        }

        solve(array, arrayLen);
    }

    return 0;
}