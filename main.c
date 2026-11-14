#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <errno.h>

int main() {
    int opcao;
    double num1, num2, resultado;
    char resposta;
    char linha[100];
    char *fim;
    do {
        printf("\n================================\n");
        printf("       Calculadora Simples\n");
        printf("================================\n");
        printf("Selecione uma operacao:\n");
        printf("1. Adicao\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("5. Sair\n");
        while (1) {
            printf("Opcao: ");
            if (fgets(linha, sizeof(linha), stdin) == NULL)
                return 0;

            errno = 0;
            long valor = strtol(linha, &fim, 10);

            while (isspace((unsigned char)*fim))
                fim++;

            if (fim != linha && *fim == '\0' &&
                errno == 0 && valor >= 1 && valor <= 5) {
                opcao = (int)valor;
                break;
            }

            printf("Opcao invalida! Digite um numero entre 1 e 5.\n");
        }
        if (opcao == 5) {
            printf("\nObrigado por usar a calculadora! Ate a proxima.\n");
            break;
        }
        while (1) {
            printf("Digite o primeiro numero: ");

            if (fgets(linha, sizeof(linha), stdin) == NULL)
                return 0;

            errno = 0;
            num1 = strtod(linha, &fim);

            while (isspace((unsigned char)*fim))
                fim++;

            if (fim != linha && *fim == '\0' && errno == 0)
                break;

            printf("Entrada invalida! Digite um numero valido.\n");
        }
        while (1) {
            printf("Digite o segundo numero: ");

            if (fgets(linha, sizeof(linha), stdin) == NULL)
                return 0;

            errno = 0;
            num2 = strtod(linha, &fim);

            while (isspace((unsigned char)*fim))
                fim++;

            if (fim != linha && *fim == '\0' && errno == 0)
                break;

            printf("Entrada invalida! Digite um numero valido.\n");
        }
        switch (opcao) {
            case 1:
                resultado = num1 + num2;
                printf("Resultado: %g + %g = %g\n",
                       num1, num2, resultado);
                break;

            case 2:
                resultado = num1 - num2;
                printf("Resultado: %g - %g = %g\n",
                       num1, num2, resultado);
                break;

            case 3:
                resultado = num1 * num2;
                printf("Resultado: %g * %g = %g\n",
                       num1, num2, resultado);
                break;

            case 4:
                if (num2 == 0) {
                    printf("Erro: Divisao por zero nao e permitida.\n");
                } else {
                    resultado = num1 / num2;
                    printf("Resultado: %g / %g = %g\n",
                           num1, num2, resultado);
                }
                break;
        }
        while (1) {
            printf("\nDeseja realizar outra operacao? (s/n): ");

            if (fgets(linha, sizeof(linha), stdin) == NULL)
                return 0;

            fim = linha;

            while (isspace((unsigned char)*fim))
                fim++;

            resposta = tolower((unsigned char)*fim);

            if ((resposta == 's' || resposta == 'n') &&
                fim[1] != '\0') {
                char *resto = fim + 1;

                while (isspace((unsigned char)*resto))
                    resto++;

                if (*resto != '\0')
                    resposta = 'x';
            } else if (resposta != 's' && resposta != 'n') {
                resposta = 'x';
            }

            if (resposta == 's' || resposta == 'n')
                break;

            printf("Resposta invalida. Digite 's' para sim ou 'n' para nao.\n");
        }

        if (resposta == 'n') {
            printf("\nObrigado por usar a calculadora! Ate a proxima.\n");
            break;
        }
    } while (resposta == 's');
    return 0;
}
