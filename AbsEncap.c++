#include<iostream>
using namespace std;
class AccessSpecifierDemo{
    public:
    int pubVar;
    private:
    int priVar;
    protected:
    int proVar;
    public:
    void setVar(int pubVar,int priVar,int proVar){
        this->priVar=priVar;
        this->pubVar=pubVar;
        this->proVar=proVar;
    }
    void getVar(){
        cout<<"Public variable :"<<pubVar<<endl;
        cout<<"Private variable :"<<priVar<<endl;
        cout<<"Protected variable :"<<proVar<<endl;
    }
};
int main(){
    AccessSpecifierDemo obj;
    int a,b,c;
    cout<<"Enter three values : ";
    cin>>a>>b>>c;
    obj.setVar(a,b,c);
    obj.getVar();
    return 0;
}
