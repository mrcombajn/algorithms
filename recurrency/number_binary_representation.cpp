#include <iostream>
using namespace std;

void binary_representation(long long int number) {
    if(number == 0)
        return;

    binary_representation(number / 2);
    cout << number % 2;
}

/// Number binary representation via recurrency
int main() {
    binary_representation(2137);
    return 0;
}
