#include<iostream>
using namespace std;

int main()
{
    int x;
    int odd = 0;
    int even = 0;

    cout << "Enter an integer: ";
    cin >> x;

    while(x > 0)
    {
        if(x > 0)
        {
            cout << "Enter an integer: ";
            cin >> x;
        }   
        if(x%2 == 0)
        {
            even++;
        }  
        else
        {
            odd++;
        }
    }
    cout << "#Even numbers = " << even;
    cout << "#Odd numbers = " << odd;
    
    return 0;
}
