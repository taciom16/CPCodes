#include <stdio.h>

int gcd(int l, int r){
    if (r == 0){
        return l;
    }
    return gcd(r, l%r);
}
int lcm(int n, int m){

    int lowest = n*m/gcd(n,m);

    return lowest;
}

void solve(int n){

    int answer = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(lcm(i,j)/gcd(i, j) <= 3){
                answer += 1;
            }
            
        }
        
    }
    
    printf("%d", answer);

}

int main(int argc, char const *argv[])
{
    int cases;
    int n, l, r;
    scanf("%d", &cases);

    for(int i = 0; i < cases; i++){

        scanf("%d", &n);
        solve(n);

    }
    return 0;
}