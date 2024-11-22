#ifndef TOKEN_H
#define TOKEN_H

#include <string>
#include "TokenType.h"

struct Token {
    TokenType type;
    const std::string& lexeme;
    int line;

    Token(TokenType type, const std::string& lexeme, int line)
        : type(type), lexeme(lexeme), line(line) {}
};

#endif // TOKEN_H
