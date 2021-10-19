#include <iostream>
#include <time.h>
#define TAM 100

using namespace std;

void vetorBubble(){

    srand(time(NULL));

    int vet[TAM], i, j, aux;

    cout << "Criando o vetor: ";
    for(i = 0; i < TAM; i++){
        vet[i] = rand() % 100;
        cout << vet[i] << " | ";
    }
    for(i = 0; i < TAM ; i++){
        for(j = 0; j < TAM -i; j++){
            if(vet[j] > vet[j + 1]){
                aux = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = aux;
            }
        }
    }
    cout << endl << endl;
    cout << "Vetor Ordenado: ";
    for(i = 0; i < TAM; i++){
        cout << vet[i] << " | ";
    }
}
int main(){

    vetorBubble();
}
