// Noms: Jean-Pierre Mansour, Paul Pasquet

#include "Bibliotheque.h"
void Bibliotheque::afficher() {
    for (int i = 0; i < this->nbD; i++) {
        cout << "Document " << (i + 1) << ":" << endl;
        tab[i]->afficher();
        cout << '\n' << endl;
    }
}
