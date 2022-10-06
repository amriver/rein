#ifndef CNephron_H
#define CNephron_H
//using namespace std;
class CNephron 
{
  public : 
    CNephron(); // constructeur par défaut 
    CNephron(int m_potassium, int m_calcium, int m_phosphore, int m_oxygene, int m_uree, int m_acideurique );
    virtual ~CNephron() ; // destructeur par défaut 

  private : 
         // données membres 
          int m_potassium; 
          int m_calcium;
          int m_phosphore;
          int m_oxygene; 
          int m_uree;
          int m_acideurique;
          int m_medicament;






};
#endif // CNephron_H