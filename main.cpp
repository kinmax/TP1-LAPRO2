#include "Veiculo.h"
#include "Parada.h"
#include "EstacaoDeBike.h"
#include "listaDeVeiculos.h"
#include "listaDeParadas.h"
#include "listaDeEstacoesDeBike.h"
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;

int main (void)
{
	//listaDeVeiculos transportePublico;
	//listaDeParadas todasAsParadas;
	//listaDeEstacoesDeBike bikePoa;
	int opcao = -1;
	string linha, estacao;

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

while (opcao != 0){
	cout << "Digite uma opção \n" << endl;
	cout << "1 - Exibir todas as linhas de ônibus da cidade." << endl;
	cout << "2 - Exibir todas as paradas de uma linha." << endl;
	cout << "3 - Exibir paradas com maior número de linhas." << endl;
	cout << "4 - Exibir todas estações de bicicletas." << endl;
	cout << "5 - Exibir a parada mais próxima de uma certa estação de bicicleta e suas linhas" << endl;
	cout << "0 - Sair" << endl;
	cin >> opcao;
switch (opcao){
	case 1: //transportePublico.ListaLinhasDeOnibus();
		break;
	case 2: cout << "Digite a linha:" << endl;
		cin >> linha;
		//transportePublico.ListaParadasDaLinha(linha);
		break;
	case 3: //todasAsParadas.ImprimeUsoDasParadas();
		break;
	case 4: //bikePoa.ListaEstacoesDeBike();
		break;
	case 5: cout << "Digite a estação de bicicleta:" << endl;
		cin >> estacao;
		//bikePoa.ListaParadasProximasDaEstacao(estacao);
		break;
	case 0: return 0;
	default: cout << "Opção Inválida. Digite uma nova opção." << endl;
}
}
return 0;
}
