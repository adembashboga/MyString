#define _CRT_SECURE_NO_WARNINGS
#include "MyString.h"
#include <cstring>

MyString::MyString()
{
    length = 80;
    str = new char[length + 1];
    str[0] = '\0';
}

MyString::MyString(int n)
{
    length = n;
    str = new char[n + 1];
    str[0] = '\0';
}

MyString::MyString(const char* s)
{
    length = strlen(s);
    str = new char[length + 1];
    strcpy(str, s);
}

MyString::~MyString()
{
    delete[] str;
}

void MyString::Input()
{
    cin.getline(str, length + 1);
}

void MyString::Print()
{
    cout << str << endl;
}

MyString::MyString(const MyString& b)
{
    length = b.length;
    str = new char[length + 1];
    strcpy(str, b.str);
}

bool MyString::MyStrSearch(char* s)
{
    return strstr(str, s) != nullptr;
}

int MyString::MyChr(char c)
{
    char* p = strchr(str, c);
    return p ? p - str : -1;
}

int MyString::MyStrLen()
{
    return strlen(str);
}

void MyString::MyStrCpy(MyString& b)
{
    strcpy(str, b.str);
}

int MyString::MyStrCmp(MyString& b)
{
    return strcmp(str, b.str);
}

MyString MyString::operator+(char c)
{
    MyString a(length + 1);
    strcpy(a.str, str);
    a.str[length] = c;
    return a;
}

MyString MyString::operator+(MyString b)
{
    MyString a(length + b.length);
    strcpy(a.str, str);
    strcat(a.str, b.str);
    return a;
}

MyString MyString::operator+(int n)
{
    MyString a(length + n);
    strcpy(a.str, str);
    for (int i = length; i < length + n; i++)
        a.str[i] = ' ';
    a.str[length + n] = '\0';
    return a;
}

MyString operator+(int n, MyString b)
{
    return b + n;
}

MyString& MyString::operator+=(char c)
{
    int n = strlen(str);
    str[n] = c;
    str[n + 1] = '\0';
    return *this;
}

MyString& MyString::operator++()
{
    return *this += ' ';
}

MyString MyString::operator++(int)
{
    MyString a(*this);
    *this += ' ';
    return a;
}