#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){

    int cases;

    scanf("%d", &cases);

    int a, b, c;

    for(int i = 0; i < cases; i++){

        scanf("%d %d %d", &a, &b, &c);

        int elevA = a - 1;
        int elevB;

        if( b > c){
            elevB = b - 1;
        }else{
            elevB = (c - b) + c - 1;
        }

        if(elevA < elevB){
            printf("1\n");
        }
        if(elevB < elevA){
            printf("2\n");
        }
        if(elevA == elevB){
            printf("3\n");
        }

    }

    return 0;
}