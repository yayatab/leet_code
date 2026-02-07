#include "tools/printing_tools.h"

namespace tools {
template <typename Map>
void print_map(const Map &m, std::ostream &os, const std::string &indent) {
  os << "{\n";
  for (auto it = m.begin(); it != m.end(); ++it) {
    os << indent << it->first << ": [" << it->second << "]";
    if (std::next(it) != m.end())
      os << ",";
    os << "\n";
  }
  os << "}\n";
}

} // namespace tools
