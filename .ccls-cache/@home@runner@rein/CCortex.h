#ifndef CCORTEX_H
#define CCORTEX_H

#include <iostream>
using namespace std;

class CCortex
{
    public:
        CCortex();
        CCortex(int m_GR);
        virtual ~CCortex();
	    

    private:
    
      int m_EPO; 
      int m_GR;

};

#endif // CCORTEX_H