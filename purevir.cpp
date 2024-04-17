#include <iostream>
using namespace std;
class Student {
public:
    virtual void displayInfo()= 0;
};

class Graduate : public Student {
private:
    string name;
    int age;
    float gpa;

public:
    
    Graduate(string n, int a, float g) {
        this->name=n;
        this->age=a;
        this->gpa=g;

    }
    void displayInfo() {
        cout << "Graduate Student Information:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "GPA: " << gpa << endl;
    }
};

int main() {
    
    Graduate undergrad("John Doe", 20, 3.5);
    Student* student = &undergrad;
    student->displayInfo();

}
