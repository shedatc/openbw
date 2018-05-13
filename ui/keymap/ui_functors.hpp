#pragma once

#include "functor.hpp"

namespace bwgame {

  struct ui_functions; // See ui.h.

  struct ui_functor : public functor {

    // Constructors:
    ui_functor(ui_functions& ui);

  protected:
    ui_functions& ui;

  };

  struct quit_ui_functor : public ui_functor {

    // Constructors:
    quit_ui_functor(ui_functions& ui);

    void operator()();

  };

  struct pause_ui_functor : public ui_functor {

    // Constructors:
    pause_ui_functor(ui_functions& ui);

    void operator()();

  };

}
