#pragma once

#include "keymap.hpp"
#include "ui_functors.hpp"

namespace bwgame {

  struct ui_functions; // See ui.h.

  class ui_keymap : public keymap {

  public:
    ui_keymap(ui_functions& ui);

  private:
    quit_ui_functor  quit;
    pause_ui_functor pause;

  };

}
