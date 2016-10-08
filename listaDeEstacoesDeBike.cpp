#include "listaDeEstacoesDeBike.h"
listaDeEstacoesDeBike::listaDeEstacoesDeBike(){
locais = NULL
}
void listaDeEstacoesDeBike::carregaEstacoes(const char *_fileName)
{
	EstacaoDeBike *aux, *no;
	ifstream bikefile;
	bikefile.open(_fileName, ios::in);
	string _ID, _nome, _latitude, _longitude;
	stringstream x;
	char tipo;
	int id, pos;
	
if (!linhafile.is_open()){
	cout << "O arquivo CSV não pode ser aberto.:" << endl;
}else{
	getline(linhafile, line);
	while (!linhafile.eof()){
		getline(linhafile, line);
		pos = line.find(";");
		ident = line.substr(0, pos);
		x << ident;
		x >> id;
		line.erase(0, pos+1);
		pos = line.find(";");
		nome = line.substr(0, pos);
		line.erase(0, pos+1);
		pos = line.find(";");
		linha = line.substr(0, pos);
		line.erase(0, pos+1);
		pos = line.find(";");
		type = line.substr(0, pos);
		x << type;
		x >> tipo;
		line.erase(0, pos+1);
	if (bikepoa == NULL){
		bikepoa = new EstacaoDeBike();
		bikepoa->set_ID(_ID);
		bikepoa->set_nome(_nome);
		bikepoa->set_latitude(_latitude);
		bikepoa->set_longitude(_longitude);
		bikepoa->set_prox(NULL);
	}else{
		aux = new EstacaoDeBike();
		aux->set_ID(_ID);
		aux->set_nome(_nome);
		aux->set_latitude(_latitude);
		aux->set_longitude(_longitude);
		aux->set_prox(NULL);
	while(no != NULL){
			no = no->get_prox()
			}
			no->set_prox(aux);
}
}
}
delete(no);
delete(aux);
}

void listaDeEstacoesDeBike::ExibeEstacoesDeBike(){
aux = locais;
while (aux != NULL){
	cout << "ID:" << aux.get_ID() << endl;
	cout << "Nome:" << aux.get_nome() << endl;
	cout << "Latitude:" <<  aux.get_latitude() << endl;
	cout << "Longitude:" << aux.get_longitude() << endl;
	cout << "\n" << endl;
	aux = aux.get_prox();
}
delete(aux);
return 0;
}

void listaDeEstacoesDeBike::InsereEstacao(EstacaoDeBike V){

		
		
	
