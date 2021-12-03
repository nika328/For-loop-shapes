#include <stdio.h>

int main(void) {
  int n,j;
  printf("Input a number: ");
  scanf("%d", &n);
  printf("\n");
  for(int i=1; i<=n; i++)
  {
    //If you do not want the numbers just comment out this line
    printf("%d.", i);
    for(j=1; j<=i; j++)
    {
      printf("*");
    }
    printf("\n");
  }
  
  return 0;
  }