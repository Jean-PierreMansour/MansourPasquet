// Noms: Jean-Pierre Mansour, Paul Pasquet

#include "Document.h"
#include "Livre.h"


Livre& Livre::operator = (const Livre& l)
{
    if (this != &l)
    {
        this->editeur = l.editeur;
        this->annee = l.annee;
    }
    return *this;
}
void Livre::afficher() {
    cout << "Editeur: " << this->editeur << endl;
    cout << "Annee: " << this->annee << endl;
   
}




