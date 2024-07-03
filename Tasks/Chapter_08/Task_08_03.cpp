import std;
import person;

using namespace std;

int main()
{
    Person person{ "John", "Doe" };
    println("{} {}", person.getFirstName(), person.getLastName());

    Person persons[3];

    // Test copy constructor
    Person copy(person);

    // Test assignment operator
    Person otherPerson{ "Jane", "Doe" };
    copy = otherPerson;
}

// NOTE
// The above solution uses "const std::string&" as type for the parameters.
// This is not always optimal.
// You could use std::string_view as parameter type, but this is not always optimal either.
// The optimal solution is to pass std::string by value and move from the parameter.
// This is explained in the section "Optimal Way to Pass Arguments to Functions" in Chapter 9.
// See the solution for Exercise 8-1 for an example of using that technique.
