# Split Explicado

## ft_split

1. Se o array original que recebemos for vazio, sai do codigo
2. Criamos um array de arrays, que sera tamanho array vezes todas as palavras + 1
3. Se o array de arrays, for falso, entao sai do codigo
4. Enquanto o array original for verdade
	1. Enquanto o array original && array original estiver no caracter recebido
		1. entao, anda o array original para a frente
	2. Se o array for verdadeiro
		1. Entao, o array de arrays e igual as palavras do array original
		2. Se o array de arrays, na posicao atual for falso, entao,
			1. Devolve o array de arrays totalmente limpo
		3. Avanca o array de arrays mais um
		4. O array original e ele mesmo + tamanho de separadores
5. No final, coloca um nulo no array de arrays, na posicao final
6. Devolve o array de arrays

## ft_total_words

1. Recebemos o array de arrays e o char c
2. Criamos uma variavel, que ira contar as palavras
3. Se o array recebido for falso, retorna 0 palavras
4. Enquanto o array for verdadeiro
	1. Enquanto, na posicao atual for igual ao char c
		1. Anda para a frente
	2. Se o array for verdadeiro
		1. Incrementa a palavra em um
	3. Enquanto a posicao atual nao for o char c e o array for verdadeiro
		1. Anda para a frente
5. Retorna o numero de palavras

## ft_create_array_of_word

1. Recebo a string original e o char c
2. Crio uma variavel para armazenar o tamanho de uma palavra

