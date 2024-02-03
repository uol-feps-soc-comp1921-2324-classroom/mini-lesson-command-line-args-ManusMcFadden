#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 3){
        printf("Usage: %s <number1> <number2>\n", argv[0]);
        return 0;
    }
    int sum = atoi(argv[1]) + atoi(argv[2]);
    printf("Sum: %d\n", sum);
    return 0;
}
