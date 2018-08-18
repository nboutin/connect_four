
#pragma once

#include <string>

#include "token.h"

namespace p4
{
class Player
{
    friend bool operator==(const Player& lhs, const Player& rhs);

public:
    Player(const std::string& name, Token::color_e color);
    Player(const Player& p);
    Player& operator=(const Player& p);

    Token::color_e get_color() const { return color; }
    std::string get_name() const { return name; }

private:
    std::string name;
    Token::color_e color;
};

inline bool operator==(const Player& lhs, const Player& rhs)
{
    return ((lhs.name == rhs.name) && (lhs.color == rhs.color));
}
}