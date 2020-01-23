#include <stdio.h>
#include <stdlib.h>

char *readInfiniteString() {
    int l = 256;
    char *buf = malloc(l);
    int p = 0;
    char ch;

    ch = scanf("%[^\n]%*c",&ch);
    while(ch != '\n') {
        buf[p++] = ch;
        if (p == l) {
            l += 256;
            buf = realloc(buf, l);
        }
        ch = scanf("%[^\n]%*c",&ch);
    }
    buf[p] = '\0';

    return buf;
}

int main(int argc, char *argv[]) {
    printf("> ");
    char *buf = readInfiniteString();
    printf("%s\n", buf);
    free(buf);
}
