#include<iostream>
using namespace std;
#include<ctype.h>
int main(int argc, char const *argv[])
{
    char c;
    c='a';
    cout<<c<<" "<<char(toupper(c))<<endl;
    c='A';
    cout<<c<<" "<<char(toupper(c))<<endl;
    c='9';
    cout<<c<<" "<<char(toupper(c))<<endl;
    return 0;
}
