#include<iostream>
using namespace std;
class A{
    protected:
    int x;
    public:
    void setDataX(int a){x = a;}
    void showDataX(){cout<<"x= "<< x;}
};

class B : protected A {
    public:
    int y;
    void setDataY(int b){ x = b;}
    void showDataY(){cout<<"b= "<<y;}
};

int main(){
    A a; B b;
    b.setDataY(4);
    b.showDataX();
}