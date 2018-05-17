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

  struct screen_move_ui_functions {

    screen_move_ui_functions(ui_functions& ui);
    void move_down();
    void move_up();
    void move_right();
    void move_left();

  private:
    int get_scroll_speed();

    ui_functions& ui;
  };

  struct move_screen_left_ui_functor : screen_move_ui_functions, public functor {

    // Constructors:
    move_screen_left_ui_functor(ui_functions& ui);

    void operator()();

  };
}
