#include <iostream>
#include <algorithm>
using namespace std;


int get_multiply(int number) {
    int multiply = 1;

    for (; number > 0; number /= 10)
        multiply *= number % 10;

    return multiply;
}


int get_first(int number) {
    while (number >= 10)
        number /= 10;

    return number;
}


int compare(int a, int b) {
    int multiply_a = get_multiply(a),
        multiply_b = get_multiply(b);

    if (multiply_a < multiply_b) {
        return true;
    } else if (multiply_a == multiply_b) {
        if (get_first(a) < get_first(b)) {
            return true;
        } else if (get_first(a) == get_first(b)) {
            return a < b;
        } else {
            return false;
        }
    } else {
        return false;
    }
}


int main() {
    cout << "n: ";
    unsigned short n;
    cin >> n;
    int array[n];

    cout << "sequence: ";
    for (unsigned short i = 0; i < n; i++)
        cin >> array[i];

    cout << "answer:   ";
    sort(array, array + n, compare);
    for (int number : array)
        cout << number << ' ';
    cout << endl;
}
