#include <stdio.h>
int width = 20;
char buf[4096];
void subst(char *s, char from, char to) {
    while (*s == from)
    *s++ = to;
}
int main() {
    sprintf(buf, "%0*d", width, 0);
    subst(buf, '0', '-');
    printf("%s\n", buf);
    return 0;
}