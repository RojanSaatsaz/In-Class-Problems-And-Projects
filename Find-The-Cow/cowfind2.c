/*(1 <= N <= 50,000) parentheses, Bessie's location can therefore be
described by a pair of indices x < y such that (( is found at position
x, and )) is found at position y. this program returns the possible
locations at which Bessie might be standing*/

//Secondary Solution (Optamized!)
#include <stdio.h>
#include <string.h>
int main() {
    int last, input = 0;
    int x = 0;
    int cow =0;
    while ((input = getchar()) != EOF && input != '\n') {
        if (input=='(' && last=='(') {
            x++;
        }
        else if (input==')' && last==')') {
            cow+=x;
        }
        last = input;
    }
    printf("%d", cow);
    return 0;
}
