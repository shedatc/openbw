#include <cstdlib>
#include <stdexcept>
#include "ui_functors.hh"

using namespace bwgame;

ui_functor::ui_functor(ui_functions& ui) : ui(ui) {
}

void quit_ui_functor::operator()() {
  // if (ui.exit_on_close)
  //   std::exit(0);
  // else
  //   ui.window_closed = true;
}
