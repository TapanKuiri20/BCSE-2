#include<iostream>
using namespace std;
class Integer{
    private:
    int n;
    public:
    void setData(int x){
        n = x;
    }
    void showData(){
        cout<<"n = "<<n;
    }
    Integer operator++ (){
        Integer temp;
        temp.n = ++n;
        return temp;
    }
     Integer operator++ (int){
        Integer temp;
        temp.n = n++;
        return temp;
    }
};

int main(){
    Integer i1, i2;
    i1.setData(3);
    // i1.showData();
    // i2 = ++i1;
    i2 = i1++;
    i2.showData();
    i1.showData();

}