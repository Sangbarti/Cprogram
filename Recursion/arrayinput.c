#include <stdio.h>
#include <stdlib.h>
void getss(int*, int);
int main(){
    int *array;
    int i, size;

    printf("input array size:");
    scanf("%d", &size);
    array = (int*)malloc(sizeof(int)*size);
    getss(array, size);
    for(i=0;i<size;i++){
        printf("array[%d]=%d\n", i, array[i]);
    }
    return 0;
}

void getss(int* array, int size){
    if (size == 0)
        return;
    scanf("%d", array);
    getss(++array, size - 1);
}

