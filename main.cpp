#include <iostream>
#include"monde.h"
#include "Mobile.h"
#include "Random.h"
using namespace std;

int main()
{
    Monde M;
    Position pos(1, 3);
    Position pos3(1, 4);
    Position pos4(2, 6);
    Element * elt = new Element("Toto", pos);
    Element * elt2 = new Element("Patrick", pos);
    Element * elt3 = new Element("Loul", pos3);

    cout<<"Ajout de elt\n";
    M.ajouterElement(*elt);
    cout<<"Ajout de elt2\n";
    M.ajouterElement(*elt2);
    cout<<"Ajout de elt3\n";
    M.ajouterElement(*elt3);
    M.afficher();

    Mobile Mob1("Pretre",pos4);
    M.ajouterElement(Mob1);
    M.afficher();
    //Mob1.seDeplacer(2);
     map<Position, unsigned> card;
     card=M.getMap();
    //card.find(Mob1.getPos());

    //Mob1.getPos().setPosY(8);
    cout<<"APRES SE DEPLACE\n"<<"";

    M.afficher();

    return 0;
}
