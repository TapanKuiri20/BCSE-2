#include<iostream>
using namespace std;

class B;
class A{
     int a ;
     friend void friendFun(A,B);
     public:
     void setData(int x){
        a = x;
     }
};
class B{
     int b;
     friend void friendFun(A,B);
     public:
     void setData(int x){
        b = x;
     }
};

void friendFun(A a1, B b1){
    cout<<a1.a + b1.b;
}
 
int main(){
    A a1; B b1;
    a1.setData(4);
    b1.setData(5);
    friendFun(a1, b1);
    return 0;
}