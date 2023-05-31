#include <stdio.h>
#include <stdlib.h>

typedef const char* String;

typedef struct employee {
    String name;
    int hireDate;
    int salary;
} employee;


int main(void)
{
    employee emp1 = {"Yi-Wen Po", 20210313, 28000};
    printf("\n%s is hired at %d and her/his salary is %d dollars.\n", emp1.name, emp1.hireDate, emp1.salary);

    employee emp2;
    printf("\nPlease enter an employee's information: (name/hire date/salary)\n\n");
    scanf("%[^\n]", emp2.name);
    scanf("%d", &emp2.hireDate);
    scanf(" %d", &emp2.salary);

    printf("\n%s is hired at %d and her/his salary is %d dollars.\n", emp2.name, emp2.hireDate, emp2.salary);

    return 0;
}

