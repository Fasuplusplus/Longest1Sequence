//encontrar la secuencia de 1s o 0s constantes más larga en un array de longitud indefinida con un -1 como marcador de final
#include <iostream>
int longestSequence(int bit, int input[]) //el valor de bit es el número del que va a buscar la secuencia. Input es la secuencia.
{
    int partialCount = 0;
    int count = 0;
    int i = 0;
    while (input[i] != (-1)) {
        if (input[i] == bit) {
            partialCount++;
        }
        else if (partialCount > count) {
            count = partialCount;
            partialCount = 0;
        }
        else {
            partialCount = 0;
        }
        i++;
    }
    if (partialCount > count) {
        count = partialCount;
        partialCount = 0;
    }
    return count;
}
int main() {
    int input[]{1, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, -1};
    short int i = 1;
    std::cout << "La secuencia mas larga de " << i << "s es de " << (longestSequence(i, input)) << " digitos\n";
}