#include <stdio.h> // Inclui a biblioteca padrão para comandos de entrada e saída (como printf e scanf)

int main()     // Ponto de início obrigatório de qualquer programa em C
{              // Abre o bloco de código principal da função main
    int a = 0; // Cria uma variável do tipo inteiro com o nome "a" e começa valendo 0

    printf("Introduza um número inteiro: "); // Exibe a mensagem na tela pedindo para o usuário digitar um número
    scanf("%d", &a);                         // Lê o número inteiro digitado pelo usuário e guarda dentro da variável "a"

    if (a == 0)                       // Teste lógico: se o valor de "a" for exatamente igual a zero
    {                                 // Abre o bloco de comandos que roda se o teste do "if" for verdadeiro
        printf("O número é zero.\n"); // Exibe a mensagem na tela confirmando que o número digitado é zero
    } // Fecha o bloco de comandos do "if"
    else                         // Caso o teste lógico do "if" seja falso (o número não é zero)
    {                            // Abre o bloco de comandos que roda se o teste do "if" for falso
        printf("Não é zero.\n"); // Exibe a mensagem na tela dizendo que o número não é zero
    } // Fecha o bloco de comandos do "else"

    return 0; // Avisa ao sistema operacional que o programa terminou com sucesso e sem erros
} // Fecha o bloco de código principal da função main
