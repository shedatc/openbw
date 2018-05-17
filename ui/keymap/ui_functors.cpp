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

screen_move_ui_functions::screen_move_ui_functions(ui_functions& ui) : ui(ui) {
}

int screen_move_ui_functions::get_scroll_speed() {
  std::array<int, 6> scroll_speeds = {2, 2, 4, 6, 6, 8};
  return scroll_speeds[ui.scroll_speed_n];
}

void screen_move_ui_functions::move_down() {
  ui.screen_pos.y += get_scroll_speed();
}

void screen_move_ui_functions::move_up() {
  ui.screen_pos.y -= get_scroll_speed();
}
void screen_move_ui_functions::move_right() {
  ui.screen_pos.x += get_scroll_speed();
}
void screen_move_ui_functions::move_left() {
  ui.screen_pos.x -= get_scroll_speed();
}
