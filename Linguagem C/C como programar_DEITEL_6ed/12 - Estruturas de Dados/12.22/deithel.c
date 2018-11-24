/*(Eliminação de árvore binaria) Neste exercício, analisaremos a eliminação de itens de árvores de pesquisa binárias. O algoritmo de eliminação não é tão simples quanto o algoritmo de inserção. Há três casos que acontecem durante a eliminação de um item — o item está contido em um nó folha (i.e., não possui filhos), o item está contido em um nó que tem um filho ou o item está contido em um nó que tem dois filhos.
Se o item a ser removido estiver contido em um nó folha, o nó é eliminado e o ponteiro do nó pai é definido como NULL.
Se o item a ser removido estiver contido em um nó com um filho, o ponteiro no nó pai é definido para apontar para o nó filho, e o nó contendo o dado é eliminado. Isso faz com que o nó filho ocupe o lugar do nó eliminado na árvore.
O último caso é o mais difícil. Quando um nó com dois filhos é removido, outro nó da árvore deve tomar seu lugar. Entretanto, não se pode fazer simplesmente com que o ponteiro no nó pai aponte para um dos filhos do nó a ser eliminado. Na maioria dos casos, a árvore de pesquisa binaria resultante não respeitaria a seguinte característica das árvores de pesquisa binárias: Os valores em qualquer subárvore esquerda são menores que o valor no nó pai, e os valores em qualquer subárvore direita são maiores que o valor no nó pai.
Que nó é usado como nó de substituição para conservar essa característica?
Tanto o nó que contém o maior valor na árvore, menor do que o valor no nó que está sendo removido, como o nó que contém o menor valor na árvore, maior do que o valor no nó que está sendo removido. Vamos examinar o nó com o menor valor. Em uma árvore binaria, o maior valor, menor do que o valor de um nó pai, está localizado na subárvore esquerda do nó pai e certamente estará contido no nó situado na extremidade direita da subárvore. Esse nó é localizado percorrendo pela direita a subárvore da esquerda até que o ponteiro para o filho da direita do nó atual seja NULL. Agora estamos apontando para o nó de substituição que tanto é um nó folha como um nó com um filho à sua esquerda. Se o nó de substituição for um nó folha, os passos para realizar a eliminação são os seguintes:
    1) Armazene o ponteiro para o nó a ser removido em uma variável ponteiro temporária (esse ponteiro é usado para liberar a memória alocada dinamicamente). 
    2) Defina o ponteiro no pai do nó a ser removido para apontar para o nó de substituição. 
    3) Defina o ponteiro no pai do nó de substituição como NULL. 
    4) Defina o ponteiro para a subárvore direita no nó de substituição para apontar para a subárvore direita do nó a ser removido. 
    5) Elimine o nó para o qual a variável ponteiro temporária aponta.
Os passos para eliminação de um nó de substituição com um filho à esquerda são similares aos de um nó de substituição sem filhos, mas o algoritmo também deve mover o filho para a posição do nó de substituição na árvore. Se o nó de substituição for um nó com um filho à esquerda, os passos para realizar a eliminação são os seguintes:
    1) Armazene o ponteiro para o nó a ser removido em uma variável ponteiro temporária. 
    2) Defina o ponteiro no pai do nó a ser removido para apontar para o nó de substituição. 
    3) Defina o ponteiro no pai do nó de substituição para apontar para o filho à esquerda do nó de substituição. 
    4) Defina o ponteiro para a subárvore direita no nó de substituição para apontar para a subárvore direita do nó a ser removido. 
    5) Elimine o nó para o qual a variável ponteiro temporária aponta.
Escreva a função eliminaNo que utiliza como argumentos um ponteiro para o nó raiz da árvore e o valor a ser eliminado. A função deve localizar na árvore o nó que contém o valor a ser eliminado e usar os algoritmos analisados aqui para eliminar o nó. Se o valor não for encontrado na árvore, a função deve imprimir uma mensagem que indique se o valor foi eliminado ou não. Modifique o programa da Fig. 12.19 para usar essa função. Depois de eliminar um item, chame as funções de percurso inOrder, preOrder e postorder para confirmar que a operação de eliminação foi realizada corretamente.*/