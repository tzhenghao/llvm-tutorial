#pragma once

#include <string>
#include <vector>

/// Represents the function "prototype".
/// Captures its name and argnames (plus # of args).
class PrototypeAST {
    std::string Name;
    std::vector<std::string> Args;
};

