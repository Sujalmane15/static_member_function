#include<iostream>
using namespace std;
class demo
{
     private:
              int x;
              static int y;

    public:
            void getdata(int a)
            {
                 x=a;
                 y=y+1;
            }
            void putdata()
            {
                cout<<"\n x:"<<x<<"\n y:"<<y;
            }
            static void abc()
            {
                cout<<"\n static variable Y:"<<y;
            }
};
int demo::y;

int main ()
{
    demo aa;
    aa.getdata(10);
    aa.putdata();
    cout<<"\nSTATIC METHOD CALLED:";
    demo::abc();

    return 0;
}