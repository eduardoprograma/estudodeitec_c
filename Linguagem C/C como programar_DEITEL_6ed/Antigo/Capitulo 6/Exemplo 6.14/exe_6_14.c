/*Demonstrando o qualificador do tipo const*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
void tentaModificarArray(const int[]);
main(){
    int a[] = {10, 20, 30};
    tentaModificarArray(a);
    printf("%d%d%d\n", a[0], a[1], a[2]);
    system("pause");
    return 0;
}
void tentaModificarArray(const int b[]){
    b[0] /= 2; //erro
    b[1] /= 2; //erro
    b[2] /= 2; //erro
}