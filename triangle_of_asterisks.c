#include <stdio.h>

//TRIANGLE PROGRAM

int main(void) {
  int num;
  printf("Enter the number of rows: ");
  scanf("%d", &num);
  for(int k=0; k<num; k++)
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