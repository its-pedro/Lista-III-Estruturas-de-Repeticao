#include <stdio.h>

int main (){
    int i, j;
    for(i = 1, j = 60; j >= 0, i <= 37; j = j - 5, i = i + 3){
        printf("I=%d J=%d\n", i, j);
    }
    return 0;
}
