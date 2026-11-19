#include <raylib.h>
#define RAYGUI_IMPLEMENTATION

#define SCREEN_WIDTH GetScreenWidth()
#define SCREEN_HEIGHT GetScreenHeight()

int main(void) {
	InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Woodness");

	// INITIALIZE START

	// INITIALIZE END

	SetTargetFPS(60);

	while (!WindowShouldClose()) {
		// UPDATE START

		// UPDATE END
		BeginDrawing();

		ClearBackground(WHITE);

		// DRAW START

		// DRAW END

		EndDrawing();
	}

	CloseWindow();

	return 0;
}