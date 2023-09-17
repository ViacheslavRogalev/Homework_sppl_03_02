#include"ErrorEx.h"

ArrayException::ArrayException(std::string const& what):std::domain_error(what) {}