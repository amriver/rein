#ifndef CRein_H //si non défini
#define CRein_H // alors on definit
#include "CNephron.h"
#include "CCortex.h"
#include "CSurrenale.h"  



class CRein 
{
  public:
    CRein() ; // constructeur par défaut 
    virtual ~CRein (); // destructeur par défaut 

  private : 
        
      CNephron* m_nephron; // pointeur de la classe CNephron
	    CCortex* m_cortex; // pointeur de 
	    CSurrenale* m_surrenale;       
        

        




};
#endif 