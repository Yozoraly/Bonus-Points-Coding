#include <stdio.h>
int main(){
double a,b,c,d;
 while (scanf ("%lf %lf %lf %lf", &a,&b,&c,&d)==4){
double row1 = a/1 + b/2 + c/3 + d/4;
double row2 = b/2 + c/3 + d/4 + c/3;
double row3 = c/3 + d/4 + c/3 + b/2;
double row4 = d/4 + c/3 + b/2 + a/1;

double total = row1 + row2 + row3 + row4;
printf ("%.2lf\n", total);
}
}