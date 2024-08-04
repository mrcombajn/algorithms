#include <iostream>
using namespace std;

void reverse_array(int arr[], int leftIndex, int rightIndex) {
    if(leftIndex >= rightIndex)
        return;

    reverse_array(arr, leftIndex + 1, rightIndex - 1);
    swap(arr[leftIndex], arr[rightIndex]);
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    reverse_array(arr, 0, end(arr) - begin(arr) - 1);

    for(int i : arr) {
        cout << i << " ";
    }

    return 0;
}
