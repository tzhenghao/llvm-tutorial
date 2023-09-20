#pragma once

#include <string>
#include <vector>

/// Represents the function "prototype".
/// Captures its name and argnames (plus # of args).
class PrototypeAST {
  std::string Name;
  std::vector<std::string> Args;

public:
  PrototypeAST(const std::string &Name, std::vector<std::string> Args)
      : Name(Name), Args(std::move(Args)) {}

  const std::string &getName() const { return Name; }
};
