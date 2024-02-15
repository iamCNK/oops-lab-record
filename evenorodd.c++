#include<iostream>
using namespace std;
int EvenorOdd(int n)
{
    if(n%2==0)
    {
        cout << n <<" is Even\n";
    }
    else
    {
        cout << n <<" is Odd\n";
    }
    return 0;
}
int main()
{
    int n;
    cout << "Enter an integer : ";
    cin >> n;
    EvenorOdd(n);
    return 0;
}
