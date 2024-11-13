// Noms: Jean-Pierre Mansour, Paul Pasquet

#pragma once
#ifndef BIBLIOTHEQUE_H
#define BIBLIOTHEQUE_H
#include <iostream> 
#include "Document.h"
#include "Livre.h"
#include "Article.h"
#include <string>

#define MAX 100000

class Bibliotheque {
private:
    Document* tab[MAX];  
    int nbD;  

public:
    Bibliotheque() {
        this->nbD = 0;
        for (int i = 0; i < MAX; i++) {
            tab[i] = NULL; 
        }
    }

    void ajouter(Document* doc) {
        if (this->nbD < MAX) {
            tab[this->nbD] = doc;
            this->nbD++;
        }
        else {
            cout << "Ajout Impossible; Tableau Plein" << endl;
        }
    }

    Document* rechercher(const string& titre) {
        for (int i = 0; i < nbD; i++) {
            if (tab[i]->getTitre() == titre) {
                return tab[i];
            }
        }
        return NULL;
    }



    void afficher();

    ~Bibliotheque() {
        for (int i = 0; i < this->nbD; i++) {
            delete tab[i]; 
        }
    }






};
#endif
