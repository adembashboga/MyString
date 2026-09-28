#include "MyString.h"

int main()
{
    MyString a("Hello");
    MyString b("World");

    (a + 'A').Print();
    (a + b).Print();
    (a + 10).Print();
    (10 + a).Print();

    a += '!';
    a.Print();

    ++a;
    a.Print();

    return 0;
}