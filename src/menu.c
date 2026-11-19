#include "menu.h"
#include "raylib.h"
#include <raygui.h>

MenuState menu_state = IN_MENU;

void create_menu(void) {
	int screen_width = GetScreenWidth();
	int screen_height = GetScreenHeight();

	const char *MENU_TITLE_TEXT = "WOODNESS";
	const int MENU_TITLE_FONTSIZE = 100;
	int text_width = MeasureText(MENU_TITLE_TEXT, MENU_TITLE_FONTSIZE);
	const int MENU_TITLE_X = (screen_width / 2) - (text_width / 2);
	const int MENU_TITLE_Y = screen_height / 2 - 100;
	const Color MENU_TITLE_COLOR = BLACK;
	DrawText(MENU_TITLE_TEXT, MENU_TITLE_X, MENU_TITLE_Y, MENU_TITLE_FONTSIZE, MENU_TITLE_COLOR);

	const int START_BUTTON_WIDTH = 400;
	const int START_BUTTON_HEIGHT = 150;
	const int START_BUTTON_X = (GetScreenWidth() / 2) - (START_BUTTON_WIDTH / 2);
	const int START_BUTTON_Y = GetScreenHeight() / 2 + 100;

	GuiSetStyle(DEFAULT, TEXT_SIZE, GuiGetFont().baseSize * 4);
	const char *START_BUTTON_TEXT = "START GAME";
	if (GuiButton((Rectangle){START_BUTTON_X, START_BUTTON_Y, START_BUTTON_WIDTH, START_BUTTON_HEIGHT}, START_BUTTON_TEXT)) {
		menu_state = START_GAME;
	}
	GuiSetStyle(DEFAULT, TEXT_SIZE, GuiGetFont().baseSize * 2);
}

bool is_in_menu(void) { return menu_state == IN_MENU; }