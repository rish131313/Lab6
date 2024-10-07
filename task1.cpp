#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;


bool is_prime(int j) {
    for (int i = 2; i <= sqrt(j); i++)
        if (j % i == 0) return false;
    return true;
}


int main() {
    cout << "n: ";
    unsigned short n;
    cin >> n;
    int array[n];
    bool has_prime;

    cout << "sequence: ";
    for (unsigned short i = 0; i < n; i++) {
        cin >> array[i];

        if (is_prime(array[i]))
            has_prime = true;
    }

    cout << "answer:   ";
    if (has_prime)
        sort(array, array + n);

    for (int number : array)
        cout << number << ' ';
    cout << endl;
}
