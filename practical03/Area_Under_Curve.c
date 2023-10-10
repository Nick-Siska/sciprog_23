#include <stdio.h>
#include <math.h>

int main() {
  // Initializing my variables and setting their respective values
  double a = 0.0; 
  double b = M_PI/3;
  int N = 12;
  double sum = 0.0;
  double result = 0.0;
  double xi = 0.0;
  double log2_result = log(2.0);
  // Creating a for loop that will calculate the 2*tan(xi) and save it in sum
  for(int i = 1;i< N;i++){
    xi = a +i*(b-a)/(double)N;
    sum = sum + 2.0*tan(xi);
    //printf("xi is equalt to:  %.2f\n", xi);
    //printf("Sum is equalt to:  %.2f\n",sum);
  }
  // Adding the tan of the endpoints plus the previously calculated sum.
  // This is multipled what is specified in the formula
  result = (tan(a) + tan(b) +sum)*(b - a)/(2.0*(double)N);
  printf("End Result:  %.4f\n", result);
  printf(" Log2 Result: %.4f \n",log2_result);


}
