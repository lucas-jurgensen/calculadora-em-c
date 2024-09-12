#include <stdio.h>

int main() {

    int n1, n2, resultado;
    char opcao;

    do {
        printf("\n================= CALCULADORA =================\n");
        printf("[+] - para adição\n");
        printf("[-] - para subtração\n");
        printf("[*] - para multiplicação\n");
        printf("[/] - para divisão\n");
        printf("[0] - desligar.\n");
        printf("Qual operação você deseja fazer: ");
        scanf(" %c", &opcao);

        if (opcao == '0') {
            break; 
        }

        printf("Você escolheu %c\n", opcao);

        printf("Digite dois número para a conta: ");
        scanf("%d %d", &n1, &n2);

        switch(opcao) {
            case '+':
                resultado = n1 + n2;
                break;
            
            case '-':
                resultado = n1 - n2;
                break;

            case '*':
                resultado = n1 * n2; 
                break;

            case '/':
                if(n2 == 0) {
                    printf("Impossível divisão com o número 0.\n");
                    continue;
                } else {
                    resultado = n1 / n2;
                }
                break;

            default:
                printf("Opração inválida, selecione uma válida.\n");
                continue;
        }

        printf("O RESULTADO DE %d %c %d = %d\n", n1, opcao, n2, resultado);

    } while(1);


    return 0;
}