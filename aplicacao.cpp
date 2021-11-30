#include "funcoes.cpp"

int main () {
	char sim_nao = " ";
	int matr = 0;
	char opcao = ' ';
	Aluno aluno[100];
	do {
	   opcao = menu();	
	   switch (opcao) {
	   		case '1':
	   			for(int i = 0; i < QTSALUNOS; i++){
	   					CadastroNomeMatricula(aluno[i]);
						std:: cout << "Deseja cadastrar mais um aluno?\ndigite S para sim e N para nao\n";
						std:: cin >> sim_nao;
						if(sim_nao == "S"){
							QTSALUNOS++;
						}else{
							break;
						}
				   } 
	   		break;
	   		case '2':
	   			std:: cout << "Digite a matricula do aluno a ser cadastrado:\n"
	   			std:: cin >> matr;
	   			for(i = 0; i < 1; i++){
	   				if(aluno[i].matricula == matr){
	   					CadastroNotasPrimeiro(aluno[i]);
					   }
				   }
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
