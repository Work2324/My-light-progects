#include <iostream>
using namespace std;

int main() {

    int n, s;

    n = 4, s = 15;

    while (s <= 250) {

        s = s + 12;

        n = n + 2;

    }

    cout << n << endl;

    return 0;
}
