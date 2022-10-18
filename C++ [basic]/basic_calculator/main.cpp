#include <iostream>

using namespace std;

int main()
{
    int ch;
    float div;
    int a,b,res;
    cout << "Enter any 2 numbers" << endl;
    cin>>a>>b;
    cout<<endl<< "1.Addition" <<endl<<"2.subtraction"<<endl<<"3.multiplication"<<endl<<"4.division"<<endl<<"5.remainder"<<endl;
    cout<<"enter your choice:";
    cin>>ch;
    switch(ch)
    {
        case 1:
            res=a+b;
        cout<< "addition="<<res<<endl;
        break;
        case 2:
            res=a-b;
        cout<<"subtraction="<<res<<endl;
        break;
        case 3:
            res=a*b;
        cout<<"multiplication="<<res<<endl;
        break;
        case 4:
            res=a/b;
        cout<<"division="<<res<<endl;
        break;
        case 5:
            res=a%b;
        cout<<"remainder="<<res<<endl;
        break;
        default:cout<<"wrong choice!!";
    }
    system("pause");
    return 0;
}
