// Noms: Jean-Pierre Mansour, Paul Pasquet

#include "Livre.h"
#include "Article.h"
#include "Document.h" 
#include "Bibliotheque.h"

int main() {
    string titre1 = "Le language Latex";
    Document d(titre1, "Apprendre Latex", "Francesco Totti");
    cout << "Affichage du Document: "<< endl;
    d.afficher();
    cout << endl;
    cout << "Clonage du document:"<< endl;
    Document* d_cloned = d.cloner();
    cout << "Affichage du clone du document:" << endl;
    d_cloned->afficher();
    cout << endl;
    cout << "Tester l'operateur '=':" << endl;
    string titreOriginal= "Titre original";
    Document doc0(titreOriginal,"Resume original","Auteur original");

    cout << "Document 1 (avant affectation):" << endl;
    doc0.afficher();

    string titreNouveau= "Titre nouveau";
    Document doc01(titreNouveau,"Resume Nouveau","Auteur Nouveau");

    cout << endl;
    cout << "Document 2 (avant affectation):" << endl;
    doc01.afficher();

    
    doc01 = doc0;

    cout << endl;
    cout << "Document 2 (apres affectation):" << endl;
    doc01.afficher();  
    cout << endl;


    string titre2= "Algèbre Linéaire";
    Document* doc1= new Livre(titre2, "Apprendre l'algèbre linéaire", "Joesph Damien", "Cassini", 1999);
    cout << endl;
    cout << "L'utilisation polymorphique d'un pointeur Document pour afficher un objet Livre:"<< endl;
    doc1->afficher();
    cout << endl;
    delete d_cloned;
    delete doc1;
    cout << endl;

    return 0;

}