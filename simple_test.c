#include <stdio.h>

int main(void) {
    char buf[7];
    int in;
    in = scanf("%6s", buf);
    if (in == EOF) {
        printf("Read nothing!");
    } 
    else {
        printf("Read %d characters.", in);
        printf("buf = %6s", buf);
    }
    return 0;
}
