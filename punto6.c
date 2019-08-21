#include <stdio.h>

int main() {
    int *data = malloc(10 * sizeof(int)); 
    *(data)=10;
    free(data);
    printf("&d",*data);
    return 0;
}
