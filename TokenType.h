#ifndef TOKEN_TYPE_H
#define TOKEN_TYPE_H

enum class TokenType {
    // Single character tokens
    LEFT_PAREN, RIGHT_PAREN, LEFT_BRACE, RIGHT_BRACE,
    COMMA, DOT, MINUS, PLUS, SEMICOLON, SLASH, STAR,

    // One or two character tokens
    BANG, BANG_EQUAL,
    EQUAL, EQUAL_EQUAL,
    GREATER, GREATER_EQUAL,
    LESS, LESS_EQUAL,

    // Literals
    IDENTIFIER, NUMBER,

    // Keywords
    AND, ELSE, FALSE, IF, LET, NIL, OR, TRUE, WHILE, PRINT,

    // End of file
    END_OF_FILE
};

#endif // TOKEN_TYPE_H