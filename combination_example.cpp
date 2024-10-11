#include <cstdint>
#include <iostream>
using namespace std;

/*
 * Calculate factorial
 */
uint16_t factorial(const uint16_t x)
{
    if (x <= 1)
        return 1;
    else
        return x * factorial(x - 1);
}

/*
 * main function
 */
int main() {
    int n, k;

    // get and validate user input
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter k: ";
    cin >> k;

    if ((k <= 0) || (n <= 0))
        // write out the placeholder error value
        cout << "result = " << -1 << endl;
    else {
        // calculate C(n,k) = n! / (k! * (n-k)!)
        uint16_t c_n_k = factorial(n) / (factorial(k) * factorial(n - k));

        // write out results
        cout << "result = " << c_n_k << endl;
    }
    return 0;
}
