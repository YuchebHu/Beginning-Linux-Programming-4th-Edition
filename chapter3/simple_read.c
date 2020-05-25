#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    char buf[128];
    size_t nread = read(0, buf, 128);

    if (nread == -1) {
        write(1, "a read error has occurred!\n", 40);
    }

    if ((write(1, buf, nread)) != nread) {
        write(2, "A write error has occurred!\n", 40);
    }

    exit(0);
}
