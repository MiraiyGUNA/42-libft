## Parte 1

### isalpha

> Verifica se o caractere é uma letra do alfabeto (A–Z ou a–z). 

1. Se for entre a && z || entre A && Z
	1. Devolve 1
2. Se nao, devolve 0

### isdigit
 
> Verifica se o caractere é um dígito numérico (0–9).


### isalnum
 
> Verifica se o caractere é alfanumérico, ou seja, se é letra ou número.

### isascii
 
> Verifica se o caractere está dentro do intervalo ASCII (de 0 a 127).

### isprint
 
> Verifica se o caractere é imprimível (no intervalo 32 a 126).

### strlen
 
> Calcula o comprimento de uma string (contando os caracteres até o terminador nulo `\0`).

### memset
 
> Preenche os primeiros `n` bytes de uma área de memória com um determinado valor.

1. Recebo um array `p`, um `value` e um tamanho `n`


### bzero
 
> Zera os primeiros `n` bytes de uma área de memória (equivalente a um memset com valor 0).

### memcpy
 
> Copia `n` bytes da área de memória apontada por `src` para a área apontada por `dest`, retornando `dest`.

### memmove
 
> Move `n` bytes da área de memória apontada por `src` para a área apontada por `dest`, considerando sobreposições, e retorna `dest`.

### strlcpy
 
> Copia até `size - 1` caracteres de `src` para `dest`, garantindo que `dest` seja nulo terminado, e retorna o comprimento total (length) de `src`.
>
> Copia uma string para uma nova, terminando sempre em nulo e retorna o tamanho da string criada

### strlcat
 
> Concatena `src` ao final de `dest`, garantindo a terminação nula, utilizando no máximo `size` caracteres em `dest` (incluindo o terminador) e retorna o comprimento total que a string concatenada teria se não houvesse restrição de tamanho.

### toupper
 
> Converte um caractere minúsculo para maiúsculo, se aplicável. Caso o caractere já esteja em maiúsculo ou não seja uma letra, retorna-o inalterado.

### tolower
 
> Converte um caractere maiúsculo para minúsculo, se aplicável.

### strchr
 
> Retorna um ponteiro para a primeira ocorrência de um caractere específico em uma string ou `NULL` se não encontrado.

### strrchr
 
> Retorna um ponteiro para a última ocorrência de um caractere específico em uma string ou `NULL` se não encontrado.

### strncmp
 
> Compara até `n` caracteres de duas strings e retorna a diferença entre o primeiro par de caracteres que não coincidem (ou zero se forem iguais).

### memchr
 
> Procura a primeira ocorrência de um valor dentro de um bloco de memória (nos primeiros `n` bytes) e retorna um ponteiro para essa posição, ou `NULL` se não encontrado.

### memcmp
 
> Compara os `n` primeiros bytes de dois blocos de memória e retorna um valor inteiro que representa a diferença entre os bytes na primeira posição em que eles diferem.

### strnstr
 
> Procura a primeira ocorrência de uma substring dentro dos `n` primeiros caracteres de uma string e retorna um ponteiro para essa posição ou `NULL` se a substring não for encontrada.

### atoi
 
> Converte uma string numérica em um número inteiro, considerando sinais e espaços iniciais.

### calloc
 
> Aloca memória para um array de elementos, inicializando todos com zero. Recebe como parâmetros o número de elementos e o tamanho de cada elemento.

### strdup
 
> Cria uma string duplicada de uma recebida, alocando memória para a nova string e retornando um ponteiro para ela.

---

## Parte 2

### substr
 
> Extrai uma substring a partir de uma string original, dada a posição inicial e o comprimento desejado, retornando uma nova string alocada.

### strjoin
 
> Concatena duas strings, alocando memória para a nova string resultante que contém ambas as strings unidas.

### strtrim
 
> Remove os caracteres presentes em um conjunto (`set`) do início e do fim de uma string, retornando uma nova string sem esses caracteres.

### split
 
> Separa uma string em um array de strings com base em um caractere delimitador.

1. `**ft_split` que recebe uma string `*s` e um char `c`
2. Alocar o numero de arrays certos, dentro do array de arrays
	1. Para isso, fazemos malloc, com o tamanho de um array * `ft_total_strings` + 1
	2. Fazemos mais um, para colocar o `\0`
3. `ft_total_strings` ira contar quantas possiveis "palavras" existem no array
	1. Para tal efeito, criamos uma variavel `count` para ser devolvida, que ira ter dentro dela o numero de palavras
	2. Percorremos a string inteira, com `while (s[i])`
		1. Dentro do while, fazemos 3 checks
			1. Percorremos as posicoes iniciais iguais a `c`
			2. Depois de "limpo", incrementamos o count com um if (if so corre uma vez)
			3. Depois de incrementando, percorremos a string com outro while, para sair da "palavra", ao colocar na condicao `!s[i] == c`
		2. Desta forma, cada um destes 3, e executado cada um na sua vez, sem overlap
			1. O primeiro While passa a frente os `c`
			2. O if incrementa o count em 1
			3. O segundo While, vai ate ao proximo `c`
	3. No final, temos o numero de "palavras" que sera usado para gerar o array de arrays final
4. Atualmente, temos dois arrays.
	1. Um que e o array original `*s` e um outro que e o array de arrays `strings`
5. Percorremos o array original `*s`
	1. Enquanto percorremos o array original, temos dois checks.
		1. Um check no comeco que verifica se o espaco atual nao e igual a `c`
		2. Um check para passar a frente
	2. Se na posicao atual, nao for igual a `c`, entao
		1. Na posicao atual de `strings` e igual a `ft_words`
	

### itoa
 
> Converte um número inteiro em sua representação como string (array de `char`).

### strmapi
 
> Aplica uma função `f` a cada caractere de uma string (passando o índice e o caractere atual) e cria uma nova string com os valores retornados por `f`.

### striteri
 
> Aplica uma função `f` a cada caractere de uma string, modificando-a. A função recebe o índice e o ponteiro para o caractere, permitindo alterações diretas.

### putchar_fd
 
> Escreve um caractere no file descriptor especificado (por exemplo, 1 para o terminal).

### putstr_fd
 
> Escreve uma string no file descriptor especificado.

### putendl_fd
 
> Escreve uma string no file descriptor indicado e, em seguida, insere uma nova linha.

### putnbr_fd
 
> Escreve um número inteiro no file descriptor especificado.
