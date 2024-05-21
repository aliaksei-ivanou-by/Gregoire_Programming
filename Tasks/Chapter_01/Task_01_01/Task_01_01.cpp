import std;
import employee;

using namespace std;

int main()
{
    HR::Employee anEmployee
    {
        .firstInitial = 'J',
        .lastInitial = 'D',
        .employeeNumber = 42,
        .salary = 80'000
    };

    println("Employee: {}{}", anEmployee.firstInitial, anEmployee.lastInitial);
    println("Number: {}", anEmployee.employeeNumber);
    println("Salary: ${}", anEmployee.salary);
}
