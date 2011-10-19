#include <stdio.h>
#include <unistd.h>

int main(void) {
    char name[255];
    printf(gethostname(name, sizeof(name)));
    printf("%s\n", name);
}

