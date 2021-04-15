#include <iostream>

using namespace std;

int sumOfFactors(int);
int numberOfFactors(int num);
int main()
{
    int cnt=0;
    int sum = 0;
    int counter=0;

    for (int i = 6; i < 1000; i++)
    {
       sum = sumOfFactors(i);


        if (sum == i)
        {
            counter=0;
            cnt  = numberOfFactors(i);
            cout << i << " = ";

            // Will run for each number
            for (int j = 1; j < i; j++)
            {
                if (i % j == 0)
                {
                    counter++;

                    // Will not display " + " if not needed
                    cout << j;
                    if (counter != (cnt - 0)) cout << " + ";
                }

           }
           cout << endl;
        }
    }

    return 0;
}

int sumOfFactors (int num)
{
    /// Find sum of proper factors of number
    int sum = 0;
    for (int j = 1; j < num; j++) if (num % j == 0) sum += j;
    return sum;
}

int numberOfFactors (int num)
{
    // Find number of proper factors of number
    int cnt = 0;
    for (int j = 1; j < num; j++) if (num % j == 0) cnt++;
    return cnt;
}
