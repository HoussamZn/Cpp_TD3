#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>


using namespace std;

template<class T> T sq(T x)
{
    return x*x;
}


int main()
{
    int  a= 6;
    float b = 1.5;
    double c = 223.33;

    cout<<"le carre de a est : " << sq(a) << endl;
    cout<<"le carre de b est : " << sq(b) << endl;
    cout<<"le carre de c est : " << sq(c) << endl;


    return 0;
}

