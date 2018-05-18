#pragma once

#include <unordered_map>
#include <string>
#include "functor.hpp"

namespace bwgame {

  class keymap {
  public:

    // Modifiers:
    void bind_functor(functor& func, std::string funcname);
    void bind_key(int keysym,        std::string funcname);

    // Lookup:
    functor* lookup_by_key(int keysym);
    functor* lookup_by_name(std::string funcname);
    bool     match(int keysym, const std::string funcname);

    // Other:
    bool press(int keysym);

  private:
    std::unordered_map<int, functor&>         key_functor_bindings;  // key  -> functor
    std::unordered_map<std::string, functor&> name_functor_bindings; // name -> functor
    std::unordered_map<int, std::string>      key_name_bindings;     // key  -> name
  };

}
