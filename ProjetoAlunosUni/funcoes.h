#include <iostream>
#include <fstream>



// Estrutura de Alunos
struct Aluno {
	std::string nome = "";
	std::string matricula = 0;
	float aep1 = 0;
	float prova1 = 0;
	float aep2 = 0;
	float prova2 = 0;
	float sub = 0;
	float media = 0;
	float media2 = 0;
	float mediaFinal;
	std::string status = "";
} typedef Aluno;

/**
* Esta função é chamada para exibir o menu
* na tela do usuário e retornar a opção 
* selecionada
* retorna o char digitada pelo usuário
*/
char menu ();
Aluno alunos[100];

/**
* Esta função é chamada para permitir 
* o cadastro de um Aluno, retorna
* true caso o cadastro tenha ocorrido com sucesso
* ou false caso acontecer um problema
*/
bool cadastraAluno (Aluno);

void CadastroNomeMatricula(Aluno[]);
/* nessa funcao se espera true or false na leitura do arquivo*/
bool realizaLeitura();
//Funcao que cria lista de aprovados
bool criaArquivoAprovados();

void CadastroNotasPrimeiro(aluno[]);

void void CadastroNotasSegundo(aluno[]);

void void CadastraMediaFinal(aluno[]);




