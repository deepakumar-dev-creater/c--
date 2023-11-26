#include <iostream>
using namespace std;
int main ()
{

    cout<<"Hello- World \n";

    auto greet  = [] () {
        cout<<"Hello";
    };

    greet();
    return 0;
}