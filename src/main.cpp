// OTUS C++ Basic course homework skeleton.
// Lexer using example

#include <iostream>

#include "lexer.hpp"

int main() {
    using namespace std;
    using Token = Lexer::Token;

    Lexer lexer(cin);
    for (;;) {
        switch (lexer.next_token()) {
        case Token::Number:
            cout << "Number: " << lexer.get_number() << '\n';
            break;
        case Token::Operator:
            cout << "Operator: " << lexer.get_operator() << '\n';
            break;
        case Token::Lbrace:
            cout << "Lbrace\n";
            break;
        case Token::Rbrace:
            cout << "Rbrace\n";
            break;
        case Token::Name:
            cout << "Name: " << lexer.get_name() << '\n';
            break;
        case Token::End:
            return EXIT_SUCCESS;
        }
    }
}
