#include <stdio.h>
void solve(long long int n, long long int m, long long int a){

    long long int base = 0, altura = 0;

    if((n%a) == 0) 
        base = (n/a); 
    else 
        base = (n/a) + 1; 
 
    if((m % a) == 0) 
        altura = (m/a); 
    else 
        altura = (m/a) + 1;
    
    printf("%lld\n",base * altura); 
}
int main(int argc, char const *argv[])
{
    long long int n, m, a;
    scanf("%lld %lld %lld", &n, &m, &a);
    solve(n, m, a);
     
    return 0;
}
