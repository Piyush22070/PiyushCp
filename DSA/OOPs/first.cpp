#include<bits/stdc++.h>
#include "Demo.cpp"
using namespace std;
class Demo2{
    public :
    int value;
    Demo2(int value){
        this->value = value; 
    }

};
class Hero{
    public:
    Hero(){
        cout << "this ->"<< this << endl;
    }
};
int main(){
    

    Demo2 *d2 = new Demo2(99);
    cout<<d2->value<<endl;


    Hero h1;
    cout<< &h1<< endl;

}