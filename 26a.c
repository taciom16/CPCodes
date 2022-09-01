#include <stdio.h>

int CheckPrime(int n){

    int flag = 0;
    int answer = 0;

    for(int j = 1; j <= n; j++){
        if ((n % j) == 0){
            flag += 1;
        }
    }
    if(flag == 2){
        return 1;
    }

    return 0;
}

int allFunc(int n){
    int answer = 0;

    for(int i = 1; i <= n; i++){
        if((n % i) == 0){
            answer += CheckPrime(i);
        }
    }

    if(answer == 2){
        return 1;
    }
    return 0;

}

void solve(int n){

int answer = 0;
int temp;
int array[n+1];

for(int i = 0; i < n; i++){

    array[i] = i + 1;

}
for(int i = 0; i < n; i++){

    int counter = 0;
    
    temp = array[i];
    answer += allFunc(temp);

}   
    printf("%d\n", answer); 
}
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    solve(n);
     
    return 0;
}
