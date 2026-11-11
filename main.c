#include <stdio.h>
#include <stdlib.h>

int main(){    	
    float N1, N2;   
    int opcao, sn;
    int s = 1;
    int n=2;
    do{
        printf("===============================\n");
        printf("Calculadora Simples\n");
        printf("===============================\n");
        printf("Selecione uma operação:\n");
        printf("1. Adição\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("5. Sair\n");
        printf("Opção:");
        scanf("%d", &opcao);
    } while(opcao != 5);
    if (opcao==1){
        printf("Digite o primeiro número:\n");
        scanf("%f", &N1);
        printf("Digite o segundo número:\n");
        scanf("%f", &N2);
        printf("Resultado: %.2f\n", N1 + N2);
            printf("Deseja realizar outra operação (s/n):\n");
        scanf("%d", &sn);
    } if (opcao==2){
        printf("Digite o primeiro número:\n");
        scanf("%f", &N1);
        printf("Digite o segundo número:\n");
        scanf("%f", &N2);
        printf("Resultado: %.2f\n", N1 - N2);
            printf("Deseja realizar outra operação (s/n):\n");
        scanf("%d", &sn);
    } if (opcao==3){
        printf("Digite o primeiro número:\n");
        scanf("%f", &N1);
        printf("Digite o segundo número:\n");
        scanf("%f", &N2);
        printf("Resultado: %.2f\n", N1 * N2);
            printf("Deseja realizar outra operação (s/n):\n");
        scanf("%d", &sn);
    } if (opcao==4){
        printf("Digite o primeiro número:\n");
        scanf("%f", &N1);
        printf("Digite o segundo número:\n");
        scanf("%f", &N2);
        printf("Resultado: %.2f\n", N1 / N2);
            printf("Deseja realizar outra operação (s/n):\n");
        scanf("%d", &sn);
    } if (N2==0){
            printf("Erro: Divisão por zero não é permitida.\n");
        }
    if (opcao>5){
        printf("Opção inválida, deseja voltar ao menu? (s/n)\n");
        scanf("%d", &sn);
    }if (opcao==5){
        printf("Obrigado por usar a calculadora! Até a próxima.\n");
    }if (sn==1){
        do{
          printf("===============================\n");
        printf("Calculadora Simples\n");
        printf("===============================\n");
        printf("Selecione uma operação:\n");
        printf("1. Adição\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("5. Sair\n");
        printf("Opção:");
        scanf("%d", &opcao);  
        } while (opcao != 5);
    }else if (sn==2){
        printf("Obrigado por usar a calculadora! Até a próxima.\n");
    }
    else{
        printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.\n");
    }
    return 0;
}
