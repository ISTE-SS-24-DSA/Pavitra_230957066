#include <iostream>
using namespace std;

// Function to find the sum of the first n numbers using recursion
int sum(int n) {
    if (n <= 1) {
        return n;
    }
    return n + sum(n - 1);
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    int ans = sum(n);
    cout << "The sum of the first " << n << " numbers is: " << ans << endl;

    return 0;
}
