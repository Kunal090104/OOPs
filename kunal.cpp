#include <iostream>
using namespace std;
class Animal{
    public:
    void eat(){
        cout<<"I can eat!"<<endl;        
    }
};
class Bird{
    public:
    void fly(){
        cout<<"I can fly!"<<endl;
    }
};
class Bat: public Animal, public Bird{
    public:
    void sleep(){
        cout<<"I can sleep!"<<endl;
    }
};
int main(){
    Bat myBat;
    myBat.eat();
    myBat.fly();
    myBat.sleep();
    return 0;
}