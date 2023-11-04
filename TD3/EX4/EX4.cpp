#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <set>
#include <iterator>
#include <vector>
#include <list>


using namespace std;

template<class T,class P> bool check(T begin,T end,P n)
{
    bool r=false;
    for(T it=begin;it != end;++it) if(*it == n) r = true;
    return r;
}


int main()
{
    set<int> setint;
    for(int i=1;i<=100;i++) setint.insert(i);

    vector<string> vecstring;
    vecstring.push_back("Houssam");
    vecstring.push_back("Zitan");
    vecstring.push_back("AAAA");
    vecstring.push_back("BBBB");

    list<int> listint;
    for(int i=1;i<=100;i++) listint.push_back(i);

    float tab[100];
    for(int i=1;i<=100;i++) tab[i-1] = i;




    if(check(setint.begin(),setint.end(),100)) cout << "found in set of int !"<< endl;
    if(check(vecstring.begin(),vecstring.end(),"Houssam")) cout << "found vector of string !"<< endl;
    if(check(listint.begin(),listint.end(),67)) cout << "found in list of int !"<< endl;
    if(check(tab,tab+100,25)) cout << "found in Tab of Float !"<< endl;




    return 0;
}

