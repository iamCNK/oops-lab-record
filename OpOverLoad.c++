#include<iostream>
using namespace std;
class Complex{
    private:
    int real,img;
    public:
    Complex(int r=0,int i=0){
        real=r;
        img=i;
    }
    Complex operator+(Complex const& obj){
        Complex result;
        result.real=real+obj.real;
        result.img=img+obj.img;
        return result;
    }
    void display1(){
        cout<<"Addtion of complex numbers : "<<real<<"+"<<img<<"i"<<endl;
    }
     Complex operator-(Complex const& obj){
        Complex result;
        result.real=real-obj.real;
        result.img=img-obj.img;
        return result;
    }
    void display2(){
        cout<<"Subtraction of complex numbers : "<<real<<"-"<<img<<"i"<<endl;
    }

};
int main(){
    int r1,r2,i1,i2;
    cout<<"Enter real part of the two complex numbers: ";
    cin>>r1>>r2;
    cout<<"Enter imaginary part of the two complex numbers: ";
    cin>>i1>>i2;
    Complex c1(r1,i1),c2(r2,i2);
    Complex res1=c1+c2;
    res1.display1();
    Complex res2=c1-c2;
    res2.display2();
    return 0;
}