#include <iostream>
using namespace std;

bool binary_search(int array[], int searchedNumber, int leftIndex, int rightIndex) {
    int subTableHalf = (leftIndex + rightIndex) / 2;
    if (array[subTableHalf] == searchedNumber)
        return true;
    if(leftIndex == rightIndex)
        return false;


    if (array[subTableHalf] > searchedNumber) {
        return binary_search(array, searchedNumber, leftIndex, rightIndex / 2 - 1);
    }

    return binary_search(array, searchedNumber, subTableHalf + 1, rightIndex);
}

/// Binary search implementation using recurrency
int main() {
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    bool number_found = binary_search(arr, 1, 0, end(arr) - begin(arr) - 1);

    cout << number_found << endl;

    return 0;
}
