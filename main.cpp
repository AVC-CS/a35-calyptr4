#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int num1, num2, num3;
    int total = 0;
    int average;

    // TODO: seed the random number generator with time(0)
srand(time(0));
    // TODO: generate 3 random numbers between 0 and 99
num1 = rand()%100; num2 = rand()%100; num3 = rand()%100;
    // TODO: compute the total summation
total = num1 + num2 + num3;
average = total / 3;
    // TODO: print the 3 random numbers on the first line
cout << num1 << " " << num2 << " " << num3 << endl;
    // TODO: print the total and average (integer division) on the second line
cout << total << " " << average << endl;
    return 0;
}
