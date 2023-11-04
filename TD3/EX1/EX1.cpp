#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>


using namespace std;

class complexe{
    private :
    double reel;
    double img;

    public :
    complexe(double r,double i)
    {
        reel=r;
        img=i;
    }

    complexe operator+(complexe z)
    {
        complexe somme(reel + z.reel,img + z.img);
        return somme;
    }

    complexe operator-(complexe z)
    {
        complexe sous(reel - z.reel,img - z.img);
        return sous;
    }

    complexe operator*(complexe z)
    {
        complexe mul(reel*z.reel - img*z.img,reel*z.img + img*z.reel);
        return mul;
    }

    static bool egalite(complexe z1,complexe z2)
    {
        if(z1.reel == z2.reel && z1.img == z2.img) return true;
        else return false;
    }

    static void afficher(complexe z)
    {
        if(z.img < 0) cout << z.reel << " - i" << -z.img << endl;
        else cout << z.reel << " + i" << z.img << endl; 
    }
};


int main()
{
    double reel1,reel2,img1,img2;
    cout << "Entre le nombre reel du premier nombre complexe : ";
    cin >> reel1;
    cout << "Entre le nombre imaginaire du premier nombre complexe : ";
    cin >> img1;
    cout << "Entre le nombre reel du deuxiem nombre complexe : ";
    cin >> reel2;
    cout << "Entre le nombre imaginaire du deuxiem nombre complexe : ";
    cin >> img2;

    complexe a(reel1,img1),b(reel2,img2);

    int pick;
    x:
    cout << "choisiz l'operération : " << endl;
    cout << "1 - addition"<< endl;
    cout << "2 - soustraction"<< endl;
    cout << "3 - multiplication"<< endl;
    cout << "4 - égalité"<< endl;
    cin >> pick;

    switch (pick)
    {
    case 1:
        
        cout << "Le resultat d'addition : ";
        complexe::afficher(a+b);
        break;    

    case 2:
        
        cout << "Le resultat de soubstraction : ";
        complexe::afficher(a-b);
        break;

    case 3:
        
        cout << "Le resultat multiplication : ";
        complexe::afficher(a*b);
        break;
    
    case 4:

        if(complexe::egalite(a,b)) cout << "Les deux nombre complexes sont égaux !" << endl;
        else cout << "Les deux nombre complexes ne sont pas égaux !"<< endl;
    
    default:
        goto x;

        break;
    }

    goto x;

    
    return 0;
}

