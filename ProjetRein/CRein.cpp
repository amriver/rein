#include "CRein.h"

CRein::CRein()
{
    m_nephron = new CNephron;
    m_cortex = new CCortex;
    m_vaisseaux = new CVaisseauxSanguins; 
    m_surrenale = new CSurrenale;
    m_uretere = new CUretere;
    
}

CRein::~CRein()
{
      delete m_nephron;
      delete m_cortex;
      delete[] m_vaisseaux; 
      delete m_surrenale;
      delete m_uretere;
      
}