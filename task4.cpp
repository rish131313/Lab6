#include <iostream>
using namespace std;


int get_multiply(int number) {
    int multiply;

    for (multiply = 1; number > 0; number /= 10)
        multiply *= number % 10;

    return multiply;
}


int get_first(int number) {
    while (number >= 10)
        number /= 10;

    return number;
}


bool first_last_one(int number) {
    return get_first(number) == number % 10 == 1;
}


int main() {
    cout << "n: ";
    unsigned short n;
    cin >> n;
    int array[n];

    cout << "sequence: ";
    for (unsigned short i = 0; i < n; i++) {
        cin >> array[i];

        if (get_multiply(array[i]) == 180) {
            array[i] = 0;
            continue;
        }

        if (first_last_one(array[i]))
            for (unsigned short j = 0; j < n; j++)
                if (array[j] == 0) {
                    array[j] = array[i];
                    break;
                }
    }

    cout << "answer:   ";
    for (int number : array) {
        if (number != 0)
            cout << number << ' ';
    }
    cout << endl;
}
