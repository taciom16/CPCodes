#include <stdio.h>

void solve(int n, int k, int s){

    int answer = 0;

    answer = k + n;

    if(!((k - s) > s)){
        answer = (k - s) + n +1;
    }

printf("%d\n", answer);
}

int main(int argc, char const *argv[])
{
    int cases;
    int n, k, s;
    scanf("%d", &cases);

    for(int i = 1; i < cases+1; i++){

        scanf("%d %d %d", &n, &k, &s);

        printf("Case #%d: ", i);
        solve(n, k, s);
    }
    return 0;
}
