/**
Algorithme général  dans le main.
Une boucle par Elément par exemple ici homme.
    on fait homme.agir().
En fonction du type d’Elément un certain nombre de méthodes serons  appelés. Donc ici pour homme :
    -recherche autour de lui un Elément, avec une vision de 1,
        SI Elément trouvé :
            SI  Elément est une ressource
                - On vérifie le type d’Elément : Enfant, bible…
                -On ajoute la quantité de ressource de la ressource au peuple
                -On supprime l’Element du Vector et de la map
                -On se déplace sur la case de l’Element
            SI Element est une bonne-sœur
                -se reproduire si assez de ressource si non ne rien faire.

        Si Elément non trouvé :
             - on se déplace Random
**/






