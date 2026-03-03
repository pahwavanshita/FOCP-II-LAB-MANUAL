#include<iostream>
using namespace std;
//base class (parent class)
class animal{
    public:
    void eat(){
        cout<<"animal is eating."<<endl;
    }
};
//derived class (child class)
class dog:public animal{
    public:
    void bark(){
        animal a;
        cout<<"dog is barking."<<endl;
    }
};
int main(){
    dog d;
    d.eat(); //inherited function from animal class
    d.bark(); //function of dog class
    return 0;
}