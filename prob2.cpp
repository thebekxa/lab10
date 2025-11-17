#include <iostream>
using namespace std;
void swapNums(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    string a = "Hello", b = "World";
    swapNums(&a,&b);
    cout << a <<" " << b;
}
