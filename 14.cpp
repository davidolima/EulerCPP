#include <bits/stdc++.h>
#include <cmath>

int tamanhoCorrenteCollatz(long num){
    int tamanho_corrente = 1;

    while (num != 1){
        if (num % 2 == 0){
            num = floor(num/2);
        } else {
            num = 3 * num + 1;
        }
        tamanho_corrente++;
    }
    
    return tamanho_corrente;
}

int main (){
    int i = 1000000;
    int num_maior_corrente = 1;
    int maior_corrente = 1;
    
    while (i >= 1){
        int tamanho_corrente_atual = tamanhoCorrenteCollatz(i);
        
        if (tamanho_corrente_atual > maior_corrente){
            num_maior_corrente = i;
            maior_corrente = tamanho_corrente_atual;
        }
        
        i--;
    } 

    std::cout << num_maior_corrente << ", de tamanho " << tamanhoCorrenteCollatz(num_maior_corrente) << '\n';
    
    return 0;
}
