// Run: g++ functor-test.cc && ./a.out
//
// Expected Output:
//   foo
//   bar
//   foo
//   bar

#include <iostream>
#include "../functor.hh"

using namespace bwgame;

struct foo : functor {
  void operator()() {
    std::cerr << "foo" << std::endl;
  }
};

struct bar : functor {
  void operator()() {
    std::cerr << "bar" << std::endl;
  }
};

int main() {
	foo f;
    bar b;

    f();
    b();

    functor* fp;

    fp = &f;
    (*fp)();
    fp = &b;
    (*fp)();

	return 0;
}
