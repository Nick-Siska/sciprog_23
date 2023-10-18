#include <math.h>
#include <stdio.h>

// Defining functions
double degtorad(double deg);
double traprule(int n);
// Creating a global variable
double tanval[12+1];
int main(){
  int N = 12, i;
  double  deg, rad;
  for(i = 0; i <= N; i++){
    deg = i*5.0;
    rad = degtorad(deg);
    tanval[i] = tan(rad);
    }
  double integral_approx = traprule(N);
  double integral_exact = log(2.0);
  printf("my approximation: %.4f \n", integral_approx);
  printf("The exact : %.4f \n", integral_exact);

}

double degtorad(double deg){
  return (deg* M_PI)/180.0;
}

double traprule(int n){
  int N = n, i;
  double width;
  double area = tanval[0] + tanval[N];
  for(i = 1; i< N; i++){
    area += 2.0*tanval[i];
  }
  width = degtorad((60.0 - 0)/(2.0*N));
  area = width*area;
  return area;
}
