#include <stdio.h>
#include <stdlib.h>

int main() {
    int u, o;

        for (u = 1; u <= 9; u++){
        printf("Tabuada do %d:\n", u);

            for (o = 1; o <= 10; o++){
            printf("%d x %d = %d\n", u, o, u * o);

        }
        printf("\n");

    }
return 0;
}

