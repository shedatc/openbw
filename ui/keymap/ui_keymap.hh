#ifndef UI_KEYMAP_H
#define UI_KEYMAP_H

#include "keymap.hh"
// #include "ui.h"
#include "ui_functors.hh"

namespace bwgame {

  struct ui_functions; // See ui.h.

  class ui_keymap : public keymap {

  public:
    ui_keymap(ui_functions& ui);

  private:
    quit_ui_functor quit;

  };

}

#endif // UI_KEYMAP_H
