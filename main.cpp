#include <iostream>
#include"Monde.h"
#include "Mobile.h"
#include "Random.h"

#include <time.h>
#include <stdlib.h>
#include <typeinfo>
#include "Homme.h"
#include "Femme.h"
#include "RessourcesMobiles.h"
#include "RessourcesImmobiles.h"
#include "config.h"
using namespace std;


int main()
{
    /**
        if(typeid(*at(i))==typeid(ressourceMobile))
        test si cet élément (ressourceMobile) est présent autour de id
    **/

    //réinisialise le rand.
    srand(time(NULL));
    int menu=1;
    bool init = false;
    Monde M;
    while(menu!=0)
    {

        cout<<"---------CONFIGURATION---------\n";
        cout<<"1) Choix d'initialiser le monde\n";
        cout<<"2) ne fait rien\n";
        cout<<"3) Choix des tests unitaires en vrac\n";
        cout<<"4) choix de jouer\n";
        cout<<"0) Choix de quitter le programme\n";
        cout<<"Votre Choix : ";
        cin >> menu;

    switch(menu)
    {
    case 1:
        {


            M.inisialiserLeMonde();
            init = true;
            M.afficher();
            cout<<"\nFIN DE L'INITIALISATION\n\n";
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

            Position pos(1, 3);
            Position pos3(1, 4);
            Position pos4(2, 6);
            Position pos5(4, 8);
            Position pos6(4,10);

            Element * elt = new Element("Toto", pos,&M);
            Element * elt2 = new Element("Patrick", pos,&M);
            Element * elt3 = new Element("Loul", pos3,&M);
            RessourcesMobiles * PetitEnfant = new RessourcesMobiles("Petit Enfant", pos6,&M, 2);
            Homme * Pretre = new Homme("Pretre", pos5, &M);

            cout<<"Ajout de elt\n";
            M.ajouterElement(elt);
            cout<<"Ajout de elt2\n";
            M.ajouterElement(elt2);
            cout<<"Ajout de elt3\n";
            M.ajouterElement(elt3);

            Mobile * Mob1 = new Mobile("Mobile", pos4, &M);


            M.ajouterElement(Mob1);
            M.ajouterElement(PetitEnfant);
            M.ajouterElement(Pretre);

            cout<<"Qte : \n"<<PetitEnfant->getQte()<<endl;
            cout<<"1er AFFICHAGE\n\n";
            M.afficher();
            M.at(M.getMap().find(pos4)->second)->agir();
            //M.at(M.getMap().find(pos4)->second)->afficher();

            cout<<"APRES SE DEPLACE\n"<<"";
            cout<<"2eme AFFICHAGE\n\n";
            M.afficher();

            cout<<"L'homme va chasser\n";
            M.at(M.getMap().find(pos5)->second)->agir();

            cout<<"APRES CHASSER\n"<<"";
            cout<<"3eme AFFICHAGE\n\n";
            M.afficher();

            cout<<"\n";
            system("pause");
            system("cls");
            break;
        }
        case 4:
        {
            if(init == true)
            {
                //boucle pour tous les
                for(unsigned int i = 0; i<NB_PEUPLE;i++)
                {

                        if(M.at(i) == NULL)
                            continue;
                        if(typeid(*M.at(i)) == typeid(Homme))
                        {
                            dynamic_cast<Homme *>(M.at(i))-> Homme::agir();
                        }
                        if(typeid(*M.at(i)) == typeid(Femme))
                       {
                            dynamic_cast<Femme *>(M.at(i))-> Femme::agir();
                       }
                        if(typeid(*M.at(i)) == typeid(RessourcesMobiles))
                        {
                            RessourcesMobiles *Enfant_a_violet = dynamic_cast<RessourcesMobiles *>(M.at(i));
                            Enfant_a_violet->agir();
                        }

                }
                cout<<"\n";
                system("pause");
                system("cls");
            }else{
                cout<<"inisialiser le monde avant!!";
            }

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
