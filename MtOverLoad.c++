#include<iostream>
using namespace std;
class MethodOverLoad{
    public:
    void PrintValue(int A){
        cout<<"Integer value of A : "<<A<<endl;
    }
    void PrintValue(string A){
        cout<<"String Value of A : "<<A<<endl;
    }
    void PrintValue(double A){
        cout<<"Float Value of A : "<<A<<endl;
    }
};
int main(){
    MethodOverLoad obj;
    obj.PrintValue(12);
    obj.PrintValue("MVGR");
    obj.PrintValue(15.16);
}