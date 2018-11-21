/*(Classificação de Depósitos) Uma classificação de depósitos começa com um array unidimensional de inteiros positivos a ser classificado e um array bidimensional de inteiros com linhas possuindo subscritos de 0 a 9 e colunas com subscritos de 0 a n 1, onde n é o número de valores do array a ser classificado. Cada linha do array bidimensional é chamada um depósito (bucket). Escreva uma função bucketClass que utilize um array inteiro e o tamanho do array como argumentos. O algoritmo é o seguinte: 
1) Faça um loop pelo array unidimensional e coloque cada um de seus valores em uma linha do array de depósitos, baseado nos dígitos na casa das unidades. Por exemplo, 97 é colocado na linha 7. 3 é colocado na linha 3 e 100 é colocado na linha 0. 
2) Faça um loop pelo array de depósitos e copie os valores de volta para o array original. A próxima ordem dos valores acima no array unidimensional será 100, 3 e 97. 
3) Repita esse processo para posição subseqüente dos dígitos (dezenas, centenas, milhares etc.) e pare quando o dígito da extremidade esquerda do maior número for processado. Na segunda passada do array, 100 é colocado na linha 0, 3 é colocado na linha 0 (possui apenas um dígito) e 97 é colocado na linha 9. A ordem dos valores no array unidimensional é 100, 3 e 97. Na terceira passada, 100 é colocado na linha 1, 3 é colocado na linha zero e 97 é colocado na linha zero (depois do 3). A classificação de depósito garante a colocação de todos os valores em uma ordem apropriada após o processamento do dígito mais à esquerda do maior número. A classificação de depósito sabe que chegou ao fim quando todos os valores forem copiados na linha zero do array bidimensional. Observe que o array bidimensional de depósitos é dez vezes maior que o tamanho do array inteiro a ser ordenado. Essa técnica de ordenação (classificação) fornece um desempenho melhor do que a classificação de bolhas, mas exige capacidade de armazenamento muito maior. A classificação de bolhas exige apenas um local adicional na memória para o tipo de dados a ser classificado. A classificação de depósitos é um exemplo de troca de espaço por tempo. Ela usa mais memória, mas tem melhor desempenho. Essa versão de classificação de depósitos exige a cópia de todos os dados novamente no array original ao fim de cada passada. Outra possibilidade é criar um segundo array bidimensional de depósitos e mover repetidamente os dados entre os dois arrays de depósitos até que todos os dados estejam copiados na linha zero de um dos arrays. A linha zero conterá então o array ordenado.*/