#include <stdio.h>

int main (){
 double money;
 double interest;
 scanf ("%lf %lf", &money, &interest);
 interest = (interest / 100) + 1;
 for (int i = 0; i < 3; i++){
    money = money * interest;
 }
 printf ("%.2lf\n", money);
}
