#include <iostream>
using namespace std;
int main()
{
    char ch;
    while (true)
    {
        if (ch != 'Y' && ch != 'y')
        {

            cout << "Simple Calculator" << endl;
            cout << "1.Addition" << endl;
            cout << "2.Subtraction" << endl;
            cout << "3.Multiplication" << endl;
            cout << "4.Division" << endl;
            cout << "Choose one option" << endl;
            int chioce;
            cin >> chioce;
            float num1, num2;
            cout << "Enter first and second number respectively" << endl;
            cin >> num1;
            cin >> num2;
            switch (chioce)
            {
            case 1:
                cout << num1 + num2 << endl;
                break;

            case 2:
                cout << num1 - num2 << endl;
                break;
            case 3:
                cout << num1 * num2 << endl;
                break;
            case 4:
                cout << num1 / num2 << endl;
                break;
            default:
                cout << "Invalid Input" << endl;
            }
        }
        else
            break;
        cout << "Do you want to close the Calculator(Y/N)?";
        cin >> ch;
    }
    return 0;
}