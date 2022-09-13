#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){

    int cases;
    char timur[] = "Timur";

    scanf("%d", &cases);

    for(int i = 0; i < cases; i++){

        int letters;
        char *input;
        int count = 0;

        scanf("%d ", &letters);

        input = (char *) malloc(letters * sizeof(char));

        gets(input);

        for(int i = 0; i < letters; i++){
            for(int j = 0; j < letters; j++){
                if(input[i] == timur[j]){
                    count += 1;
                }

            }

        }

        if(count == 5){
            printf("YES");
            }
        else{
            printf("NO");
        }

    }

    return 0;
}