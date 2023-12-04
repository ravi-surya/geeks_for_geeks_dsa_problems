#include <bits/stdc++.h>
#include <bitset>

using namespace std;

int main() {
    int num = 25;
    int *a = &num;

    // Output the value at the memory location pointed to by 'a'
    cout << "Value at memory location: " << *a << endl;

    // Output the memory address of the variable 'num'
    cout << "Memory address of num: " << &num << endl;

    return 0;
}
