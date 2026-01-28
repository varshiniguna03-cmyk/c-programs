 #include <stdio.h>
#include <string.h>

// Define a structure for Employee
struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee employees[5];
    float totalSalary = 0.0, avgSalary;
    int i;

    printf("Enter details of 5 employees:\n");

    for (i = 0; i < 5; i++) {
        printf("\nEmployee %d:\n", i + 1);

        // Employee ID input
        printf("Enter Employee ID: ");
        while (scanf("%d", &employees[i].id) != 1) {
            printf("Invalid input. Enter a valid integer for ID: ");
            while (getchar() != '\n'); // clear buffer
        }

        // Clear input buffer before reading string
        while (getchar() != '\n');

        // Employee Name input
        printf("Enter Employee Name: ");
        fgets(employees[i].name, sizeof(employees[i].name), stdin);
        // Remove newline character from fgets
        employees[i].name[strcspn(employees[i].name, "\n")] = '\0';

        // Employee Salary input
        printf("Enter Employee Salary: ");
        while (scanf("%f", &employees[i].salary) != 1 || employees[i].salary < 0) {
            printf("Invalid input. Enter a valid positive salary: ");
            while (getchar() != '\n'); // clear buffer
        }

        totalSalary += employees[i].salary;
    }

    // Calculate average salary
    avgSalary = totalSalary / 5;

    // Display employee details
    printf("\n--- Employee Details ---\n");
    for (i = 0; i < 5; i++) {
        printf("ID: %d\tName: %s\tSalary: %.2f\n",
               employees[i].id, employees[i].name, employees[i].salary);
    }

    // Display average salary
    printf("\nAverage Salary of all employees: %.2f\n", avgSalary);

    return 0;
}


