#include<iostream>
//find area of triangle through 
#include<cmath>
using namespace std;
class triangle{
    private:
    float a,b,c;
    public:
    triangle(float x,float y,float z){
        a=x;
        b=y;
        c=z;
    }
    void area(){
        float s=(a+b+c)/2;
        float ar=sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<"area of triangle is "<<ar<<endl;
    }

};
int main(){
    float x,y,z;
    cout<<"enter the sides of triangle "<<endl;
    cin>>x>>y>>z;
    triangle t(x,y,z);
    t.area();
    return 0;
}