#include "zad1.hpp"

#include <vector>

// tutaj funkcja obliczMake
double obliczMake ( const std::vector<Tagliatelle>& v)
{

double suma=0.0;
  std::for_each(v.begin(), v.end(), suma+=);
  return suma;
}
  
  /*for (vector<Tagliatelle>::size_type i = 0; i != v.size(); i++)
		{
			suma += v[i]->ileMaki()*s-i;
		}
    return suma;
}*/