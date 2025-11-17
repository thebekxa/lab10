#include <iostream>
using namespace std;

int main() {
    int arr[10] = {12, 7, 25, 4, 19, 33, 8, 41, 16, 29};
    int* ptrA = arr;  
    for (int i = 0; i < 10; i++) {
        cout << "Element " << i
             << " | Address: " << (ptrA + i)
             << " | Value: "   << *(ptrA + i)
             << endl;
    }

    return 0;
}
