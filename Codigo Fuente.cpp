#include <iostream>
using namespace std;

int main() // funci�n principal
{
   int i; // variable para ciclo

   for(i = 1; i <= 20; i++) // ciclo for de 1 a 20
   {
      cout << i; // muestra el n�mero
      if(i % 3 == 0) cout << " es m�ltiplo de 3"; // resto==0
      else cout << " no es m�ltiplo de 3"; // resto != 0
      cout << endl; // cambio de l�nea
   }

       return 0;
}

// El codigo fuente indica que muestra una lista del 1 al 20 y el problema ha resolver si es o no multiplo con 3



