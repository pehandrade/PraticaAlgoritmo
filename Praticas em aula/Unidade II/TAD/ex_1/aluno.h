/*Definição de novo tipo Aluno*/
typedef struct aluno Aluno;
/*Função que aloca memória para uma função struct aluno, recebe os dados via teclado e retorna um ponteiro para Aluno*/
Aluno * recebe_dados(void);
/*Função que imprimi os dados da stuct criada e preenchida pela função 'recebe_dados'*/
void imprime_dados(Aluno * aluno);
/*Função que libera a memória*/
void libera(Aluno * aluno);
/*Função que matricula alunos*/