#include "zad1.hpp"
#include <string>

#include <memory>
#include <string>
#include <type_traits>

// tutaj klasa Penne
class Penne : public Makaron
{
  public:
  double ileMaki(unsigned P) const override
  {return P*L*W*(1. -R)*C*2;}
};

// tutaj definicja metody gotujMakaron
Makaron* Makaron::gotujMakaron(const std::string& s)
{
  char pierw = s.front();
  char ost = s.back();
  if(pierw==ost) 
  return new Tagliatelle(3.14, 0.42, 0.1);
  else
  return new Penne();
}