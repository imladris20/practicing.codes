#include <stdio.h>

int main(void) {
    const char *names[] = {"Justin", "Monica", "Irene"};

    for(int i = 0; i < 3; i++) {
        const char *name = names[i];
        printf("%s\n", name);
    }

    return 0;
}