#include<iostream>
using namespace std;
class Complex{
private :
    int re,im;
public :
    void getdata()
    {
        cout<<"Enter the first complex number :"<<endl;
        cin>>re;
        cin>>im;
    }
    void showdata()
    {
        cout<<re<<"+"<<im<<"i"<<endl;
    }
    void add(Complex c1,Complex c2)
    {
        re=c1.re+c2.re;
        im=c1.im+c2.im;
    }
};
int main()
{
    Complex c1,c2,c3;
    c1.getdata();
    cout<<"The first complex number is : "<<endl;
    c1.showdata();
    c2.getdata();
    cout<<"The second complex number is : "<<endl;
    c2.showdata();
    c3.add(c1,c2);
    cout<<"The sum of two complex numbers is :"<<endl;
    c3.showdata();
}
