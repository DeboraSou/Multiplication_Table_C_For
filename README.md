<div align="center" style="display: inline_block;">
  <a href="https://learn.microsoft.com/pt-br/cpp/c-language/?view=msvc-170" title="C | DOC" target="_blank" rel='noopener noreferrer'>
    <img alt="C" height="150" src="https://skillicons.dev/icons?i=c" />
  </a>
</div><br>

<div align="center";>
  <h1>TABUADA COM FOR 🧮</h1>
</div>

Este repositório em **C** fornece um programa que calcula a tabuada de um número fornecido pelo usuário. O usuário insere um número, e o programa utiliza um laço `for` para gerar e exibir a tabuada desse número de 0 a 10. O laço `for` é crucial para repetir a operação de multiplicação e formatar a saída, permitindo que a tabuada completa seja exibida de maneira clara e organizada no console.

## 🖥️ Explicação do Código

**Inclusão de Bibliotecas:**

- Estas bibliotecas são necessárias para funções de entrada/saída, manipulação de memória e configuração regional.

```c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
```
**Função Principal:**

- A função principal onde a execução do programa começa. A configuração regional é definida para `"Portuguese"` para suportar caracteres especiais.

```c
int main(int argc, char *argv[]){
    setlocale (LC_ALL, "Portuguese");
```

**Declaração de Variáveis:**

- Declaração das variáveis `x` e `n`, onde `x` é o número escolhido pelo usuário e `n` é usado para iterar na tabuada.

```c
int x, n;
```

**Configuração de Cor e Entrada do Usuário:**

- Define a cor do texto no console para vermelho, solicita que o usuário insira um número, e limpa a tela do console após a entrada.

```c
system ("color 0C");
printf ("\n\t\t\t\tInsira o número que deseja saber a tabuada: \n");
scanf ("%d", &x);
system ("cls");
```

**Exibição da Tabuada e Laço for:**

- Define a cor do texto no console para verde e exibe a tabuada do número inserido pelo usuário, de 0 a 10.

- O laço `for` é utilizado para iterar de 0 a 10, calculando e exibindo o produto do número fornecido pelo usuário (`x`) e o índice do laço (`n`). Esta estrutura de controle é fundamental para repetir a operação de multiplicação e exibir cada linha da tabuada.

```c
system ("color 0A");
printf ("\nTabuada do %d\n", x);

for (n = 0; n <= 10; n++){
    printf ("\n%d x %d = %d", x, n, x*n);
}
```

**Pausa e Limpeza da Tela:**

- Aguarda a entrada do usuário antes de limpar a tela e mudar a cor do texto para amarelo. Depois, aguarda novamente a entrada do usuário antes de finalizar o programa.

```c
getch();

system ("cls");
system ("color 0E");

getch();    
return 0;
```

## 📸 Imagens do Projeto em Funcionamento

<table>
  <tr>
    <td align="center">
      <img src="assets/multiplication-table-step-1.png" alt="Tela inicial">
      <p>Tela inicial</p>
    </td>
    <td align="center">
      <img src="assets/multiplication-table-step-2.png" alt="Inserção do número 3">
      <p>Inserção do número 3</p>
    </td>
    <td align="center">
      <img src="assets/multiplication-table-step-3.png" alt="Resultado da tabuada do 3">
      <p>Resultado da tabuada do 3</p>
    </td>
    <td align="center">
      <img src="assets/multiplication-table-step-4.png" alt="Fim da operação">
      <p>Fim da operação</p>
    </td>
  </tr>
</table>