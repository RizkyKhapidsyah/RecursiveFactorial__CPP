#include <iostream>
#include <conio.h>

using namespace std;

int Faktorial(int);

int main()
{
	int Angka, Hasil;

	cout << "Masukkan Angka : "; cin >> Angka;
	Hasil = Faktorial(Angka);
	cout << endl << "Nilai Faktorialnya Adalah : " << Hasil << endl;

	_getch();
	return 0;
}

int Faktorial(int N)
{
	if (N <= 1) 
	{
		cout << N;
		return N;
	}
	else
	{
		cout << N << "x";
		return N * Faktorial(N - 1);
	}
}