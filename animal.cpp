#include<iostream>
using namespace std;
class animal{
    public:
    virtual void sound()
    {
        cout<<"the animal make sound"<<endl;
    }
};
class dog:public animal{
    public:
    void sound()override{
        cout<<"dog barks"<<endl;
    }
};
class cat: public dog{
    public:
    void sound()override{
        cout<<"cat meow"<<endl;
    }
};
int main(){
    animal *ace;

    dog d;
    cat c; 

    ace =&d;
    ace->sound();

    ace=&c;
    ace->sound();
    return 0;
}