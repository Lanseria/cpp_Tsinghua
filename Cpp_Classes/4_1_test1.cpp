#include <cstring>

#include<iostream>

using namespace std;

class MyString

{

public:

MyString(const char *s);

~MyString() {delete []data;}

protected:

unsigned len;

char * data;

};

MyString::MyString(const char *s)

{

len = strlen(s);

data = new char[len+1];

strcpy(data,s);

}

int main()

{

MyString a("C++ Programming");

MyString b(a);

return 0;

}