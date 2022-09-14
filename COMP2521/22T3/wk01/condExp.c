#include <stdio.h>

int main(void) {
    int ch = getchar();

    char *type;

    // if (isdigit(ch)) {
    //     type = "digit";
    // } else {
    //     type = "non-digit";
    // }
    
    // TODO: turn the above into a conditional expression

    type = isdigit(ch) ? "digit" : "non-digit";

    printf("'%c' is a %s\n", ch, type);
}