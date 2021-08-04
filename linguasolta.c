///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///                  Projeto Sistema de Gestão Escolar                      ///
///                Developed by  @flgorgonio - Jan, 2021                    ///
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

/////
// Assinatura das funções
void telaSobre(void);
void telaPrincipal(void);
void telaEquipe(void);
char menuPrincipal(void);

void moduloAluno(void);
char menuAluno(void);
void telaCadastrarAluno(void);
void telaPesquisarAluno(void);
void telaAlterarAluno(void);
void telaExcluirAluno(void);

void menuProfessor(void);
void telaCadastrarProfessor(void);

void menuTurma(void);
void telaCadastrarTurma(void);

void menuRelatorio(void);


/////
// Programa principal
int main(void) {
	char opcao;
	do {
		opcao = menuPrincipal();
		switch(opcao) {
			case '1': 	moduloAluno();
						break;
			case '2': 	menuProfessor();
						break;
			case '3': 	menuTurma();
						break;
			case '4': 	menuRelatorio();
						break;
			case '5': 	telaSobre();
						break;
		} 		
	} while (opcao != '0');

    return 0;
}


/////
// Funções

void telaSobre(void) {
    system("clear||cls");
	printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             Universidade Federal do Rio Grande do Norte                 ///\n");
    printf("///                 Centro de Ensino Superior do Seridó                     ///\n");
    printf("///               Departamento de Computação e Tecnologia                   ///\n");
    printf("///                  Disciplina DCT1106 -- Programação                      ///\n");
    printf("///                  Projeto Sistema de Gestão Escolar                      ///\n");
    printf("///                Developed by  @flgorgonio - Jun, 2021                    ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            = = = = = Sistema de Gestão Escolar = = = = =                ///\n");
    printf("///                                                                         ///\n");
    printf("///  Programa exemplo utilizado na disciplina DCT1106 - Programação, para   ///\n");
    printf("///  fins didáticos de ilustração. O programa contém os principais módulos  ///\n");
    printf("///  e funcionalidades que serão exigidos na avaliação dos projetos a serem ///\n");
    printf("///  desenvolvidos pelos alunos ao longo da disciplina. Serve como um guia  ///\n");
    printf("///  de consulta e referência para o desenvolvidos dos demais projetos.     ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}


void telaPrincipal(void) {
    system("clear||cls");
	printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             Universidade Federal do Rio Grande do Norte                 ///\n");
    printf("///                 Centro de Ensino Superior do Seridó                     ///\n");
    printf("///               Departamento de Computação e Tecnologia                   ///\n");
    printf("///                  Disciplina DCT1106 -- Programação                      ///\n");
    printf("///                  Projeto Sistema de Gestão Escolar                      ///\n");
    printf("///                Developed by  @flgorgonio - Jun, 2021                    ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            = = = = = Sistema de Gestão Escolar = = = = =                ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Módulo Aluno                                              ///\n");
    printf("///            2. Módulo Professor                                          ///\n");
    printf("///            3. Módulo Turma                                              ///\n");
    printf("///            4. Módulo Matrícula                                          ///\n");
    printf("///            5. Módulo Relatórios                                         ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}


void telaEquipe(void) {
    system("clear||cls");
	printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             Universidade Federal do Rio Grande do Norte                 ///\n");
    printf("///                 Centro de Ensino Superior do Seridó                     ///\n");
    printf("///               Departamento de Computação e Tecnologia                   ///\n");
    printf("///                  Disciplina DCT1106 -- Programação                      ///\n");
    printf("///                  Projeto Sistema de Gestão Escolar                      ///\n");
    printf("///                Developed by  @flgorgonio - Jun, 2021                    ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            = = = = = Sistema de Gestão Escolar = = = = =                ///\n");
    printf("///                                                                         ///\n");
    printf("///            Este projeto exemplo foi desenvolvido por:                   ///\n");
    printf("///                                                                         ///\n");
    printf("///            Prof. Flavius Gorgônio                                       ///\n");
    printf("///            E-mail: flavius.gorgonio@ufrn.br                             ///\n");
    printf("///            Redes sociais: @flgorgonio                                   ///\n");
    printf("///            Repositório: https://github.com/flgorgonio/linguasolta       ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}


char menuPrincipal(void) {
	char op;
    system("clear||cls");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =   Escola de Idiomas Língua Solta    = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by  @flgorgonio - Jun, 2021                  ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = =  Menu Principal = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Módulo aluno                                             ///\n");
	printf("///           2. Módulo professor                                         ///\n");
	printf("///           3. Módulo turma                                             ///\n");
	printf("///           4. Módulo relatórios                                        ///\n");
	printf("///           5. Informações sobre o sistema                              ///\n");
	printf("///           0. Encerra o programa                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///           Escolha a opção desejada: ");
	scanf("%c", &op);
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
	return op;
}



void moduloAluno(void) {
	char opcao;
	do {
		opcao = menuAluno();
		switch(opcao) {
			case '1': 	telaCadastrarAluno();
						break;
			case '2': 	telaPesquisarAluno();
						break;
			case '3': 	telaAlterarAluno();
						break;
			case '4': 	telaExcluirAluno();
						break;
		} 		
	} while (opcao != '0');

}



char menuAluno(void) {
	char op;
    system("clear||cls");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =   Escola de Idiomas Língua Solta    = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by  @flgorgonio - Jan, 2021                  ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = = =  Menu Aluno = = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Cadastrar um novo aluno                                  ///\n");
	printf("///           2. Pesquisar os dados de um aluno                           ///\n");
	printf("///           3. Atualizar o cadastro de um aluno                         ///\n");
	printf("///           4. Excluir um aluno do sistema                              ///\n");
	printf("///           0. Voltar ao menu anterior                                  ///\n");
	printf("///                                                                       ///\n");
	printf("///           Escolha a opção desejada: ");
	scanf("%c", &op);
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
	return op;
}


void menuProfessor(void) {
    system("clear||cls");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =   Escola de Idiomas Língua Solta    = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by  @flgorgonio - Jan, 2021                  ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = =  Menu Professor = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Cadastrar um novo professor                              ///\n");
	printf("///           2. Pesquisar os dados de um professor                       ///\n");
	printf("///           3. Atualizar o cadastro de um professor                     ///\n");
	printf("///           4. Excluir um professor do sistema                          ///\n");
	printf("///           0. Voltar ao menu anterior                                  ///\n");
	printf("///                                                                       ///\n");
	printf("///           Escolha a opção desejada:                                   ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}


void menuTurma(void) {
    system("clear||cls");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =   Escola de Idiomas Língua Solta    = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by  @flgorgonio - Jan, 2021                  ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = = =  Menu Turma = = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Cadastrar uma nova turma                                 ///\n");
	printf("///           2. Pesquisar os dados de uma turma                          ///\n");
	printf("///           3. Atualizar o cadastro de uma turma                        ///\n");
	printf("///           4. Excluir uma turma do sistema                             ///\n");
	printf("///           0. Voltar ao menu anterior                                  ///\n");
	printf("///                                                                       ///\n");
	printf("///           Escolha a opção desejada:                                   ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}


void menuRelatorio(void) {
    system("clear||cls");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =   Escola de Idiomas Língua Solta    = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by  @flgorgonio - Jan, 2021                  ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = =  Menu Relatório = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Relatório de Alunos                                      ///\n");
	printf("///           2. Relatório de Professores                                 ///\n");
	printf("///           3. Relatório de Turmas                                      ///\n");
	printf("///           4. Relatório de Matrículas                                  ///\n");
	printf("///           0. Voltar ao menu anterior                                  ///\n");
	printf("///                                                                       ///\n");
	printf("///           Escolha a opção desejada:                                   ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}



void telaCadastrarAluno(void) {
	char matr[12];
	char nome[51];
	char email[51];
	char nasc[11];
	char celular[12];

    system("clear||cls");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =   Escola de Idiomas Língua Solta    = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by  @flgorgonio - Jan, 2021                  ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = = Cadastrar Aluno = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Matrícula (apenas números): ");
	scanf("%[0-9]", matr);
	getchar();
	printf("///           Nome completo: ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
	getchar();
	printf("///           E-mail: ");
	scanf("%[a-z@.]", email);
	getchar();
	printf("///           Data de Nascimento (dd/mm/aaaa):  ");
	scanf("%[0-9/]", nasc);
	getchar();
	printf("///           Celular  (apenas números): ");
	scanf("%[0-9]", celular);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}



void telaPesquisarAluno(void) {
    system("clear||cls");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =   Escola de Idiomas Língua Solta    = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by  @flgorgonio - Jan, 2021                  ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = = Pesquisar Aluno = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}



void telaAlterarAluno(void) {
    system("clear||cls");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =   Escola de Idiomas Língua Solta    = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by  @flgorgonio - Jan, 2021                  ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = = Alterar Aluno = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}


void telaExcluirAluno(void) {
    system("clear||cls");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =   Escola de Idiomas Língua Solta    = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by  @flgorgonio - Jan, 2021                  ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = = Excluir Aluno = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}


void telaCadastrarProfessor(void) {
	char cpf[12]; 
	char nome[51];
	char email[51];
	char nasc[11];
	char celular[12];

    system("clear||cls");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =   Escola de Idiomas Língua Solta    = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by  @flgorgonio - Jan, 2021                  ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = Cadastrar Professor = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           CPF (apenas números): ");
	scanf("%[0-9]", cpf);
	getchar();
	printf("///           Nome completo: ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
	getchar();
	printf("///           E-mail: ");
	scanf("%[A-Z0-9a-z@._]", email);
	getchar();
	printf("///           Data de Nascimento (dd/mm/aaaa):  ");
	scanf("%[0-9/]", nasc);
	getchar();
	printf("///           Celular  (apenas números): ");
	scanf("%[0-9]", celular);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}


void telaCadastrarTurma(void) {
	char codTurma[4];
	char nomeTurma[31];
	char semestre[7];
	char horario[15];
	char cpf[12];
	char local[11];

    system("clear||cls");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =   Escola de Idiomas Língua Solta    = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by  @flgorgonio - Jan, 2021                  ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = = Cadastrar Turma = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
    printf("///           Código da turma (Ex. F01, S02): ");
	scanf("%[A-Z0-9]", codTurma);
	getchar();
    printf("///           Nome da turma (Ex. Francês Básico 1): ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ0-9]", nomeTurma);
	getchar();
	printf("///           Semestre (Ex. 2021.1): ");
	scanf("%[0-9.]", semestre);
	getchar();
	printf("///           Horário (Ex. 35M12): ");
	scanf("%[0-9MTN]", horario);
	getchar();
	printf("///           CPF do professor (apenas números): ");
	scanf("%[0-9]", cpf);
	getchar();
	printf("///           Local das aulas (Ex. Sala F1): "); 
	scanf("%[A-Za-z 0-9]", local);
	getchar();
	printf("///                                                                       ///\n");
    printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}