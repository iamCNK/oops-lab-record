#include<iostream>
using namespace std;
class Parent{
    public:
    void Eat(){
        cout<<"I'm parent class method"<<endl;
        cout<<"I like non veg food"<<endl;
    }
};
class Child : public Parent{
    public:
    void Eat(){
        cout<<"I'm child class method"<<endl;
        cout<< "I dont like non veg food"<<endl;
    }
};
int main(){
    Child obj;
    obj.Eat();
}