#include <stdio.h>

int main(void) {
    char buf[7];
    int in;
    in = scanf("%6s", buf);
    printf("in = %d",in);
    printf("buf = %6s",buf);
    return 0;
}
