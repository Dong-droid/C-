#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a[20] = { 1, 2, 3, 4, 5 ,6,7 };
    int b, c;
    for (int i = 0; i < 10; i++)
    {
        cin >> b >> c;
        reverse(a + b, a + c);
    }

    for (int k : a)
        cout << k;
    return 0;
}