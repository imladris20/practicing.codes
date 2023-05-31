#include <stdio.h>
#include <stdlib.h>

typedef const char* String;
// defining structure variable
struct employee {
    char name[30];
    char hireDate[12];
    int salary;
};

// declaring 2 funcions.
void printID(struct employee emp);
void genID(struct employee emp);

int main()
{
    // declaring first emplyee information by using structure variable
    struct employee emp1 = {"Yi-Wen Po", "2020.10.02", 32500};
    struct employee emp2;

    printID(emp1);
    printf("\n");
    genID(emp2);

    return 0;

}

// printing employee's information
void printID(struct employee emp)
{
    printf("\n");
    printf("Name: \t\t%s\n", emp.name);
    printf("Hire Date: \t%s\n", emp.hireDate);
    printf("Salary: \t$%d\n", emp.salary);
}

// function of generating next employee's information
void genID(struct employee emp)
{
    printf("Please insert the Name: ");
    scanf("%[^\n]", emp.name);
    printf("Please insert the hire date: ");
    scanf(" %[^\n]", emp.hireDate);
    printf("Please insert the salary: ");
    scanf("%d", &emp.salary);
    printID(emp);
}