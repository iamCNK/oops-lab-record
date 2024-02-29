#include<iostream>
using namespace std;
class Parent{
    public:
    int PubVar=10;
    private:
    int Privar=11;
    protected:
    int ProVar=12;
    public:
    void getPrivar(){
        cout<<"The Private variable is : "<<Privar<<endl;
    }
};
class Child : public Parent{
    public:
    int tmp=ProVar;
};
int main()
{
    Child obj;
    cout<<"The Public variable is : "<<obj.PubVar<<endl;
    obj.getPrivar();
    cout<<"The Protected variable is : "<<obj.tmp<<endl;
    return 0;
}