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
    int getPrivar(){
        return Privar;
    }
};
class Child : private Parent{
    public:
    int tmpPubVar=PubVar;
    int tmpProVar=ProVar;
    int tmpPriVar=getPrivar();
};
int main()
{
    Child obj;
    cout<<"The Public variable is : "<<obj.tmpPubVar<<endl;
    cout<<"The Private variable is : "<<obj.tmpPriVar<<endl;
    cout<<"The Protected variable is : "<<obj.tmpProVar<<endl;
    return 0;
}