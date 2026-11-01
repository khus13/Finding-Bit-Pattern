#include <stdio.h>

int main() {
    char a = 67;
    int bits = sizeof(char) * 8;

    
    printf("The positive bit string of char a:\n");
    for(int i = bits - 1; i >= 0; --i){
        printf("%d", (a >> i) & 1);

        if(i % 4 == 0 && i != 0) printf(" ");
    }

    printf("\n\n");
    printf("The One's Compliment bit string of char a:\n");
    for(int i = bits - 1; i >= 0; --i){
        printf("%d", ~(a >> i) & 1);

        if(i % 4 == 0 && i != 0) printf(" ");
    }

    printf("\n\n");
    printf("The Negative bit string Equivalent of char a:\n");

    char negative = ~a + 1;

    for(int i = bits - 1; i >= 0; --i){
        printf("%d", (negative >> i) & 1);

        if(i % 4 == 0 && i != 0) printf(" ");
    }
    
}
