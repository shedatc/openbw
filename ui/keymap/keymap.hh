#ifndef KEYMAP_HH
#define KEYMAP_HH

#include <unordered_map>
#include <string>
#include "functor.hh"

namespace bwgame {

    class keymap {
    public:

        // Modifiers:
        void add(std::string funcname, functor& func);
        void bind(int keysym, std::string funcname);

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

#endif // KEYMAP_HH
