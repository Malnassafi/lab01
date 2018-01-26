#include<iostream>

using namespace std;

int main()
{
        int num1, num2;

        cout << "What numbers would you like to add?" << endl;
        cin >> num1;
        cin >> num2;

        int sum = num1 + num2;

        cout << num1 << " + " << num2 << " = " << sum << endl;
        return 0;
}             
