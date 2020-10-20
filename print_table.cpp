#include <iostream>
using namespace std;
int main()
{
    int e;
    for (int e = 1; true; e++)
    {
        float num1;
        cout << "enter the number (press 0 to quit)" << endl;
        cin >> num1;
        if (num1 == 0)
        {
            cout << "see you again";
            break;
        }
        int i;
        for (int i = 1; i <= 10; i++)
        {

            cout << num1 << "x" << i << "=" << num1 * i << endl;
        }
    }
return 0;
}