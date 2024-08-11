#include <iostream>
using namespace std;

int nwd(int a, int b) {
	if (a == b)
		return a;
	else if (a > b)
		return nwd(a - b, b);
	else
		return nwd(a, b - a);
}

// greatest common divisor via recurrency
int main() {
    int max = nwd(4, 2);

	cout<< max<<endl;

    return 0;
}
