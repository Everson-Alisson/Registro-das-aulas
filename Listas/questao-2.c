a) Mensagem de erro.

b) Há um erro na linha p = x;. O ponteiro p deve armazenar o endereço de uma variável, mas neste caso, está sendo atribuído o valor de x diretamente a p.

c) Não, o programa exibiu uma mensagem de erro de compilação.

d) int main(void) {
    int x, *p;
    x = 100;
    p = &x;  // o erro estava aqui
    printf("Valor de p = %p\tValor de p = %d", (void)p, *p);
}
e) Sim