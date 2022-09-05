#include <stdio.h>

void solve(int n, int m){

  if ((n + m) % 2 == 0){
  printf("Tonya");
  }
  else{
    printf("Burenka");
  }
}
int main(int argc, char const *argv[])
{
  
  int cases, n, m;
  
  scanf("%d", &cases);

  for(int i = 0; i < cases; i++){

    scanf("%d %d", &n, &m);
    solve(n, m);
  }
  
  return 0;
}