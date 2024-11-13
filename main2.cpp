#include "Livre.h"
// Noms: Jean-Pierre Mansour, Paul Pasquet

#include "Article.h"
#include "Document.h" 
#include "Bibliotheque.h"

int main() {

    string titre3 = "Statistiques descriptive";
    string titre4 = "Programmation C++";
    Document* livre1 = new Livre(titre3, "Introduction aux statistiques", "Lionel Messi", "Maison du Livre", 1962);
    Document* article1 = new Article(titre4, "Apprendre C++", "Cristiano Ronaldo", "ScienceDirect ", "W3Schools", 1);

    Bibliotheque biblio;

    biblio.ajouter(livre1);
    biblio.ajouter(article1);
    cout << "Affichage de la bibliotheque:" << endl;
    cout << endl;

    biblio.afficher();

    cout << endl;

    cout << "Recherche du document 'Statistiques descriptive':" << endl;
    Document* DocumentDisponible = biblio.rechercher("Statistiques descriptive");
    if (DocumentDisponible != NULL) {
        cout << "Document trouve : " << endl;
        DocumentDisponible->afficher();
    }
    else {
        cout << "Document non trouve." << endl;
    }

    delete livre1;
    delete article1;

    return 0;
}
