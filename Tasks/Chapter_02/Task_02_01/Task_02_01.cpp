import std;

using namespace std;

int main()
{
    print("First sring: ");
    string s1;
    getline(cin, s1);

    print("Second string: ");
    string s2;
    getline(cin, s2);

    if (is_lt(s1 <=> s2))
        print("{}\n{}", s1, s2);
    else
        print("{}\n{}", s1, s1);
}