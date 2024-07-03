import std;
import person;

using namespace std;

int main()
{
    // On the stack
    Person person_1{ "John", "Doe" };
    println("{} {}", person_1.getFirstName(), person_1.getLastName());

    // On the free store
    auto person_2{ make_unique<Person>("Aliaksei", "Ivanou") };
    println("{} {}", person_2->getFirstName(), person_2->getLastName());
}
