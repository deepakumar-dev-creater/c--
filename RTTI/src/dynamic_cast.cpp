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

class Derived1 : public Base
{
    public:
        virtual void dummy()
        {
            cout<<"i am form the Derived1 class";
        }
};

class Derived2 : public Derived1
{
    public:
        void dummy()
        {
            cout<<"i am form the Derived2 class";
        }
};
int main ()
{
    Derived2 *ptr = new Derived2();

    ptr->dummy();

    std::cout << "\n"<<typeid(*ptr).name() << std::endl;  // Prints the type name

   return 0;
}