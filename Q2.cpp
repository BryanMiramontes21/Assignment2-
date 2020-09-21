//Question 2
#include <iostream>
#include <string>

using namespace std;

string stringProcess(string orig_str)
{
    string result_str;

    cout << orig_str.length() << endl;

    string subs1 = orig_str.substr(0, 2);
    string subs2 = orig_str.substr(2, 4);

    result_str = subs1 + "+" + subs2;

    return result_str;
}

int main()
{
    string orig_str;
    string result_str;

    cout << "Please input a string" << endl;
    cin >> orig_str;

    result_str = stringProcess(orig_str);

    cout << "The processed result is " << result_str << endl;

    return 1;
}