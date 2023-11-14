#include<stdio.h>

int gcd_iteration(int a, int b){
  int temp;
  while(b != 0){
    temp = b;
    b = a%b;
    a = temp;
  }
  return a;
  
}

int gcd_recursive(int a, int b){
  if(b == 0){
    return a;
  }
  else{
    return  gcd_recursive(b,a%b);
  }
  
}

int main (void){
  int a = 5;
  int b = 25;
  int answer = gcd_iteration(a,b);
  int answer_recursion = gcd_recursive(a,b);
  printf("The iteration answer is %d \n", answer);
  printf("The recursive answer is %d \n", answer_recursion);
}
