#pragma once

#include <iosfwd>
#include <iostream>

namespace tools {

template <typename Map>
void print_map(const Map &m, std::ostream &os = std::cout,
               const std::string &indent = " ");

}


#include "printing_tools.hh"