#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <list>
#include <iterator>


using namespace std;

void showlist(list <int> l)
{
    list <int>::iterator it;
    for(it = l.begin(); it != l.end(); ++it) cout << '\t' << *it;
    cout << endl;
}

void insertlist(list <int> &l,int n)
{
    for(int i=0;i<n;i++)
    {
        int insert;
        cout << "Entrer le nombre " << i+1 << " de la list :" ;
        cin >> insert;
        l.push_back(insert);
    }
}

void tri_bull(list<int> &lis)
{
    int pass,counter;
    do
    {
        list<int>::iterator test = lis.begin();
        counter=0;

        for(list<int>::iterator it=lis.begin(); ++test != lis.end();++it)
            {
                if (*it > *test)
                {
                    pass = *it;
                    *it = *test;
                    *test = pass;
                    counter++;
                }   
            }    
    } while (counter!=0);
}

int main()
{
    list<int> lis;
    int n=5;
    insertlist(lis,n);
    tri_bull(lis);
    showlist(lis);
    return 0;
}

