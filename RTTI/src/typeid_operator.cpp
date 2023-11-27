#include <iostream>
#include <typeinfo>

using namespace std;


class Base
{
    public:
       virtual void dummy(){
            cout <<"hello from the base";
        };
};

class Derived : public Base
{
    public:
        void dummy()
        {
            cout<<"i am form the Derived class";
        }
};

int main ()
{
    Base *ptr = new Derived();

    ptr->dummy();

    std::cout << "\n"<<typeid(*ptr).name() << std::endl;  // Prints the type name

   return 0;
}