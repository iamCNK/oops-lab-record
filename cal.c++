#include<iostream>
using namespace std;
int main()
{
    int a,b,choice;
    cout << "Enter two integers : ";
    cin >> a >>b;
    cout << "1.Addtiton\n2.Subtraction\n3.Multiplication\n4.Division\n";
    cout << "Enter your choice : ";
    cin >> choice;
    switch(choice)
    {
        case 1:cout << "Addtion of "<<a<<" and "<<b<<" is "<<a+b <<endl;
                break;
        case 2:cout << "Subtraction of "<<a<<" and "<<b<<" is "<<a+b <<endl;
                break;
        case 3:cout << "Multiplication of "<<a<<" and "<<b<<" is "<<a*b <<endl;
                break;
        case 4:cout << "Division of "<<a<<" and "<<b<<" is "<<a/b <<endl;
                break;
    }
}