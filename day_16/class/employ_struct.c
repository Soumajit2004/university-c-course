#include <stdio.h>

struct Employ {
    char name[20];
    int basic_salary;
};

int main() {

    struct Employ emp = {"Soumajit", 100000};
    struct Employ emp2 = {"Soumaditya", 1000000};

    
    int sal = emp.basic_salary;
    float hra = sal * .2;
    float da = sal * .3; 

    printf("Name: %s\nBase Salary: %d\nHRA: %.2f\nDA: %.2f\nTotal: %.2f", emp.name, sal, hra, da, (float)sal + hra + da);

    return 0;
}