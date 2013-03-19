#include <iostream>
#include"monde.h"
#include "Mobile.h"
#include "Random.h"
#include "Monde.h"

using namespace std;

int main()
{
    Monde M;
    Position pos(1, 3);
    Position pos3(1, 4);
    Position pos4(2, 6);
    Position pos5(4, 8);

    Element * elt = new Element("Toto", pos);
    Element * elt2 = new Element("Patrick", pos);
    Element * elt3 = new Element("Loul", pos3);

    cout<<"Ajout de elt\n";
    M.ajouterElement(*elt);
    cout<<"Ajout de elt2\n";
    M.ajouterElement(*elt2);
    cout<<"Ajout de elt3\n";
    M.ajouterElement(*elt3);

    Mobile Mob1("Pretre",pos4);


    M.ajouterElement(Mob1);

    cout<<"1er AFFICHAGE\n\n";
    M.afficher();
    M.at(M.getMap().find(pos4)->second)->agir();
    //M.at(M.getMap().find(pos4)->second)->afficher();

    cout<<"APRES SE DEPLACE\n"<<"";
    cout<<"2eme AFFICHAGE\n\n";
    M.afficher();

    return 0;
}
