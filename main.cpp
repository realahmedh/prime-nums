#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int n) {
    if (n <= 1 || (n > 2 && n % 2 == 0)) {
        return false;
    }
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Check if the entered number is prime
    if (is_prime(n)) {
        cout << "The number you entered is prime." << endl;
    } else {
        cout << "The number you entered is not prime." << endl;
    }

    // Print all prime numbers up to n (excluding 2, 3, and 5)
    cout << "Prime numbers up to " << n << " : 2 3 5 ";
    for (int i = 7; i <= n; i += 2) {
        if (i % 5 != 0 && is_prime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}