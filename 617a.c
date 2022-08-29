//Codeforces 617a

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x;
    scanf("%d", &x);

    int div = x/5;

    if((x%5 != 0) && (x%5 < 5)){
        div += 1;
    }

    printf("%d", div);

    return 0;
}