// Noms: Jean-Pierre Mansour, Paul Pasquet

#include "Document.h"


Document::Document(string& titre, const string& resume, const string& auteur)
	: titre(titre), resume(new string(resume)), auteur(auteur) {}



Document::Document(const Document& d)
	: titre(d.titre), auteur(d.auteur){
	if (d.resume != NULL){
		resume = new string(* d.resume);
	}
	else {
		resume = NULL;
	}
}


Document & Document::operator= (const Document& d)
{
	if (this != &d)
	{
		if (this->resume != NULL)
			delete this->resume;
		if (d.resume != NULL)
			this->resume = new string(*(d.resume));
		this->titre = d.titre;
		this->auteur = d.auteur;
	}
	return *this;
}

