#include "CRein.h"

CRein::CRein()
{
    
    m_nephron = new CNephron;
    m_cortex = new CCortex;
    m_surrenale = new CSurrenale;

        


}

CRein::~CRein()
{
      delete m_nephron;
      delete m_cortex; 
      delete m_surrenale;
      
      
}