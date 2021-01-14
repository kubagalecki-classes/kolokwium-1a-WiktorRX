#include "zad1.hpp"

#include <vector>

// tutaj funkcja obliczMake
double obliczMake ( const std::vector<Tagliatelle>& v)
{
int c=v.size();
double M=0.0;
for(auto i: v)
{
  M += (i.ileMaki(c));
  c--;
}
if (M>100){throw 12;}
else if (M>50) {throw 16.4;}
else return M;
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