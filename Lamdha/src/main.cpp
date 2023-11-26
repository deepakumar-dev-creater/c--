#include <iostream>
using namespace std;
int main ()
{
    int x =2;
    auto greet  = [x] (int* value) {
        ++value;


    };

    struct Person
    {
        int Id;
        string name;
    };

    Person p = {1,"deepak"};

    cout<<p.name;
    
    cout<<"THe value of a after change \n";
    return 0;
}