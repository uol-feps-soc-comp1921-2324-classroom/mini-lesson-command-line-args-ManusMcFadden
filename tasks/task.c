#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 3){
        int sum = atoi(argv[0]) + atoi(argv[1]);
    printf("Sum: %d\n", sum);
    return 0;
    }
return 1;
}
