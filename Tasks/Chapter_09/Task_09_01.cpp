import person;
import std;

using namespace std;

int main()
{
    Person person{ "John", "Doe" };
    println("{} {}", person.getFirstName(), person.getLastName());

    println("");

    Person persons[3];

    println("");

    // Test assignment operator.
    Person copy{ person };

    println("");

    Person otherPerson{ "Jane", "Doe" };
    copy = otherPerson;

    println("");

    // Test move construction.
    Person movedToPerson{ std::move(copy) };

    println("");

    // Test move assignment.
    movedToPerson = std::move(person);
}
