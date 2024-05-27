import std;

using namespace std;

string replace(string_view haystack, string_view needle, string_view replacement)
{
    string result(haystack);
    auto position{ result.find(needle) };
    while (position != string::npos)
    {
        result.replace(position, needle.length(), replacement);
        position = result.find(needle, position + replacement.size());
    }
    return result;
}

int main()
{
    print("Source string: ");
    string haystack;
    getline(cin, haystack);

    print("String to find: ");
    string needle;
    getline(cin, needle);

    print("Replacement string: ");
    string replacement;
    getline(cin, replacement);

    string result{ replace(haystack, needle, replacement) };

    println("Haystack: {}", haystack);
    println("Needle: {}", needle);
    println("Replacement: {}", replacement);
    println("Result: {}", result);
}