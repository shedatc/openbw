// Run: g++ keymap-test.cc ../keymap.cc && ./a.out
//
// Expected Output:
//   quit
//   pause
//   quit
//   pause
//   quit

#include <iostream>
#include "../functor.hh"
#include "../keymap.hh"

using namespace bwgame;

struct quit_functor : functor {
  void operator()() {
    std::cerr << "quit" << std::endl;
  }
};

struct pause_functor : functor {
  void operator()() {
    std::cerr << "pause" << std::endl;
  }
};

int main() {
	quit_functor  quit;
    pause_functor pause;
    keymap        km;

    km.add("quit",  quit);
    km.add("pause", pause);
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
