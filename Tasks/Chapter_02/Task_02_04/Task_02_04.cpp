import std;

using namespace std;

int main()
{
    vector<double> values;
    println("Input values, one at a time following by Enter. 0 to stop:");
    while(true)
    {
        double value;
        cin >> value;
        if (value == 0.0)
            break;
        values.push_back(value);
    }
    for (auto value : values)
        println("{0:16e} | {0:12f} | {0:<12g} | {0:#>+12g}", value);
}