# Nome do compilador
CC = gcc

# Parâmetros de compilação (verifica todos os avisos do compilador, informando sobre possíveis erros no código)
CFLAGS = -Wall

# Nome do arquivo executável final
TARGET = verificador

# Regra padrão: o que acontece quando digitamos apenas "make"
all: main.c
	$(CC) $(CFLAGS) main.c -o $(TARGET)

# Regra para limpar o projeto (apaga o executável gerado)
clean:
	rm -f $(TARGET) $(TARGET).exe