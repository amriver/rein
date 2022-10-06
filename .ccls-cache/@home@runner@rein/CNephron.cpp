#include "CNephron.h"


CNephron::CNephron()
{
    m_potassium =0; 
    m_calcium =0;
    m_phosphore =0;
    m_oxygene =0; 
    m_uree =0;
    m_acideurique =0;
  
}

CNephron::CNephron(int m_potassium, int m_calcium, int m_phosphore, int m_oxygene, int m_uree, int m_acideurique )
{
    m_potassium = m_potassium;
    m_calcium = m_calcium;
    m_phosphore = m_phosphore; 
    m_oxygene = m_oxygene; 
    m_uree = m_uree;
    m_acideurique = m_acideurique; 
    
}

CNephron::~CNephron()
{
 
}