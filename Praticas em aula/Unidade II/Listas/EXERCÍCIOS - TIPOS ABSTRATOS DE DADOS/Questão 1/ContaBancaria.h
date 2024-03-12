typedef struct ContaBancaria ContaBancaria;
void preencher(ContaBancaria * Conta);
ContaBancaria * Cria_conta(int n);
void Deposita(ContaBancaria * Conta,float valor);
void Saca(ContaBancaria * Conta,float valor);
void Transfere(ContaBancaria * Conta_in,ContaBancaria * Conta_out,float valor);
float Saldo(ContaBancaria * Conta);
void libera_memoria(ContaBancaria * Conta);