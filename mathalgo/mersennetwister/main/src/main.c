#include "../inc/main.h"

int main(int argc, char **argv) {
    int i;
    // uint32_t seed = time(NULL);
    uint32_t seed = 9001;
    Initialize(seed);

    for (i = 0; i < 20; i++) {
        printf("%d\n", ExtractU32() % 20);
    }
}
