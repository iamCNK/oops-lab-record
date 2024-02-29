#include<iostream>
using namespace std;
class Animal
{
    public:
    void eat()
    {
        cout<<"I'm eating because I'm hungry!!"<<endl;
    }
    void sleep()
    {
        cout<<"I'm taking rest now!!"<<endl;
    }
};
class Lion : public Animal  
{
    public:
    void hunt()
    {
        cout<<"I hunt animals to eat when I'm hungry"<<endl;
    }
};
int main()
{
    Lion obj;
    obj.hunt();
    obj.eat();
    obj.sleep();
    return 0;
}