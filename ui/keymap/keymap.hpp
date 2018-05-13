#pragma once

#include <unordered_map>
#include <string>
#include "functor.hpp"

namespace bwgame {

    class keymap {
    public:

        // Modifiers:
        void add(functor& func, std::string funcname);
        void bind(int keysym,   std::string funcname);

        // Lookup:
        functor* lookup(int keysym);
        functor& at(std::string funcname);

        // Other:
        bool press(int keysym);

    private:
        std::unordered_map<int, functor&>         bindings;
        std::unordered_map<std::string, functor&> names;
    };

}
