// Heart pattern

// Header File Inclusion and Namespace Selection
#include <iostream>
using namespace std;

// Main Function (Execution Starts Here)

int main()
{

    //Variable Declaration for a number (integer)
    int n;

    //Taking input from user asking an integer
    cout << "Enter a number : ";
    cin >> n;

    //First Section (Two Uphill Patterns)
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j < i; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        for (int j = i + 1; j < n; j++)
        {
            cout << "  ";
        }
        for (int j = i; j < n; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j < i; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= i; j++)
        {
            //To avoid an extra star at the last row of this section
            if (i == n && j == n)
            {
                cout << "";
            }
            else
            {
                cout << "* ";
            } 
        }
        cout << endl;
    }

    //Second Section (An downhill, then one uphill and another downhill pattern)
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "  ";
        }
        for (int j = i; j < n; j++)
        {
            cout << "* ";
        }
        for (int j = i; j <= n; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j < i; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j < i - 1; j++)
        {
            cout << "* ";
        }
        for (int j = i; j < n; j++)
        {
            cout << "* ";
        }
        for (int j = i; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    // copyright Junior J 27.05.2022

    //Third Section (One down hill pattern with required space before)
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j < i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "  ";
        }
        for (int j = i; j < n; j++)
        {
            cout << "* ";
        }
        for (int j = i + 1; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    //Press Enter to Exit Terminal
    system("pause");

    //End of statements, returning zero to int-datatype function
    return 0;
}