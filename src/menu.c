#include "menu.h"
#include "raylib.h"
#include <raygui.h>

void create_menu(void) {
	int screen_width = GetScreenWidth();
	int screen_height = GetScreenHeight();

	const int MENU_TITLE_X = screen_width / 2;
	const int MENU_TITLE_Y = screen_height / 2;
	const char *MENU_TITLE_TEXT = "WOODNESS";
	const int MENU_TITLE_FONTSIZE = 50;
	const Color MENU_TITLE_COLOR = BLACK;
	DrawText(MENU_TITLE_TEXT, MENU_TITLE_X, MENU_TITLE_Y, MENU_TITLE_FONTSIZE, MENU_TITLE_COLOR);

	const int START_BUTTON_X = GetScreenWidth() / 2;
	const int START_BUTTON_Y = GetScreenHeight() / 2;
	const int START_BUTTON_WIDTH = 200;
	const int START_BUTTON_HEIGHT = 100;
	const char *START_BUTTON_TEXT = "START GAME";
	if (GuiButton((Rectangle){START_BUTTON_X, START_BUTTON_Y, START_BUTTON_WIDTH, START_BUTTON_HEIGHT}, START_BUTTON_TEXT)) {
		menu_state = START_GAME;
	}
}

bool is_in_menu(void) { return menu_state == IN_MENU; }