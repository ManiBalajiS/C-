#include <stdio.h>
float HRA(float basic);
float DA(float basic);
float PF(float basic);
float IncomeTax(float basic);
float GrossSalary(float basic);
float Deductions(float basic);
float NetSalary(float gross, float deductions);
void printSalarySlip(int empID, float basic, float gross, float deductions, float net);
int main() {
    int empID;
    float basicSalary, grossSalary, deductions, netSalary;
    printf("Enter Employee ID: ");
    scanf("%d", &empID);
    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);
    grossSalary = GrossSalary(basicSalary);
    deductions = Deductions(basicSalary);
    netSalary = NetSalary(grossSalary, deductions);
    printSalarySlip(empID, basicSalary, grossSalary, deductions, netSalary);
    return 0;
}
float HRA(float basic) {
    return 0.20 * basic;
}
float DA(float basic) {
    return 0.50 * basic;
}
float PF(float basic) {
    return 0.12 * basic;
}
float IncomeTax(float basic) {
    return 0.10 * basic;
}
float GrossSalary(float basic) {
    return basic + HRA(basic) + DA(basic);
}
float Deductions(float basic) {
    return PF(basic) + IncomeTax(basic);
}
float NetSalary(float gross, float deductions) {
    return gross - deductions;
}
void printSalarySlip(int empID, float basic, float gross, float deductions, float net) {
    printf("\n========= SALARY SLIP =========\n");
    printf("Employee ID     : %d\n", empID);
    printf("Basic Salary    : %.2f\n", basic);
    printf("Gross Salary    : %.2f\n", gross);
    printf("Deductions      : %.2f\n", deductions);
    printf("Net Salary      : %.2f\n", net);
    printf("==================================\n");
}
