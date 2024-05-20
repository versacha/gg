#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
double eps = 0.01;
        double temp;
        double temp0;
        double temp1;
        double degree;
        double factor;
        double term;       
        double result;
        double interval[2];
        double Pow;
printf("Введите степень числа x\n");
scanf("%lf", &degree);
printf("Введите множитель числа x\n");
scanf("%lf", &factor);
printf("Введите слагаемое\n");
scanf("%lf", &term);
printf("Введите число после знака равенства\n");
scanf("%lf", &result);
printf("Введите интервал\n");
scanf("%lf", &interval[0]);
scanf("%lf", &interval[1]);
double answer0 = interval[0];
double answer1 = interval[1];
temp0 = pow(answer0, degree) * factor + term - result;
temp1 = pow(answer1, degree) * factor + term - result;
if (temp0 == 0 || temp1 == 0)
printf("%lf",(answer0+answer1)/2);
temp = (answer0+answer1)/2;
Pow = pow(temp, degree) * factor + term - result;
while (abs(Pow) > eps){
if (Pow > 0)
answer1 = temp; else
if (Pow < 0)
answer0 = temp;
temp = (answer0+answer1)/2;
Pow = pow(temp, degree) * factor + term - result;}
printf("x равен %lf", temp);
return 0;
}
