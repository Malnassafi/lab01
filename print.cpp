#include<iostream>

using namespace std;

int main()
{
        int number;

        cout << " How many times would you like to print Hello?" << endl;
        cin >> number;

        for(int index = 0; index < number; index++)
        {
                cout << "Hello" << endl;
        }
        return 0;
}
