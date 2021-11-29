#include "funcoes.cpp"

int main () {
	char opcao = ' ';
	Aluno aluno[100];
	do {
	   opcao = menu();	
	   switch (opcao) {
	   		case '1':
	   			for(int i = 0; i < 1; i++){
	   					CadastroNomeMatricula(aluno[i]);
//					return aluno;
				   } 
	   		break;
	   		case '2':
	   			CadastroNotasPrimeiro(aluno[i]);
	   		break;	
	   		case 'F':
	   			std::cout << "Finalizando aplicacao...\n";
	   		break;
	   		case '6':
	   			realizaLeitura();
	   			break;
	   		default:
	   			std::cout << "Opcao invalida\n Tente Novamente!\n";
	   }
	} while(opcao != 'F');	
}
