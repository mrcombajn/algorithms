#include <iostream>
using namespace std;

void reverse_array(int arr[], int firstHalfIndex, int secondHalfIndex) {
    if(firstHalfIndex >= secondHalfIndex)
        return;

    reverse_array(arr, firstHalfIndex + 1, secondHalfIndex - 1);
    swap(arr[firstHalfIndex], arr[secondHalfIndex]);
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    reverse_array(arr, 0, end(arr) - begin(arr) - 1);

    for (int i = 0; i < end(arr) - begin(arr); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
