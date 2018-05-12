#ifndef UI_FUNCTORS_HH
#define UI_FUNCTORS_HH

#include "functor.hh"

namespace bwgame {

  struct ui_functions; // See ui.h.

  struct ui_functor : public functor {

    // Constructors:
    ui_functor(ui_functions& ui);

  protected:
    ui_functions& ui;

  };

  struct quit_ui_functor : public ui_functor {

    void operator()();

  };

}

#endif // UI_FUNCTORS_HH
