#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout << "Enter a Number" << endl;
    cin >> n;
    if (n>0)
    {
        cout << "Number is Postive" << endl;
    }
    else if (n==0)
    {
        cout << "Number is Zero" << endl;
    }
    else if (n<0)
    {
        cout << "Number is Negative" << endl;
    }
    return 0;
}
