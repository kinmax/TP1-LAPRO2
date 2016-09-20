#include "Veiculo.h"
#include "Parada.h"
#include "EstacaoDeBike.h"
#include <sstream>
#include <fstream>
using namespace std;

int main (void)
{
	Veiculo veiculo[1007];
	Parada	parada[5764];
	EstacaoDeBike bikepoa[37];

	ifstream paradafile, linhafile, linhaparadafile, bikefile;
	paradafile.open("paradas.csv", ios::in);
	linhafile.open("linhas.csv", ios::in);
	bikefile.open("estacoes-bikepoa.csv", ios::in);
	linhaparadafile.open("paradalinha.csv", ios::in);

	if (!paradafile.is_open() || !linhafile.is_open() || !bikefile.is_open() || !linhaparadafile.is_open())
	{
		cout << "Um ou mais arquivos não puderam ser abertos" << endl;
		return 0;
	}
	
	

	return 0;
}
