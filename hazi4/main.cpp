#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string str, str1;
    cout << "kerem a stringet: ";
    getline(cin, str);

    str1.append(str, 1 ,str.size());
    str1.append(str, 0, 1);
    cout << str1 << endl;
    return 0;
}
