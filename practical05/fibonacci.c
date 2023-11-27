#include<stdio.h>
#include<stdlib.h>

// Declaration of prototype 
// Input arguments Fn-1 and Fn-2
// On exit: Fn and Fn-1

void fibonacci(int *a,int *b);

int main(){
  int n, i;
  int f0 = 0;
  int f1 = 1;
  printf("Enter a positive integer. \n");
  scanf("%d", &n);
  if(n<1){
    printf("The number is not positive or greater than zero");
    //stops program    
    exit(1);
  }
  printf("The fibonaccie sequence is \n");
  printf("%d, %d ", f0,f1);
  // Calculating Fibanacci sequence from 2
  for(i = 2; i<=n; i++){
    fibonacci(&f1,&f0);
    printf("%d ", f1);
    if((i + 1)%10 == 0 ){
      printf("\n");
    }


  }

  return 0;
}


void fibonacci(int *a,int *b){
  int next;
  // *a=fn-1 *b=fn-2 and next = fn
  next = *a + *b;
  *b = *a;
  *a = next;

}
