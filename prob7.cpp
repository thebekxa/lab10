#include <iostream>
using namespace std;

int findLargestElement(const int* arr, int size) {
    const int* ptr = arr;
    int largest = *ptr;
    for (int i = 1; i < size; i++) {
        if (*(ptr + i) > largest) {
            largest = *(ptr + i);
        }
    }
    return largest;
}

int main() {
    int size;
    int arr[100];
    cout << "Enter how many numbers: ";
    cin >> size;
    cout << "Enter integers:\n";
    for (int i = 0; i < size; i++) {
        cin >> *(arr + i);
    }
    int result = findLargestElement(arr, size);
    cout << "Largest element: " << result << endl;

    return 0;
}
