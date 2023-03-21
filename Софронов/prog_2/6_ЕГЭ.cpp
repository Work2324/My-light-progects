#include <iostream>
using namespace std;
int main()
{
    int n, s;
    n = 1;
    s = 0;
    while (n <= 100)
    {
        s = s + 30;
        n = n * 2;
    }
    cout << s << endl;
}
