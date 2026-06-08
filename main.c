#include <stdio.h>  // Inclui a biblioteca padrão para comandos de entrada e saída (como printf e scanf)
#include <locale.h> // Inclui a biblioteca padrão de localização para gerenciar acentuação e idiomas

int main()     // Ponto de início obrigatório de qualquer programa em C
{              // Abre o bloco de código principal da função main
    int a = 0; // Cria uma variável do tipo inteiro com o nome "a" e começa valendo 0

    // Configura o programa para usar o idioma e a codificação padrão do sistema operacional do usuário.
    // Isso ativa o suporte automático a UTF-8/Acentuação no Linux, Mac e prompts modernos do Windows.
    setlocale(LC_ALL, "");

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