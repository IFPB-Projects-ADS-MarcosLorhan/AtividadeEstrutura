#include<stdio.h>
#include<stdlib.h>

int linhaA = 2, colunaA = 3;
int linhaB = 3, colunaB = 2;

int tamanhoMat1 = 6; //tamanho min de um vetor para uma matriz 2x2.
int tamanhoMat2 = 6;

void implementarMat1( float mat1[tamanhoMat1] ) {
        printf("\nPREENCHENDO MATRIZ A %d X %d\n\n",linhaA,colunaA);
        int l,c;
        for( l = 0; l < linhaA; l++ ) {
            for( c = 0; c < colunaA; c++ ) {
                int k = l*colunaA + c;
                printf("linha: %d - coluna: %d:",l,c);
                scanf("%f", &mat1[k]);
            }
            printf("\n");
        }
}


void implementarMat2( float mat2[tamanhoMat2] ) {
        printf("\nPREENCHENDO MATRIZ B %d X %d\n\n",linhaB,colunaB);
        int l,c;
        for(l = 0; l < linhaB; l++ ) {
            for( c = 0; c < colunaB; c++ ) {
                int k = l*colunaB + c;
                printf("linha: %d - coluna: %d:",l,c);
                scanf("%f",&mat2[k]);
            }      
            printf("\n");
        }
}

void produtoMatrizes( float mat1[tamanhoMat1], float mat2[tamanhoMat2] ) {
        int lA = 0, lB = 0;
        int cA, cB = 0;
        int posA = 0, posB = 0;
        float soma = 0;        
        
        for( cA = 0; cA < tamanhoMat1/2; cA++ ) { 
            posA = lA*colunaA + cA; 
            posB = lB*colunaB + cB; 
            soma = soma + (mat1[posA])*(mat2[posB]); 
            lB = lB + 1; 
        }

        printf("%.2f ", soma);
        lA = 0;
        lB = 0; 
        cB = 1;
        soma = 0;

        for( cA = 0; cA < tamanhoMat1/2; cA++ ) {
            posA = lA*colunaA + cA;
            posB = lB*colunaB + cB;
            soma = soma + (mat1[posA])*(mat2[posB]);
            lB = lB + 1;
        }

        printf("%.2f \n", soma);
        lA = 1;
        lB = 0; 
        cB = 0;
        soma = 0;

        for( cA = 0; cA <= tamanhoMat1/2; cA++ ) {
            posA = lA*colunaA + cA;
            posB = lB*colunaB + cB;
            soma = soma + (mat1[posA])*(mat2[posB]);
            lB = lB + 1;
        }

        printf("%.2f ", soma);
        lA = 1;
        lB = 0; 
        cB = 1;
        soma = 0;

        for( cA = 0; cA <= tamanhoMat1/2; cA++ ) {
            posA = lA*colunaA + cA;
            posB = lB*colunaB + cB;
            soma = soma + (mat1[posA])*(mat2[posB]);
            lB = lB + 1;
        }
        printf("%.2f \n", soma);

}

int main (void) {
        
        tamanhoMat1 = linhaA*colunaA;
        tamanhoMat2 = linhaB*colunaB;
        
        float mat1[tamanhoMat1];
        float mat2[tamanhoMat2];
        
        implementarMat1(mat1);
        implementarMat2(mat2);
        
        printf("\nImprimindo o produto das Matrizes: \n");
        produtoMatrizes(mat1, mat2);

        return 0;
}


