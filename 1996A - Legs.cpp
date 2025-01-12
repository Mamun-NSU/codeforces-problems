#include <iostream>
using namespace std;

int main()
{
    int t; // Number of test cases
    cin >> t;

    while (t--)
    {
        int n; // Total number of legs
        cin >> n;

        // Minimum number of animals occurs when as many animals as possible have 4 legs (cows)
        int minAnimals = n / 4 + (n % 4 != 0 ? 1 : 0);

        // Output the result
        cout << minAnimals << endl;
    }

    return 0;
}