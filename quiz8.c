#include <stdio.h>
#include <stdlib.h>

void reversed(int iArray[]){
    int j, r, holder, m;
    for (j=0; j < 20; j++){
        if(j < 10){r = 19 - j;
                   holder = iArray[j];
                   iArray[j] = iArray[r];
                   iArray[r] = holder;}
    }

}

void sorted(int inputArray[], int size){
    int f,c,place_holder;
    for (f=0; f < (size - 1); f++){
            for (c=0; c < size - 1 - f; c++){
                if (inputArray[c] > inputArray[c + 1]){place_holder = inputArray[c + 1];
                                                       inputArray[c + 1] = inputArray[c];
                                                       inputArray[c] = place_holder;}
            }
    }
}


int main()
{
    int a, b, d, sortedListA[10], sortedListB[10], e, listC[20], f, sortedListC[20], g, reverseListC[20], h, o,p,r,s;

    int listA[10] = {12, 29, 15, 8, 36, 6, 9, 2, 4, 7};
    printf("List A: [");
    for (a = 0; a < 9; a++){printf("%d, ", listA[a]);}
    printf("%d]\n", listA[9]);

    int listB[10] = {39, 41, 1, 3, 27, 14, 5, 11, 90, 43};
    printf("List B: [");
    for (b = 0; b < 9; b++){printf("%d, ", listB[b]);}
    printf("%d]\n", listB[9]);

    sorted(listA, 10);
    for (o=0; o < 10; o++){sortedListA[o] = listA[o];}
    printf("Sorted List A: [");
    for (d=0; d < 9; d++){printf("%d, ", sortedListA[d]);}
    printf("%d]\n", sortedListA[9]);

    sorted(listB, 10);
    for (p=0; p < 10; p++){sortedListB[p] = listB[p];}
    printf("Sorted List B: [");
    for (e=0; e < 9; e++){printf("%d, ", sortedListB[e]);}
    printf("%d]\n", sortedListB[9]);

    int x, y = 0, z;
    for (x=0; x < 20; x++){
        if (x >= 10){listC[x] = sortedListB[y]; y = y + 1;}
    else {listC[x] = sortedListA[x];}
    }
    printf("List C: [");
    for (f=0; f < 19; f++){printf("%d, ", listC[f]);}
    printf("%d]\n", listC[19]);

    sorted(listC, 20);
    for (r=0; r < 20; r++){sortedListC[r] = listC[r];}
    printf("Sorted List C: [");
    for (g=0; g < 19; g++){printf("%d, ", sortedListC[g]);}
    printf("%d]\n", sortedListC[19]);

    reversed(sortedListC);
    for (s=0; s < 20; s++){reverseListC[s] = sortedListC[s];}
    printf("Reversed List C: [");
    for (h=0; h < 19; h++){printf("%d, ", reverseListC[h]);}
    printf("%d]\n", reverseListC[19]);

    return 0;
}
