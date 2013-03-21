 #ifndef RESSOURCESMOBILES_H
 #define RESSOURCESMOBILES_H

 #include<string>
 #include<vector>
 #include<map>
 #include "Position.h"
 #include "Element.h"

using namespace std;

 class RessourcesMobiles : public Element, public Mobile
 {
     private :


     public :
          void agir();

 };

 #endif
