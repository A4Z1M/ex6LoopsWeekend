#include <iostream>

using namespace std;

int main()
{
    // Loop that will run needed procedures
    for (int i = 1; i < 1000; i++)
    {
        int sum = 0;

        // Find sum of proper factors of the number
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0) sum += j;
        }

        // Write desired output if sum equals the original number (if number is perfect)
        if (sum == i)
        {
            cout << i << " = ";
            for (int j = 1; j < i; j++) if (i % j == 0) cout << j << " + ";
            cout << endl; // Will seperate multiple perfect numbers in different lines
        }
    }

    return 0;
}
