# Explicacao Das Funcoes

## Parte 1

### memset

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


### bzero

> Define todos os bytes de um bloco de memória apontado por um pointer para zero.

1. Recebo um pointer e um tamanho (n).
2. O pointer é associado a uma unsigned char, pois esse é o default para valores na memória.
3. Criamos também um index para percorrer o pointer recebido.
4. Associamos o pointer ao unsigned char, para trabalhar de forma local, na nossa função.
5. Enquanto i for menor que n (tamanho do bloco de memória), então:
    1. A posição de i, do unsigned char é definida como zero.
    2. Incrementa o i.
6. Devolve o unsigned char, pois ele agora está com todos os bytes definidos como zero.
7. Retorna ptr, pois agora os bytes da memória foram modificados para zero como desejado.
   1. Podíamos devolver não só o unsigned char, como também devolver o próprio pointer, pois ao alterar o unsigned char, estamos a alterar também o pointer original.

### memcpy

*escrito por gemma 3*

> Copia 'n' bytes de um bloco de memória de origem para um bloco de memória de destino.

A função `ft_memcpy` realiza a cópia de dados entre duas áreas da memória, garantindo que o conteúdo da área de origem seja replicado na área de destino. 

1. **Recebimento dos parâmetros:** A função recebe três argumentos:
    * `dest`: Um pointer para o bloco de memória de destino onde os dados serão copiados.
    * `src`: Um pointer constante para o bloco de memória de origem que contém os dados a serem copiados.  O uso de `const` indica que a função não deve modificar o conteúdo da área de origem.
    * `n`: O número de bytes a serem copiados.
2. **Atribuição dos pointers:** Os ponteiros recebidos são atribuídos a variáveis locais, `pdest` e `psrc`, para facilitar a manipulação dentro da função.  `pdest` aponta para o destino e `psrc` para a origem.
3. **Verificação de casos especiais (Otimização):**
    * Se os ponteiros de destino e origem forem iguais (`pdest == psrc`), significa que estamos a copiar dados para o mesmo local.  Neste caso, a função retorna imediatamente o pointer `pdest` sem realizar nenhuma cópia, otimizando o processo.
    * Caso ambos os ponteiros sejam nulos e 'n' seja maior que zero, a função retorna NULL.
4. **Inicialização do contador:** Uma variável de índice `i` é inicializada com 0.  Esta variável será usada para percorrer os blocos de memória byte a byte.
5. **Loop de cópia:** Um loop `while` itera 'n' vezes, copiando um byte por vez da origem para o destino:
    * Dentro do loop, `pdest[i] = psrc[i];` copia o byte na posição `i` da área de origem (`psrc`) para a posição `i` da área de destino (`pdest`).
    * O índice `i` é incrementado em cada iteração para avançar para o próximo byte.
6. **Retorno do pointer de destino:** Após completar a cópia de todos os bytes, a função retorna o pointer `pdest`, que agora aponta para o bloco de memória de destino contendo os dados copiados.  Este retorno permite que o chamador da função continue trabalhando com o bloco de memória modificado.

### memmove

*escrito por gemma 3*

> Copia 'n' bytes de um bloco de memória de origem para um bloco de memória de destino, lidando corretamente com casos em que as áreas de memória se sobrepõem.

A função `ft_memmove` é semelhante a `memcpy`, mas possui uma característica crucial: ela lida corretamente com situações onde os blocos de memória de origem e destino se sobrepõem. Isso significa que a cópia pode ser feita mesmo que a área de destino esteja dentro da área de origem. Vamos analisar o processo passo a passo:

1. **Recebimento dos parâmetros:** A função recebe três argumentos:
    * `dest`: Um pointer para o bloco de memória de destino onde os dados serão copiados.
    * `src`: Um pointer constante para o bloco de memória de origem que contém os dados a serem copiados. O uso de `const` indica que a função não deve modificar o conteúdo da área de origem.
    * `n`: O número de bytes a serem copiados.
2. **Atribuição dos ponteiros:** Os ponteiros recebidos são atribuídos a variáveis locais, `pdest` e `psrc`, para facilitar a manipulação dentro da função. `pdest` aponta para o destino e `psrc` para a origem.
3. **Verificação de casos especiais (Otimização):**
    * Se os ponteiros de destino e origem forem iguais (`pdest == psrc`), significa que estamos a copiar dados para o mesmo local. Neste caso, a função retorna imediatamente o pointer `pdest` sem realizar nenhuma cópia, otimizando o processo.
    * Caso ambos os ponteiros sejam nulos e 'n' seja maior que zero, a função retorna NULL.
4. **Inicialização do contador:** Uma variável de índice `i` é inicializada com 0. Esta variável será usada para percorrer os blocos de memória byte a byte.
5. **Determinação da direção da cópia (Lidando com sobreposição):**
    * A função verifica se o endereço de destino (`dest`) é maior que o endereço de origem (`src`).  Se for, isso indica que as áreas de memória se sobrepõem e a cópia deve ser feita de trás para frente para evitar corromper os dados.
6. **Cópia (Dependendo da direção):**
    * **Caso 1: `dest > src` (Sobreposição):**  Um loop `while` itera 'n' vezes, copiando um byte por vez da origem para o destino, começando do final dos blocos de memória e indo em direção ao início. Isso garante que os dados não sejam sobrescritos durante a cópia.
    * **Caso 2: `dest <= src` (Sem sobreposição):** Um loop `while` itera 'n' vezes, copiando um byte por vez da origem para o destino, começando do início dos blocos de memória.
7. **Retorno do pointer de destino:** Após completar a cópia de todos os bytes, a função retorna o pointer `pdest`, que agora aponta para o bloco de memória de destino contendo os dados copiados. Este retorno permite que o chamador da função continue trabalhando com o bloco de memória modificado.

### strlcpy

*escrito por gemma 3*

> Copia uma string de origem para um buffer de destino, garantindo que o buffer de destino não exceda um tamanho especificado. A função retorna o comprimento da string original, independentemente do tamanho do buffer de destino.

A função `ft_strlcpy` é projetada para copiar strings de forma segura, evitando estouros de buffer. Ela recebe um buffer de destino com um tamanho máximo e garante que a cópia não exceda esse limite. Vamos analisar o processo passo a passo:

1. **Recebimento dos parâmetros:** A função recebe três argumentos:
    * `dest`: Um pointer para o buffer de memória de destino onde a string será copiada.
    * `src`: Um pointer constante para a string de origem que será copiada. O uso de `const` indica que a função não deve modificar o conteúdo da string de origem.
    * `size`: O tamanho máximo do buffer de destino, em bytes. Este valor é crucial para evitar estouros de buffer.
2. **Inicialização das variáveis:** Duas variáveis são inicializadas:
    * `i`: Um contador usado para percorrer a string de origem e o buffer de destino durante a cópia. Inicializado com 0.
    * `length`: Uma variável que armazenará o comprimento da string de origem. Inicializada com 0.
3. **Cálculo do comprimento da string de origem:** Um loop `while` itera pela string de origem (`src`) até encontrar o carácter nulo terminador ('\0'). Em cada iteração, a variável `length` é incrementada para contar o número de caracteres na string de origem.
4. **Tratamento do caso em que o tamanho do buffer é zero:** Se o valor de `size` for 0 (zero), significa que o buffer de destino não pode receber nenhum carácter. Neste caso, a função retorna imediatamente o valor de `length`, que representa o comprimento da string original, sem tentar copiar nada para o buffer de destino.
5. **Cópia da string:** Um loop `while` itera até que um dos seguintes eventos ocorra:
    * O contador `i` atinja `size - 1`. Isso garante que no máximo `size - 1` caracteres sejam copiados para o buffer de destino, deixando espaço para o caractere nulo terminador.
    * O caractere atual na string de origem (`src[i]`) seja o caractere nulo terminador ('\0').
6. **Terminação do buffer de destino:** Após o loop de cópia, a função verifica se o tamanho do buffer de destino (`size`) é maior que o número de caracteres copiados (`i`). Se for, significa que há espaço suficiente no buffer para adicionar um caractere nulo terminador. Neste caso, `dest[i]` é definido como 0 ('\0') para garantir que a string copiada seja corretamente terminada.
7. **Retorno do comprimento da string original:** A função retorna o valor de `length`, que representa o comprimento da string original. Este valor é importante porque pode ser maior que o tamanho do buffer de destino, indicando que a string foi truncada durante a cópia.

### strlcat

*escrito por gemma 3*

> Concatena uma string de origem a um buffer de destino, garantindo que o buffer de destino não exceda um tamanho especificado. A função retorna o comprimento total da string resultante se ela puder ser completamente concatenada; caso contrário, retorna o comprimento necessário para conter a string completa.

A função `ft_strlcat` é projetada para concatenar strings de forma segura, evitando estouros de buffer. Ela recebe um buffer de destino com um tamanho máximo e garante que a concatenação não exceda esse limite. Vamos analisar o processo passo a passo:

1. **Recebimento dos parâmetros:** A função recebe três argumentos:
    * `dest`: Um pointer para o buffer de memória de destino onde a string será concatenada.
    * `src`: Um pointer constante para a string de origem que será concatenada à string no buffer de destino. O uso de `const` indica que a função não deve modificar o conteúdo da string de origem.
    * `size`: O tamanho máximo do buffer de destino, em bytes. Este valor é crucial para evitar estouros de buffer.
2. **Tratamento do caso especial: tamanho zero:** Se o valor de `size` for 0 (zero), significa que o buffer de destino não pode receber nenhum caractere adicional. Neste caso, a função retorna imediatamente o comprimento da string de origem (`src`) usando `ft_strlen(src)`, indicando que a concatenação completa exigiria mais espaço do que disponível no buffer de destino.
3. **Inicialização das variáveis:** Três variáveis são inicializadas:
    * `size_dest`: Armazena o comprimento atual da string no buffer de destino (`dest`). Obtido usando `ft_strlen(dest)`.
    * `size_src`: Armazena o comprimento da string de origem (`src`). Obtido usando `ft_strlen(src)`.
    * `i`: Um contador usado para percorrer a string de origem durante a concatenação. Inicializado com 0.
4. **Verificação de condições de erro:** A função verifica duas condições que podem levar a um estouro de buffer:
    * Se `size` for 0 (zero) ou se o comprimento atual do buffer de destino (`size_dest`) for maior ou igual ao tamanho máximo permitido (`size`). Neste caso, a concatenação completa exigiria mais espaço do que disponível no buffer de destino. A função retorna `size + size_src`, indicando o comprimento total necessário para concatenar as strings sem truncamento.
    * Se a string de origem (`src`) estiver vazia (ou seja, `!*src` é verdadeiro), não há nada para concatenar. Neste caso, a função retorna o comprimento atual do buffer de destino (`size_dest`), pois a concatenação não altera o conteúdo do buffer.
5. **Concatenação da string:** Um loop `while` itera pela string de origem (`src`) até que uma das seguintes condições seja satisfeita:
    * O caractere atual na string de origem (`src[i]`) seja o caractere nulo terminador ('\0').
    * A soma do comprimento atual do buffer de destino (`size_dest`) e o índice `i` seja igual ou maior que `size - 1`. Esta condição garante que no máximo `size - 1` caracteres da string de origem sejam copiados para o buffer de destino, deixando espaço para o caractere nulo terminador.
6. **Terminação do buffer de destino:** Após o loop de concatenação, a função adiciona um caractere nulo terminador ('\0') ao final do buffer de destino (`dest[size_dest + i] = '\0';`). Isso garante que a string concatenada seja corretamente terminada.
7. **Retorno do comprimento total:** A função retorna a soma do comprimento da string de origem (`size_src`) e o comprimento atual do buffer de destino (`size_dest`), que representa o comprimento total da string resultante se ela puder ser completamente concatenada. Se a concatenação foi truncada devido ao tamanho limitado do buffer, este valor ainda é significativo porque indica o comprimento total da string resultante sem truncamento.

### Calloc

> Aloca memoria no sistema e inicializa essa memoria com 0

## Parte 2

### Strtrim

> TRoca os Espacos em Branco de um array `char const *s1`, por um caracter especifico `*set`

### Split

Vamos destrinchar esse código em C que implementa uma função de _split_ de string, similar à função `split` que você pode encontrar em outras linguagens. Em resumo, a função `ft_split` divide uma string `s` em várias substrings (palavras) usando o caractere `c` como delimitador. Cada substring é copiada para uma nova área de memória alocada dinamicamente, e todas elas são armazenadas em um array de ponteiros que termina com um ponteiro `NULL`.

A seguir, uma explicação detalhada de cada parte do código:

---

#### 1. Contando as Substrings: `total_strings`

```c
static int	total_strings(char const *s, char c)
{
    int	i;
    int	count;

    if (!s)
        return (0);
    count = 0;
    i = 0;
    while (s[i])
    {
        while (s[i] && (s[i] == c))
            i++;
        if (s[i])
            count++;
        while (s[i] && !(s[i] == c))
            i++;
    }
    return (count);
}
```

- **Objetivo:**  
  Determinar quantas substrings (palavras) existem na string `s`, considerando que os delimitadores são caracteres iguais a `c`.

- **Como funciona:**  
  1. Se a string `s` for `NULL`, a função retorna 0, evitando processamento inválido.
  2. Usa um laço `while` para percorrer cada caractere da string:
     - **Primeiro**, pula todos os caracteres que são iguais a `c` (os delimitadores).
     - **Depois**, se encontrar um caractere diferente (ou seja, o início de uma nova palavra), incrementa o contador `count`.
     - Em seguida, continua percorrendo a sequência até encontrar novamente o delimitador, efetivamente pulando toda a palavra.
  3. Ao final, retorna o número total de palavras encontradas.

Este número é usado para alocar dinamicamente o array de ponteiros que armazenará cada palavra.

---

#### 2. Determinando o Comprimento de uma Palavra: `sep_len`

```c
static int	sep_len(char const *s, char c)
{
    int	i;

    i = 0;
    while (s[i] && !(s[i] == c))
        i++;
    return (i);
}
```

- **Objetivo:**  
  Calcular o comprimento da palavra que começa em `s`, ou seja, contar quantos caracteres existem até encontrar o delimitador `c` ou o fim da string.

- **Como funciona:**  
  Inicia um contador `i` e incrementa enquanto o caractere atual não for o delimitador e não for o caractere nulo (`\0`), retornando a quantidade de caracteres lidos.

---

#### 3. Extraindo e Alocando uma Palavra: `ft_word`

```c
static char	*ft_word(char const *s, char c)
{
    int		len_word;
    int		i;
    char	*word;

    i = 0;
    len_word = sep_len(s, c);
    word = (char *)malloc(sizeof(char) * (len_word + 1));
    if (!word)
        return (NULL);
    while (i < len_word)
    {
        word[i] = s[i];
        i++;
    }
    word[i] = '\0';
    return (word);
}
```

- **Objetivo:**  
  Criar uma nova string contendo uma cópia da palavra que começa em `s`, delimitada por `c`.

- **Como funciona:**  
  1. Calcula o comprimento da palavra usando `sep_len`.
  2. Aloca memória para a nova string com espaço para o caractere nulo (`'\0'`) final.
  3. Copia os caracteres correspondentes da palavra para o novo espaço.
  4. Adiciona o terminador nulo e retorna o ponteiro para a palavra recém-criada.

Caso a alocação falhe, retorna `NULL`.

---

#### 4. Tratamento de Erros: `free_memory`

```c
static void	*free_memory(char **strings, int i)
{
    while (i-- > 0)
        free(strings[i]);
    free(strings);
    return (NULL);
}
```

- **Objetivo:**  
  Em caso de falha na alocação de alguma palavra (ou seja, se `ft_word` retornar `NULL`), essa função libera toda a memória já alocada para evitar vazamentos.

- **Como funciona:**  
  1. Faz um laço para liberar cada palavra que foi alocada até aquele ponto.
  2. Libera o array de ponteiros `strings` e retorna `NULL` para sinalizar o erro.

---

#### 5. Função Principal: `ft_split`

```c
char	**ft_split(char const *s, char c)
{
    char	**strings;
    int		i;

    if (!s)
        return (NULL);
    i = 0;
    strings = (char **)malloc(sizeof(char *) * (total_strings(s, c) + 1));
    if (!strings)
        return (NULL);
    while (*s)
    {
        if (*s != c)
        {
            strings[i] = ft_word(s, c);
            if (strings[i++] == NULL)
                return (free_memory(strings, i));
            s += sep_len(s, c);
        }
        if (*s)
            s++;
    }
    strings[i] = NULL;
    return (strings);
}
```

- **Objetivo:**  
  Dividir a string `s` em um array de substrings usando o caractere `c` como delimitador.

- **Como funciona:**  
  1. **Validação Inicial:**  
     Se `s` for `NULL`, retorna `NULL`.  
  2. **Alocação do Array:**  
     Chama `total_strings` para determinar quantos ponteiros serão necessários.  
     Aloca memória para um array de ponteiros do tipo `char *` com tamanho igual ao número de palavras + 1 (o último elemento é `NULL` para marcar o fim do array).
  3. **Processamento da String:**  
     Percorre a string `s` enquanto não chega ao fim:
     - Se o caractere corrente não for o delimitador, significa que você encontrou uma palavra.  
       - Chama `ft_word` para extrair a palavra e armazena-a no array.
       - Incrementa o índice `i` do array.
       - Avança o ponteiro `s` usando `sep_len` para pular a palavra já processada.
     - Se estiver num delimitador, simplesmente avança o ponteiro `s` para continuar a busca.
  4. **Finalização:**  
     Após o loop, o último elemento do array é definido como `NULL`, permitindo que o usuário saiba onde termina a lista de palavras.
  5. **Retorno:**  
     Retorna o array de ponteiros para as palavras extraídas.

Em resumo, a função `ft_split` faz uma análise completa da string, ignorando os delimitadores consecutivos, extraindo as palavras e garantindo que a memória seja manipulada corretamente, inclusive tratando possíveis erros de alocação.

---

#### Informações Adicionais

- **Uso Comum:**  
  Essa implementação é típica em projetos que fazem parte da "libft", uma biblioteca de funções que muitos estudantes do 42 School e outros projetos em C utilizam como base para aprender sobre manipulação de strings e gerenciamento de memória.

- **Segurança e Robustez:**  
  Cada alocação é verificada para evitar problemas em caso de falha, e há uma função dedicada (`free_memory`) para limpar o que já foi alocado, demonstrando boas práticas em gerenciamento de memória em C.

- **Possíveis Melhorias:**  
  Em um ambiente de produção, seria interessante tratar não apenas a alocação de memória, mas também possíveis inputs inesperados, melhorando a portabilidade e a robustez do código.

Se você quiser explorar mais sobre manipulação de strings, técnicas de gerenciamento de memória em C ou implementar funções semelhantes em outros contextos, posso detalhar outros exemplos. Que tal discutir como implementar funções de alto desempenho para grandes arquivos ou explorar padrões de design para bibliotecas utilitárias?
