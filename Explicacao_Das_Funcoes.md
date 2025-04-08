# Explicacao Das Funcoes

## memset

> Preenche um bloco de memória apontado por um pointer, até n posições, com um determinado valor

1. Recebo um pointer, um value e um numero de vezes
2. O pointer é associado a uma unsigned char, pois esse é o default para valores na memória
3. Criamos tambem um index para percorrer o pointer recebido
4. Associamos o pointer ao unsigned char, para trabalhar de forma local, na nossa funcao
5. Enquanto i for menor que a posicao n, entao
     1. A posicao de i, do unsigned char é igual a value
     2. incrementa o i
6. Devolve o unsigned char, pois ele agora, está como desejado
7. Retorna ptr, pois agora os bytes da memória foram modificados como desejado.
  1. Podiamos devolver nao so o unsigned char, como tambem devolver o proprio pointer, pois ao alterar o unsigned char, estamos a alterar tambem o pointer original
