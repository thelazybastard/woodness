#ifndef MENU_H_
#define MENU_H_

typedef enum MenuState {
	IN_MENU,
	START_GAME,
} MenuState;

MenuState menu_state = IN_MENU;

void create_menu(void);

bool is_in_menu(void);

#endif