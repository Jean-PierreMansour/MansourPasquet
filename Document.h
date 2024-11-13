// Noms: Jean-Pierre Mansour, Paul Pasquet

#pragma once
#ifndef DOCUMENT_H 
#define DOCUMENT_H 
#include <string>
#include <iostream> 
using namespace std;

class Document
{
private:
	string& titre;
	string* resume;
	string auteur;

public: 
	Document(string& titre, const string& resume, const string& auteur);
	Document(const Document& d);
	Document& operator=(const Document& d);
	virtual Document* cloner() { return new Document(*this); }
	virtual void afficher() {
		cout << "Titre: " << this->titre << endl;
		cout << "Resume: " <<*resume << endl;
		cout << "Auteur: " << this->auteur << endl;
	}

	virtual ~Document(){
		delete resume;
	    cout << "Destruction de Document" << endl;}
	string getTitre() { return this->titre; }



};

#endif

