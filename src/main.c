#include <raylib.h>
#define RAYGUI_IMPLEMENTATION

#define SCREEN_WIDTH GetScreenWidth()
#define SCREEN_HEIGHT GetScreenHeight()

typedef enum GameState {
	MENU,
	CUTSCENE,
	REGULAR_LEVEL,
	BOSS_FIGHT,
} GameState;

int main(void) {
	InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Woodness");

	// INITIALIZE START

	GameState game_state = MENU;

	// INITIALIZE END

	SetTargetFPS(60);

	while (!WindowShouldClose()) {
		// UPDATE START

		switch (game_state) {
		case MENU:
		case CUTSCENE:
			break;
		case REGULAR_LEVEL:
			break;
		case BOSS_FIGHT:
			break;
		}

		// UPDATE END
		BeginDrawing();

		ClearBackground(WHITE);

		// DRAW START

		switch (game_state) {
		case MENU:
		case CUTSCENE:
			break;
		case REGULAR_LEVEL:
			break;
		case BOSS_FIGHT:
			break;
		}

		// DRAW END

		EndDrawing();
	}

	CloseWindow();

	return 0;
}