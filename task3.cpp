#include <iostream>
using namespace std;


bool is_even(int number) {
    return number % 2 == 0;
}


int main() {
    cout << "n: ";
    unsigned short n;
    cin >> n;

    cout << "m: ";
    unsigned short m;
    cin >> m;

    int array[n][m];
    int counter = 0, evens_count = INT_MAX;
    unsigned short search_row;

    for (int i = 0; i < n; i++) {
        cout << "sequence for row " << i + 1 << ": ";
        for (int j = 0; j < m; j++) {
            cin >> array[i][j];
            counter += is_even(array[i][j])? 1 : 0;
        }

        if (counter < evens_count) {
            evens_count = counter;
            search_row = i;
        }

        counter = 0;
    }

    cout << "answer: " << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == search_row)
                array[i][j] *= array[i][j];

            cout << array[i][j] << ' ';
        }

        cout << endl;
    }
}
