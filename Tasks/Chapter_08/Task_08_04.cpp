import std;
import person;

using namespace std;

int main()
{
    Person person_1{ "John", "Doe" };
    println("{} {}", person_1.getFirstName(), person_1.getLastName());

    Person person_2{ "Aliaksei", "Ivanou", "AI" };
    println("The initials of {} {} are {}", person_2.getFirstName(), person_2.getLastName(), person_2.getInitials());

    Person persons[3];

    // Test copy operator.
    Person copy{ person_1 };

    // Test assignment operator.
    Person otherPerson{ "Jane", "Doe" };
    copy = otherPerson;
}
