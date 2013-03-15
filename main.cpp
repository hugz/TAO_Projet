#include <iostream>
#include"monde.h"

using namespace std;

int main()
{
    Monde M;
    Position pos(1, 3);
    Position pos3(1, 4);
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

    return 0;
}
