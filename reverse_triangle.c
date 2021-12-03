#include <stdio.h>

//REVERSE TRIANGLE PROGRAM

int main(void) {
  int num;
  printf("Enter the number of rows: ");
  scanf("%d", &num);
  for(int k=num; k>0; k--)
  {
    for(int i=0; i<num-k; i+=1)
    {
      fputc(' ', stdout);
    }
    for(int i=0; i<(2*k-1); i++)
    {
      fputc('*', stdout );
    }
    fputc('\n', stdout);
  }  

  return 0;
}