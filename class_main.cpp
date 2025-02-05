#include <iostream>
using namespace std;

class Complex{
    public:
        int r1,r2,i1,i2,s1,s2;
        void sum(){
            s1=r1+r2;
            s2=i1+i2;

            cout<<"The sum of Complex numbers is: "<<s1<< " + "<<s2<<"i "<<endl;
        }

        void dif(){
            s1=r1-r2;
            s2=i1-i2;

            cout<<"The difference of Complex numbers is: "<<s1<< " - "<<s2<<"i "<<endl;
        }

        void mul(){
            s1=(r1*r2)-(i1*i2);
            s2=(r1*i2)-(r2*i1);

            cout<<"The product of Complex numbers is: "<<s1<< " x "<<s2<<"i "<<endl;
        }
        Complex(int d1=0):r1(d1),r2(d1),i1(d1),i2(d1),s1(d1),s2(d1){
            cout<<"Constructor is called:";
            cout<<r1<<r2<<i1<<i2<<s1<<s2<<"\n";
        }

        ~Complex(){
            cout<<"Destructor is called!";
        }
};  


int main(){
    Complex mycom;
    cout<<"Enter your complex no. (1)" << endl;
    cout<<"Real:";
    cin>>mycom.r1;
    cout<<"Imaginary:";
    cin>>mycom.i1;

    cout<<"Enter your complex no. (2)" << endl;
    cout<<"Real:";
    cin>>mycom.r2;
    cout<<"Imaginary:";
    cin>>mycom.i2;

    mycom.sum();
    mycom.dif();
    mycom.mul();
}
