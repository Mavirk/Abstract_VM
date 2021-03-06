#include "exception.hpp"

Exception::Exception(std::string const& msg): std::exception(){
    _msg = msg;
    _type = "";
}

Exception::~Exception() throw() {}

const char *Exception::what() const throw() {
    return (_type + _msg).data();
}

LexParseError::LexParseError(std::string const& msg) :Exception(msg) {
    _type = "Lex/Parse Error : ";
}
UnknownInstruction::UnknownInstruction(std::string const& msg) :Exception(msg) {
    _type = "Unknown Instruction Error : ";
}
UnderOverFlow::UnderOverFlow(std::string const& msg) :Exception(msg) {
    _type = "Underflow Or Overflow Error : ";
}
StackError::StackError(std::string const& msg) :Exception(msg) {
    _type = "Stack Error : ";
}
LogicalError::LogicalError(std::string const& msg) :Exception(msg) {
    _type = "Logical Error : ";
}
InputError::InputError(std::string const& msg) :Exception(msg) {
    _type = "Input Error : ";
}
NoExit::NoExit(std::string const& msg) :Exception(msg) {
    _type = "Exit Error : ";
}
AssertFalse::AssertFalse(std::string const& msg) :Exception(msg) {
    _type = "Assert Error : ";
}
MathError::MathError(std::string const& msg) :Exception(msg) {
    _type = "Math Error : ";
}