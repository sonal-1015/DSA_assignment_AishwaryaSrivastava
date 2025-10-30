#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[100];  // using normal array, not vector
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int j = 0;  // this will mark the next position to place a non-zero element
    // Step 1: move all non-zero elements to the beginning
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[j] = arr[i];
            j++;  // move pointer forward
        }
    }
    // Step 2: fill the rest of the array with zeros
    while (j < n) {
        arr[j] = 0;
        j++;
    }
    cout << "Array after moving zeroes: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
