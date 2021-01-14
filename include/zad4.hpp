#include "zad1.hpp"

#include <vector>

// tutaj funkcja obliczMake
double obliczMake ( const std::vector<Tagliatelle>& v)
{
int c=v.size();
double suma=0.0;
for(auto i: v)
{
  suma += (i.ileMaki(c));
  c--;
}
}

/*
  std::for_each(v.begin(), v.end(), suma+=v.ileMaki(c), c--);
  return suma;
}
  
  for (vector<Tagliatelle>::size_type i = 0; i != v.size(); i++)
		{
			suma += v[i]->ileMaki()*s-i;
		}
    return suma;
}*/