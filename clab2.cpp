//c++ program to make the use of inline function//
#include <iostream>
using namespace std;

inline int mul(int x,int y)
{
    return x*y;
}

int main()
{
    int p,q;
    cout<<"Enter first no.: ";
    cin>>p;
    cout<<"Enter second no.: ";
    cin>>q;
    cout<<"product is "<<mul(p,q);
    return 0;
}
