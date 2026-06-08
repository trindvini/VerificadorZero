# 🔢 Verificador de Zero em C

Um programa simples feito em linguagem C que recebe um número inteiro digitado pelo usuário e valida se esse número é igual a zero ou não. O projeto conta com suporte universal para exibição de caracteres acentuados.

## 🚀 Tecnologias Utilizadas

*   **Linguagem:** C
*   **Automação:** Makefile
*   **Biblioteca Padrão:** `locale.h` (utilizada para suporte nativo a acentos no Linux, Mac e Windows)

## 💻 Como Compilar e Executar

Para rodar este projeto no seu computador, você precisa de um compilador de C (como o GCC) e da ferramenta Make instalados.

### Passo 1: Clonar o repositório
```bash
git clone https://github.com/trindvini/VerificadorZero
cd VerificadorZero
```

### Passo 2: Compilar o código
Graças ao arquivo `Makefile` incluso no projeto, você não precisa digitar comandos longos do GCC. Basta rodar no terminal:
```bash
make
```

### Passo 3: Executar o programa
Agora basta iniciar o arquivo executável que foi gerado automaticamente:
```bash
# No Windows
verificador.exe

# No Linux ou Mac
./verificador
```

### 🧹 Passo Extra: Limpar os arquivos gerados
Se você quiser limpar a pasta e apagar o arquivo executável gerado após os testes, basta rodar o comando:
```bash
make clean
```