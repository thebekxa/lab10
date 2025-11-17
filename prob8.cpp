#include <iostream>
using namespace std;

int cstrLength(char* c) {
    char* ptr = c;
    int length = 0;
    while (*ptr != '\0') {
        length++;
        ptr++;
    }
    return length;
}
int main() {
    char str[200];
    cout << "Enter a string:\n";
    cout << cstrLength(str) << endl;

    return 0;
}
