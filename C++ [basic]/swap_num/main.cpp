#include <iostream>

using namespace std;

int main()
{
    int a,b,temp;
    cout << "enter any 2 numbers" << endl;
    cin>>a>>b;
    cout<<"Before swapping:"<<endl;
    cout<<"A="<<a<<endl<<"B="<<b<<endl;
    temp =a;
    a=b;
    b=temp;
    cout<<"After swapping:"<<endl;
    cout<<"A="<<a<<endl<<"B="<<b;
    system("pause");
    return 0;
}
