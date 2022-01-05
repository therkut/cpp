#include <iostream>

using namespace std;

int main()
{
    int a, b, sum, number;

    a = 3;
    b = 16;
    sum = a + b;

    std::cout << sum << std::endl;

    cout << "Enter an integer: ";
    cin >> number;

    cout << "You entered " << number;
    return 0;
}