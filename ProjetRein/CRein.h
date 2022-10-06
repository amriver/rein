#ifndef CRein_H //si non défini
#define CRein_H //alors on définit
#include "CNephron.h"
#include "CCortex.h"
#include "CVaisseauxSanguins.h"
#include "CSurrenale.h"
#include "CUretere.h"  



class CRein 
{
  public:
    CRein() ; // constructeur par défaut 
    virtual ~CRein (); // destructeur par défaut 

  private : 
          CNephron* m_nephron;
	        CCortex* m_cortex;
	        CVaisseauxSanguins* m_vaisseaux;
          CSurrenale *m_surrenale;
          CUretere *m_uretere;
          int m_potassium; 
          int m_calcium;
          int m_phosphore;
          int m_oxygene; 
          int m_uree;
          int m_acideurique;
          int m_medicament;
          int creatinine;
          int m_cortisol; 
          int m_adrenaline;
          int m_noradrenaline;
          int m_EPO; 
        




};
#endif 