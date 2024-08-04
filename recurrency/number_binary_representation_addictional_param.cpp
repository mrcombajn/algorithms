#include <iostream>
using namespace std;

void binary_representation(long long int number, string &output) {
    if(number == 0)
        return;

    binary_representation(number / 2, output);
    output += char(number % 2) + 48;
}

/// Number binary representation via recurrency with additional parameter
int main() {
    string output = "";
    binary_representation(2137, output);

    cout<< output;
    return 0;
}
