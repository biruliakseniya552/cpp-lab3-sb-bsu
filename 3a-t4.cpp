#include<iostream>
#include<limits>
using namespace std;

int main()
{
    int k, i = 1, sum_k = 0, number;

    while (true)
    {
        cout << "enter the amount of integers to sum = ";
        cin >> k;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "you have entered wrong input! please enter a number." << endl;
        }
        else
        {
            break;
        }
    }
    do 
    {
        cout << "enter integer nr. " << i << ": ";
        cin >> number;


        while (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "invalid input! Please enter an integer: ";
            cin >> number;
        }

        sum_k += number;
        i++;
    } while (i <= k);

    cout << "the total sum of " << k << " integers is: " << sum_k;

    return 0;

}

