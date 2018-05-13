#include "keymap.hpp"

#include <iostream>

using namespace bwgame;

void keymap::add(functor& func, std::string funcname) {
  names.insert({funcname, func}); // FIXME Should insert_or_assign here.
}

void keymap::bind(int keysym, std::string funcname) {
  bindings.insert({ keysym, at(funcname) }); // FIXME Should insert_or_assign here.
}

functor* keymap::lookup(int keysym) {
  auto func = bindings.find(keysym);
  if (func != bindings.end())
    return &func->second;
  else
    return nullptr;
}

functor& keymap::at(std::string funcname) {
  return names.at(funcname);
}

bool keymap::press(int keysym) {
  functor* func = lookup(keysym);

  if (!func)
    return false; // Unbound key pressed.

  (*func)();
  return true;
}
