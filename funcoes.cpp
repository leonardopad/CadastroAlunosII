#include "funcoes.h"

char menu () {	
	char escolha = ' ';
	std::cout << "\n==SELECIONE UMA OPCAO ABAIXO==";
	std::cout << "\n=========DIGITE SUA OPCAO=======";
	std::cout << "\n========== 1 - Cadastra de Nome e Matricula do Aluno:===========";
	std::cout << "\n========== 2 - Cadastra da Primeira prova e AEP:===========";
	std::cout << "\n========== 3 - Cadastro da segunda prova e Aep:===========";
	std::cout << "\n========== 4 - Cadastro das Substitutivas:===========";
	std::cout << "\n========== 5 - Criacao do relatorio:===========";
	std::cout << "\n========== 6 - Ler o Arquivo de Alunos Aprovados===========";
	std::cout << "\n========== 7 - Criar arquivo com alunos aprovados===========";
	std::cout << "\n==========F - FINALIZA========\n";
	std::cin >> escolha;
	system("cls");
	return escolha;
}
bool criaArquivoDP1 (Aluno aluno){
	std::ofstream arquivo4;
	arquivo4.open("DepedenciaSegundoSemestre.csv", std::fstream::app);
	
	if(!arquivo4.is_open()){
		std:: cout << "Houve um erro ao abrir o arquivo de criacao da tabela de aprovados";
		return false;
	}
	
	arquivo4 << aluno.nome << ";"
			<< aluno.matricula << ";"
			<< aluno.aep1 << ";"
			<< aluno.prova1 << "\n";
			arquivo4.close();
			return true;
	
}
bool criaArquivoDP2 (Aluno aluno){
	std::ofstream arquivo5;
	arquivo5.open("DepedenciaPrimeiroSemestre.csv", std::fstream::app);
	
	if(!arquivo5.is_open()){
		std:: cout << "Houve um erro ao abrir o arquivo de criacao da tabela de aprovados";
		return false;
	}
	
	arquivo5 << aluno.nome << ";"
			<< aluno.matricula << ";"
			<< aluno.aep2 << ";"
			<< aluno.prova2 << "\n";
			arquivo5.close();
			return true;
	
}



bool criaArquivoAprovados (Aluno aluno){
	std::ofstream arquivo2;
	arquivo2.open("Aprovados.csv", std::fstream::app);
	
	if(!arquivo2.is_open()){
		std:: cout << "Houve um erro ao abrir o arquivo de criacao da tabela de aprovados";
		return false;
	}
	
	arquivo2 << aluno.nome << ";"
			<< aluno.matricula << ";"
			<< aluno.media << ";"
			<< aluno.status << "\n";
			arquivo2.close();
			return true;
	
}

bool criaArquivoDependencia (Aluno aluno){
	std::ofstream arquivo3;
	arquivo3.open("Dependencia.csv", std::fstream::app);
	
	if(!arquivo3.is_open()){
		std:: cout << "Houve um erro ao abrir o arquivo de criacao da tabela de aprovados";
		return false;
	}
	
	arquivo3 << aluno.nome << ";"
			<< aluno.matricula << ";"
			<< aluno.media << ";"
			<< aluno.status << "\n";
			arquivo3.close();
			return true;
}

bool cadastraAluno (Aluno aluno) {
	std::ofstream arquivo;
	arquivo.open("database.csv", std::fstream::app);
	
	if (!arquivo.is_open()) {
		std::cout << "Houve um erro ao abrir o arquivo!\n";
		return false;	
	}
	
	arquivo << aluno.nome << ";" 
			<< aluno.matricula << ";"
			<< aluno.aep1 << ";"
			<< aluno.prova1 << ";"
			<< aluno.aep2 << ";"
			<< aluno.prova2 << ";"
			<< aluno.sub << ";"
			<< aluno.media << ";"
			<< aluno.status << "\n";
	
	arquivo.close();
	return true;
}

void CadastroNomeMatricula(Aluno aluno[]){
	std:: cin.get();//limpar o buffer
	std:: cout << "Digite o nome do aluno: \n";
	std:: getline(std::cin, aluno.nome);
	std:: cout << "Digite a matricula do aluno: \n";
	std:: cin >> aluno.matricula;
}

void CadastroNotasPrimeiro(Aluno aluno[]){
	int matr = 0;
	std:: cout << "Escolha a matricula do aluno a cadastrar as notas:";
	std:: cin >> matr;
	for(int i = matr; i<= 100; i++){	
	if(aluno[i].matricula = matr){
		std:: cout << "Digite a AEP do aluno:";
		std:: cin >> aluno[i].aep1;
		std:: cout << "Digite a primeira prova do aluno:";
		std:: cin >> aluno[i].prova1;
		aluno.media = (aluno[i].aep1 + aluno[i].prova1)/2;
	}else{
		std:: cout << "Digite uma matricula valida.";
		}
	}
}
void CadastroNotasSegundo(Aluno aluno[]){
	int matr = 0;
	std:: cout << "Escolha a matricula do aluno a cadastrar as notas:";
	std:: cin >> matr;
	for(int i = 0; i < 1; i++){	
	if(aluno[i].matricula = matr){
		std:: cout << "Digite a AEP do aluno:";
		std:: cin >> aluno[i].aep2;
		std:: cout << "Digite a segunda prova do aluno:";
		std:: cin >> aluno[i].prova2;
		aluno[i].media2 = (aluno[i].aep2 + aluno[i].prova2)/2;
	}else{
		std:: cout << "Digite uma matricula valida.";
		}
	}
}

void CadastraMediaFinal(Aluno aluno[]){
	int matr = 0;
	std:: cout << "Escolha a matricula do aluno a cadastrar a media:";
	std:: cin >> matr;
	for(int i = 0; i < 1; i++){
		if(aluno[i].matricula == matr){
		aluno[i].mediaFinal = ((aluno.media[i] + aluno[i].media2)/2)
		if(aluno.mediaFinal < 6){
			std:: cout << "Digite a nota da substitutiva:\n";
			std:: cin >> aluno.sub;
			if(aluno.media >= aluno.media2){
				aluno[i].mediaFinal = ((aluno[i].aep2 + aluno[i].sub)/2);
			}else {
				aluno[i].mediaFinal = ((aluno[i].aep1 + aluno[i].sub)/2);
				}
			}
		}
	}
}
bool realizaLeitura(){
		std::ifstream arquivo;
		arquivo.open("database.csv");
		if(!arquivo.is_open()){
			std:: cout << "Falha ao abrir o arquivo!\n";
			return false;
		}
		std:: string linha;
		int indexAlunos = 0;
		while (std::getline(arquivo, linha)){
			int coluna = 0;
			int controleColuna = 0;
			std:: string conteudoLinha = "";
			
			for(int i = 0; i <= linha.size(); i++){
				if(coluna == 1 && controleColuna == 0) {
					alunos[indexAlunos].nome = conteudoLinha;
					conteudoLinha = "";
					controleColuna = 1;
				}
				else if(coluna == 2 && controleColuna == 1){
					alunos[indexAlunos].matricula = conteudoLinha;
					controleColuna = 2;
				}
//				else if(coluna == 3 && controleColuna == 2){
//					alunos[indexAlunos].aep1 = conteudoLinha;
//					controleColuna = 3;
//				}
				if(linha[i] == ';'){
					coluna++;
					continue;
				}
				
			}
			indexAlunos++;
		}
		arquivo.close();
	//tentativa1	
	for (int i = 0; i < 100; i++) {
	std::cout << "Aluno n-" << i+1 << "\n";
	std::cout << "Nome: " << alunos[i].nome << "\n";
	std::cout << "Matricula: " << alunos[i].matricula << "\n";
	std:: cout << "AEP1: " << alunos[i].aep1 << "\n";
	}	
	return true;
}
	



