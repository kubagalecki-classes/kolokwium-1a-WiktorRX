#include "zad1.hpp"

#include <vector>

// tutaj funkcja obliczMake
double obliczMake ( const std::vectpr<Tagliatelle>& v)
{
  int s = v.size();
double suma=0.0;
  for (vector<Tagliatelle>::size_type i = 0; i != v.size(); i++)
		{
			suma += v[i]->ileMaki()*s-i;
		}
    return suma;
}