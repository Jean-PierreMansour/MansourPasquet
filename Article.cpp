// Noms: Jean-Pierre Mansour, Paul Pasquet

#include "Article.h"
#include "Livre.h"
#include "Document.h"

Article& Article::operator = (const Article& a)
{
    if (this != &a)
    {
        this->revue = a.revue;
        this->editeur = a.editeur;
        this->numero = a.numero;
    }
    return *this;
}
void Article::afficher() {
    cout << "Revue: " << this->revue << endl;
    cout << "Editeur: " << this->editeur << endl;
    cout << "Numero d'Edition: " << this->numero << endl;

}