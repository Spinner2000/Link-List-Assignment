#include <iostream>
#include <string>
#include "myFunctions.hpp"
#include "LinkedList.hpp"

using namespace std;

int main(int argc, char** argv)
{
    LinkedList* ll = new LinkedList();
    ll->addEnd(4);
    ll->addEnd(6);
    ll->addEnd(8);
    ll->addEnd(2);
    ll->addFront(1);
    ll->display();
    int value = ll->removeEnd();
    ll->display();
    cout << value << endl;
    return 0;
}