#include <stdio.h>

void sortArrayOfInt (int *liste, int size);
void printArrayOfInt (int *liste, int size);
int main (){
    int liste[] = {3, 6, 5, 4, 12, -3};
    int size = sizeof(liste) / sizeof(liste[0]);
    sortArrayOfInt(liste, size);
    printArrayOfInt(liste, size);
    
    

}

void sortArrayOfInt (int *liste, int size) {

    for(int i = 0; i < size; i++){
        int currentNumber = liste[i];
        for(int j = i + 1; j <  size; j++){
            printf("%d - %d\n", liste[i], liste[j]);
            if (currentNumber < liste[j]){
                liste[i] = liste[j];
                liste[j] = currentNumber;
                currentNumber = liste[i];
            }
        }
    }
}

void printArrayOfInt (int *liste, int size){
    for (int i = 0; i <  size; i++){
        printf("%d \n", liste[i]);
    }
}