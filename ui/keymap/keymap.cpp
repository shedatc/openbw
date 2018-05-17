#include "keymap.hpp"

#include <iostream>

using namespace bwgame;

void keymap::add(functor& func, std::string funcname) {
  name_functor_bindings.insert({funcname, func}); // FIXME Should insert_or_assign here.
}

void keymap::bind(int keysym, std::string funcname) {
  auto func = lookup_by_name(funcname);
  if (func)
    key_functor_bindings.insert({ keysym, *func });
  key_name_bindings.insert({ keysym, funcname });        // FIXME Should insert_or_assign here.
}

functor* keymap::lookup_by_key(int keysym) {
  auto func = key_functor_bindings.find(keysym);
  if (func != key_functor_bindings.end())
    return &func->second;
  else
    return nullptr;
}

functor* keymap::lookup_by_name(std::string funcname) {
  auto func = name_functor_bindings.find(funcname);
  if (func != name_functor_bindings.end())
    return &func->second;
  else
    return nullptr;
}

functor& keymap::at(std::string funcname) {
  return name_functor_bindings.at(funcname);
}

bool keymap::press(int keysym) {
  functor* func = lookup_by_key(keysym);

  if (!func)
    return false; // Unbound key pressed.

  (*func)();
  return true;
}

bool keymap::match(int keysym, std::string expected_funcname) {
  auto funcname = key_name_bindings.find(keysym);
  if (funcname != key_name_bindings.end())
    return false;     // Unbound key.
  else if (funcname->second == expected_funcname)
    return true;
  else
    return false;     // Key bound but not to the expected name.
}
