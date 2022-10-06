#ifndef CSURRENALE_H
#define CSURRENALE_H

#include <iostream>
using namespace std;

class CSurrenale
{
    public:
      CSurrenale();
      virtual ~CSurrenale();
      void Productioncortisol();
	    

    private:
      int m_cortisol;
      int m_adrenaline;
      int m_noradrenaline;

};

#endif // CSURRENALE_H