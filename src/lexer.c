#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "header/lexer.h"

bool isNumber(char c) {
    return (c >= '0') && (c <= '9');
}

bool isString(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int lexer (char c) {
    
    if(isNumber(c)){
        return NUMBER;
    }

    if(isString(c)){
        return STRING;
    }

    switch(c){
        case '\n':
            return EOL;

        case '+':
            return ADD;

        case '-':
            return SUBSTRACT;

        case '*':
            return MULTIPLY;

        case '/':
            return DIVIDE;
        
        case '%':
            return MODULO;

        case '=':
            return EQUAL;

        case '!':
            return NOT;
        
        case '>':
            return GREATER;
        
        case '<':
            return LESS;

        case '&':
            return AND;

        case '|':
            return OR;

        default:
            perror("Invalid character");
            return -1;

    }

}

int main(void){
    int a = lexer('@');
    printf("%d\n", a);
    return 0;
}