#include <stdio.h>
#include <stdlib.h>

int sorting_func(int inputArray[], int size);
int concatenate(int array1[], int array2[]);
int reversed(int iArray[]);

int main()
{
    int a, b, d, *sortedListA, *sortedListB, e, *listC, f, *sortedListC, g, *reverseListC, h;

    int listA[10] = {12, 29, 15, 8, 36, 6, 9, 2, 4, 7};
    printf("List A: [");
    for (a = 0; a < 9; a++){printf("%d, ", listA[a]);}
    printf("%d]\n", listA[9]);

    int listB[10] = {39, 41, 1, 3, 27, 14, 5, 11, 90, 43};
    printf("List B: [");
    for (b = 0; b < 9; b++){printf("%d, ", listB[b]);}
    printf("%d]\n", listB[9]);

    sortedListA = sorted(listA, 10);
    printf("Sorted List A: [");
    for (d=0; d < 9; d++){printf("%d, ", sortedListA[d]);}
    printf("%d]\n", sortedListA[9]);

    sortedListB = sorted(listB, 10);
    printf("Sorted List B: [");
    for (e=0; e < 9; e++){printf("%d, ", sortedListB[e]);}
    printf("%d]\n", sortedListB[9]);

    listC = concatenate(sortedListA, sortedListB);
    printf("List C: [");
    for (f=0; f < 19; f++){printf("%d, ", listC[f]);}
    printf("%d]\n", listC[19]);

    sortedListC = sorted(listC, 20);
    printf("Sorted List C: [");
    for (g=0; g < 19; g++){printf("%d, ", sortedListC[g]);}
    printf("%d]\n", sortedListC[19]);

    reverseListC = reversed(sortedListC);
    printf("Reversed List C: [");
    for (h=0; h < 19; h++){printf("%d, ", reverseListC[h]);}
    printf("%d]\n", reverseListC[19]);

    return 0;
}

int sorted(int inputArray[], int size){
    int f,c,place_holder;
    for (f=0; f < (size - 1); f++){
            for (c=0; c < size - 1 - f; c++){
                if (inputArray[c] > inputArray[c + 1]){place_holder = inputArray[c + 1];
                                                       inputArray[c + 1] = inputArray[c];
                                                       inputArray[c] = place_holder;}
            }
    }
    return inputArray;
}

int concatenate(int array1[], int array2[]){
    int x, y, z;
    static int newArray[20];
    y = 0;
    for (x=0; x < 20; x++){
        if (x >= 10){newArray[x] = array2[y]; y = y + 1;}
        else {newArray[x] = array1[x];}
    }
    return newArray;
}

int reversed(int iArray[]){
    int j, r, holder, m;
    for (j=0; j < 20; j++){
        if(j < 10){r = 19 - j;
                   holder = iArray[j];
                   iArray[j] = iArray[r];
                   iArray[r] = holder;}
    }
    return iArray;
}
