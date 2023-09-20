/// ExprAST - Base class for all expression nodes.
class ExprAST {
public:
  virtual ~ExprAST() = default;
};

/// NumberExprAST - Expression class for numeric literals like "1.0".
class NumberExprAST : public ExprAST {
  double Val;

public:
  NumberExprAST(double Val) : Val(Val) {}
};

/// VariableExprAST - Expression class for referencing a variable. Think "index, a" etc.
class VariableExprAST : public ExprAST {
  std::string Name;

public:
  VariableExprAST(const std::string & Name) : Name(Name) {}
};