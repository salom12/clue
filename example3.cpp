// example3.cpp

#define clue_LOG_EXPRESSION( severity, expr ) \
    std::cout << clue::to_severity_text(severity) << ": " << expr

#include "clue.hpp"

int main()
{
    clue_LOG_NOTICE( "Hello" << " world" );
}

// cl -nologo -EHsc example3.cpp && example3
// g++ -Wall -Wextra -Weffc++ -o example3.exe example3.cpp && example3
