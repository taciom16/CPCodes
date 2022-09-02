#include <stdio.h>
#include <stdlib.h>

int solve(int arrayA[],int arrayB[], int len){

    int answer = 0;

    for(int i = 0; i < len; i++){
        if(arrayA[i] > arrayB[i]){
            printf("No");
            return 0;
        }
    }
    printf("Yes");
}

int main(int argc, char const *argv[])
{
    int cases;
    int arrayLen;
    int *arrayA, *arrayB;
    scanf("%d", &cases);

    for(int i = 0; i < cases; i++){

        scanf("%d", &arrayLen);
        arrayA = malloc((arrayLen) * sizeof(int));
        arrayB = malloc((arrayLen) * sizeof(int));
        for(int j = 0; j < arrayLen; j++){
            scanf("%d", &arrayA[j]);
        }
        for(int j = 0; j < arrayLen; j++){
            scanf("%d", &arrayB[j]);
        }

        solve(arrayA, arrayB, arrayLen);
    }
    return 0;
}