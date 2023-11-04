#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <list>
#include <iterator>
#include <string>


using namespace std;

class personne{
    public :
    string nom;
    string prenom;
    int age ;
    personne(string n,string pr,int a)
    {
        nom=n;
        prenom=pr;
        age=a;
    }
};

void showlist(list <personne> l)
{
    list <personne>::iterator it;
    for(it = l.begin(); it != l.end(); ++it) cout << it->nom << " " << it->prenom << " " << it->age<<endl;
}

void insertlist(list <personne> &l,int n)
{
    for(int i=0;i<n;i++)
    {
        string in_pre,in_nom;
        int in_age;
        cout << "Entrer le nom du personne #" << i+1 << " de la list :" ;
        cin >> in_nom;        
        cout << "Entrer le prenom du personne #" << i+1 << " de la list :" ;
        cin >> in_pre;
        cout << "Entrer l'age du personne #" << i+1 << " de la list :" ;
        cin >> in_age;
        personne P(in_nom,in_pre,in_age);
        l.push_back(P);
    }
}

bool sort_option(personne p1,personne p2)
{
    if(p1.nom == p2.nom) return p1.prenom<p2.prenom;
    else return p1.nom < p2.nom;
}

int main()
{
    list <personne> lis;
    int n;

    cout << "Entre le nombre des personnes : ";
    cin >> n;

    insertlist(lis,n);

    cout << "**** liste non trie :"<< endl;
    showlist(lis);

    lis.sort(sort_option);
    cout << "**** Liste trie :"<< endl;
    showlist(lis);
}

