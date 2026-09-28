#pragma once
#include <iostream>
using namespace std;

class MyString
{
    char* str;
    int length;

public:
    MyString();
    MyString(int n);
    MyString(const char* s);
    ~MyString();

    void Input();
    void Print();
    MyString(const MyString& b);

    bool MyStrSearch(char* s);
    int MyChr(char c);
    int MyStrLen();
    void MyStrCpy(MyString& b);
    int MyStrCmp(MyString& b);

    MyString operator+(char c);
    MyString operator+(MyString b);
    MyString operator+(int n);
    friend MyString operator+(int n, MyString b);

    MyString& operator+=(char c);
    MyString& operator++();
    MyString operator++(int);
};