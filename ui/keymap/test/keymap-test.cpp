// Run: g++ keymap-test.cpp ../keymap.cc && ./a.out
//
// Expected Output:
//   quit
//   pause
//   quit
//   pause
//   quit

#include <iostream>
#include "../functor.hpp"
#include "../keymap.hpp"

using namespace bwgame;

struct state {

  int seqnum = 0;

};

struct stateful_functor : public functor {

  stateful_functor(state& st) : st(st) {
  }

protected:

  state st;

};

struct quit_functor : public stateful_functor {

  quit_functor(state& st) : stateful_functor(st) {
  }

  void operator()() {
    std::cerr << "quit" << std::endl;
  }

};

struct pause_functor : public stateful_functor {

  pause_functor(state& st) : stateful_functor(st) {
  }

  void operator()() {
    std::cerr << "pause" << std::endl;
  }

};

int main() {
  state st;
  st.seqnum = 21;

  quit_functor  quit(st);
  pause_functor pause(st);
  keymap        km;

  km.add(quit,  "quit");
  km.add(pause, "pause");
  km.bind('q', "quit");
  km.bind('p', "pause");
  // 'x' is unbound.

  functor* func = nullptr;

  func = km.lookup('x');
  if (func)
    (*func)();
  func = km.lookup('q');
  if (func)
    (*func)();
  func = km.lookup('p');
  if (func)
    (*func)();

  km.press('x'); // noop
  km.press('q');
  km.press('p');

  km.at("quit")();
  return 0;
}
