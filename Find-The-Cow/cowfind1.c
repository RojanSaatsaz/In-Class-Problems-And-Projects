/*(1 <= N <= 50,000) parentheses, Bessie's location can therefore be
described by a pair of indices x < y such that (( is found at position
x, and )) is found at position y. this program returns the possible
locations at which Bessie might be standing*/

//initial Solution (Not optimized!)
#include <stdio.h>
#include <string.h>
int main() {
    char input[50000] ="";
    int cow =0;
    scanf("%s", input);
    for(int i=0; i<strlen(input)-4; i++) {
        if (input[i] == '(' && input[i + 1] == '(') {
            for (int j = i + 2; j < strlen(input) - 1; j++) {
                if (input[j] == ')' && input[j + 1] == ')') {
                    cow++;
                }
            }
        }
    }
    printf("%d", cow);
    return 0;
}
