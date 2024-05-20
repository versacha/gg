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
        double Pow = 1;
        double diff;
        double degree2;
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
        degree2 = degree;
        diff = degree*factor;
        degree--;
        temp0 = pow(answer1, degree) * diff + term - result;
        temp1 = pow(answer1, (degree2)) * factor + term - result;
        temp = answer1 - (temp1/temp0);
        Pow = pow(temp, degree2) * factor + term - result;
        while (abs(Pow) > eps){
                temp0 = pow(temp, degree) * diff + term - result;
                temp1 = pow(temp, (degree2)) * factor + term - result;
                temp = temp - abs((temp1/temp0));
                Pow = pow(temp, degree2) * factor + term - result;
        }
        printf("x равен %lf", temp);
        return 0;
}
