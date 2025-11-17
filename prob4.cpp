#include <iostream>
using namespace std;

int sumArray(int* arr, int size) {
    int sum = 0;
    int* ptr = arr;

    for (int i = 0; i < size; i++) {
        sum += *(ptr + i);
    }

    return sum;
}

int main() {
    int numbers[5] = {3, 7, 2, 8, 10};

    cout << "Sum: " << sumArray(numbers, 5) << endl;

    return 0;
}
