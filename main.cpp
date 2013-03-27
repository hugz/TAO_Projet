#include <iostream>
#include"monde.h"
#include "Mobile.h"
#include "Random.h"
#include "Monde.h"
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
    //COMMIT!!!!!!!!
    /**
        if(typeid(*at(i))==typeid(ressourceMobile))
        test si cet élément (ressourceMobile) est présent autour de id
    **/

    //réinisialise le rand.
    srand(time(NULL));
    int menu=1;
    while(menu!=0)
    {

        cout<<"---------CONFIGURATION---------\n";
        cout<<"1) Choix du nombre de Curés et de bonne-soeurs\n";
        cout<<"2) Choix du nombre de ressources\n";
        cout<<"3) Choix des tests unitaires en vrac\n";
        cout<<"0) Choix de quitter le programme\n";
        cout<<"Votre Choix : ";
        cin >> menu;

    switch(menu)
    {
    case 1:
        {
            cout<<"\nnot implemented";
            cout<<"\n";
            system("pause");
            system("cls");
            break;
        }


     case 2:
         {
             cout<<"\nnot implemented";
             cout<<"\n";
            system("pause");
            system("cls");
             break;
         }
    case 3:
        {
            cout<<"\n\n";
            Monde M;
            Position pos(1, 3);
            Position pos3(1, 4);
            Position pos4(2, 6);
            Position pos5(4, 8);

            Element * elt = new Element("Toto", pos,&M);
            Element * elt2 = new Element("Patrick", pos,&M);
            Element * elt3 = new Element("Loul", pos3,&M);

            cout<<"Ajout de elt\n";
            M.ajouterElement(*elt);
            cout<<"Ajout de elt2\n";
            M.ajouterElement(*elt2);
            cout<<"Ajout de elt3\n";
            M.ajouterElement(*elt3);

            Mobile Mob1("Pretre",pos4,&M);


            M.ajouterElement(Mob1);

            cout<<"1er AFFICHAGE\n\n";
            M.afficher();
            M.at(M.getMap().find(pos4)->second)->agir();
            //M.at(M.getMap().find(pos4)->second)->afficher();

            cout<<"APRES SE DEPLACE\n"<<"";
            cout<<"2eme AFFICHAGE\n\n";
            M.afficher();

            cout<<"\n";
            system("pause");
            system("cls");
            break;
        }
    case 0:
        {
            cout<<"\nLe programme va se fermer!!\n";
            return 0;
            break;
        }
    default:
        {
            system("cls");
            cout<<"\nERREUR, VOTRE CHOIX DOIT ETRE EN 0 ET 3!!\n";
            menu=1;
            break;


        }


    }

    }
}
