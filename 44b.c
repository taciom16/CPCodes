#include <stdio.h>

void solve(int n, int a, int b, int c){

    int answer = 0;

    for (int i = 0; i <= c; i++){
        for (int j = 0; j <= b; j++){
            int temp = n - i * 2 - j;
            if(temp >= 0 && a * 0.5 >= temp){
                answer++;
            }
        }
    }
        
        printf("%d", answer);
}

int main(int argc, char const *argv[])
{
    int n, a, b, c;

    scanf("%d %d %d %d",& n, &a, &b, &c);
    solve(n, a, b, c);

return 0;

}
