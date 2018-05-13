#include "ui_keymap.hpp"

using namespace bwgame;

ui_keymap::ui_keymap(ui_functions& ui) : quit(ui), pause(ui) {
  // quit
  add(quit,  "quit");
  bind('q',  "quit");
  bind('\e', "quit");

  // pause
  add(pause, "pause");
  bind('p',  "pause");
  bind(' ',  "pause");
}
