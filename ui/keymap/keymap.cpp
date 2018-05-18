#include "keymap.hpp"

#include <iostream>

using namespace bwgame;

void keymap::bind_functor(functor& func, std::string funcname) {
  name_functor_bindings.insert({ funcname, func }); // TODO Use insert_or_assign?
}

void keymap::bind_key(int keysym, std::string funcname) {
  functor* func = lookup_by_name(funcname);
  if (func != nullptr) {
    key_functor_bindings.insert({  keysym, *func }); // TODO Use insert_or_assign?
  }
  key_name_bindings.insert({ keysym, funcname }); // TODO Use insert_or_assign?
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

bool keymap::press(int keysym) {
  functor* func = lookup_by_key(keysym);

  if (!func)
    return false; // Unbound key pressed.

  (*func)();
  return true;
}

bool keymap::match(int keysym, const std::string expected_funcname) {
  auto funcname = key_name_bindings.find(keysym);
  if (funcname != key_name_bindings.end())
    return false;                                       // Unbound key.
  else if (funcname->second == expected_funcname) // FIXME SEGV
    return true;
  else
    return false;                                       // Key bound but not to the expected name.
}
