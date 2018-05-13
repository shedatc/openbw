#include "ui_functors.hpp"
#include "../ui.h"

#include <iostream>

using namespace bwgame;

ui_functor::ui_functor(ui_functions& ui) : ui(ui) {
}

quit_ui_functor::quit_ui_functor(ui_functions& ui) : ui_functor(ui) {
}

void quit_ui_functor::operator()() {
  if (ui.exit_on_close)
    std::exit(0);
  else
    ui.window_closed = true;
}

pause_ui_functor::pause_ui_functor(ui_functions& ui) : ui_functor(ui) {
}

void pause_ui_functor::operator()() {
  ui.is_paused = !ui.is_paused;
}
