/*Alocação dinamica */
#include<stdio.h>
#include<stdlib.h>
/*

%p usado, para printar endereço de memoria.


int main(void){
    int x = 3;
    int *p;
    p = malloc (sizeof(int));
    scanf("%d",p);
    printf("Leitura inicial: %d\n",*p);
    *p = x + 1;
    printf("Soma de X: %d\n",*p);
    printf("X = %p\n P = %p\n Alocado = %p\n",&x,&p,p);
    free(p); //libera espaço na memoria; 
    return 0;
}
*/


/* 
int main(void){
    int a=4, b=5,c;
    int *p = &a, *p2 = &b, *p3 = &c;
    *p3 = *p * *p2;
    printf("c = %d\n",*p3);
    return 0;
}
*/
/* 
int main(void){
    int n,i;
    printf("quantos Num ?");
    scanf("%d", &n);
    float *v = malloc(sizeof(float)*n);
    for(i=0;i<n;i++){
        printf("V[%d] = ",i);
        scanf("%f",v+i);
    }
    for(i=0;i<n;i++){
        printf("v[%d](%p) = %.1f\n",i,&v[i],v[i]);
    }
    free(v);
    return 0;
}
*/

int main(void){
    int *p,i;
    int v[5];
    int *v2[3]; //utiliza de endereço de memoria, para que seja feito o armazenamento.
    for(i=0;i<3;i++){
        v2[i] = malloc(sizeof(int)*3); //criando um numero de colunas baseado em um vetor de ponteiros (matris).

    }
    int j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("M[%d,%d]",i,j);
            scanf("%d",&v2[i][j]);
        }
    }

    for (i=0;i<3;i++){
        for (i=0;i<3;i++){
            printf("%d",v2[i][j]); //*(v2+i)+j
        }
        printf("\n");
    }

    for(i=0;i<3;i++){
        free(v2[i]);
    }
    
}