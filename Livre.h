// Noms: Jean-Pierre Mansour, Paul Pasquet

#pragma once
#ifndef LIVRE_H 
#define LIVRE_H 
#include "Document.h" 
#include <string>
#include <iostream> 
using namespace std;


class Livre : public Document {
private:
    string editeur;  
    int annee;       

public:
    Livre(string titre, string resume, string auteur, string editeur, int annee) : Document(titre, resume, auteur) {
        this->editeur = editeur;
        this->annee = annee;
    }

    Livre(const Livre& l) : Document(l) {
        this->editeur = l.editeur;
        this->annee = l.annee;
    }

    ~Livre(){cout << "Destruction de Livre" << endl;}

    Livre& operator=(const Livre& l);

    virtual void afficher();

    virtual Livre* cloner() {return new Livre(*this);}

   






};

#endif
