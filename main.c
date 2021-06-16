#include <stdio.h>

void somaMaximaMatriz(int nroColunas, int matriz[3][nroColunas]){
  
  int posicaoAnterior, somaMaxima = 0, primeiro = 1;
  
  for(int i = nroColunas-1; i > 0 ; i--){
    
    int max = matriz[i][0];  
    posicaoAnterior = 0;
    
    if(primeiro){
        
        for(int j = 1; j < 3; j++)
            if(matriz[i][j] > max){ 
                max = matriz[i][j];
                posicaoAnterior = j;
            }
    
        primeiro = 0;
        
    }else {
        
        int aux = (posicaoAnterior+1)%3;
        
        if(matriz[i][aux] > matriz[i][posicaoAnterior]){
            posicaoAnterior = aux;
            max = matriz[i][aux];
        }else max = matriz[i][posicaoAnterior];

    }
    
    somaMaxima += max;
      
  }
  
  printf("%d\n", somaMaxima);
  
}

int max(int valor1, int valor2, int valor3){
    
    if(valor1 > valor2 && valor1 > valor3)
        return valor1;
    else if(valor2 > valor1 && valor2 > valor3) valor3;
    else return valor2;
}

int max2(int valor1, int valor2){
    if(valor1 > valor2) return valor1;
    else return valor2;
}

int main(){
    
    int nroColunas;
    
    scanf("%d", &nroColunas);

    int matriz[3][nroColunas];
    
    for(int i = 0; i<nroColunas; i++) scanf("%d", &matriz[0][i]);
    for(int i = 0; i<nroColunas; i++) scanf("%d", &matriz[1][i]);
    for(int i = 0; i<nroColunas; i++) scanf("%d", &matriz[2][i]);
    
    somaMaximaMatriz(nroColunas, matriz);

    return 0;
}
