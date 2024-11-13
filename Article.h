// Noms: Jean-Pierre Mansour, Paul Pasquet

#pragma once
#ifndef ARTICLE_H
#define ARTICLE_H
#include "Document.h"
#include "Livre.h"
class Article : public Document {
private:
    string revue;
    string editeur;
    int numero;

public:
    Article(string titre, string resume, string auteur, string revue, string editeur, int numero) : Document(titre, resume, auteur) {
        this->revue = revue;
        this->editeur = editeur;
        this->numero = numero;
    }

    Article(const Article& a) : Document(a) {
        this->revue = a.revue;
        this->editeur = a.editeur;
        this->numero = a.numero;

    }

    ~Article() { cout << "Destruction de l'Article" << endl; }

    Article& operator=(const Article& a);

    virtual void afficher();

    virtual Article* cloner() { return new Article(*this); }

};
#endif