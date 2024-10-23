#include<stdio.h>
int main()
{
    float salary, da, hra, pf, gross, nt, ma = 300;
    printf("Enter the Amount of the Salary : ");
    scanf("%f", &salary);
    da = (salary * 10) / 100;
    hra = (salary * 7.50) / 100;
    pf = (salary * 12.50) / 100;
    gross = salary + da + hra + ma;
    nt = gross - pf;
    printf("\nThe 10%% Amount of Dear Allowance is : %.2f", da);
    printf("\nThe 7.50%% Amount of Human Resource Allowance is : %.2f", hra);
    printf("\nThe 12.50%% Amount of Provident Fund is : %.2f", pf);
    printf("\nThe Gross Amount is : %.2f", gross);
    printf("\nThe Net Total Amount is : %.2f", nt);
    return 0;
}
