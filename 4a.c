//Codeforces 4a

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x;
    scanf("%d", &x);

    int mod = x/2;
    
    if((mod%2 == 0)){
        printf("Yes");
    }
    else{
        printf("No");
    }

    return 0;
}
