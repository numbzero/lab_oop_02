//////////////////////////////////////////////////////////////////////////////////////////
// Să se scrie un program pentru implimentarea unei clase care include un set de 		 
// date specifice cît și următoarele metode:												
//		- Constructor prestabilit
//		- Constructor de copiere
//		- Constructor cu parametri
//		- Metodă de inițializare a datelor
//		- Metodă de afișare a datelor
//		- Metode de returnare și afișare separată a datelor(opțional)
// Clasa va conține metode descrise atît în interior cît și în exteriorul ei. Cel puțin o
// metoda va fi declarată ca funcție prietenă. După posibilități să se utilizeze pointerul
// this și operatorul rezoluție( ::).
//////////////////////////////////////////////////////////////////////////////////////////
// Sarcină individuală.
// 		Varianta:
//		5. Continent – emisfera, suprafața ,numarul de locuitori.
//////////////////////////////////////////////////////////////////////////////////////////

#include "lab_oop_02.h"

int main(void)
{
	system("clear");
	std::cout << BLUE "\t[LAB OOP 02]\n" RESET;
	
	Continent C1("Africa", "Northern", 30370000, 1225080510);
	Continent C2 = C1;
	Continent C3;

	C3.Init();
	Show(C3);			// Why this friend is calling constructors and destructors ?
	Show(C2);			// Why this friend is calling constructors and destructors ?
	Show(C1);			// Why this friend is calling constructors and destructors ?

#if DEBUG
	C3.ShowMethod();
	C2.ShowMethod();
	C1.ShowMethod();
#endif

	return 0;
}
