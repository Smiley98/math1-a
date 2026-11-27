#include <raylib.h>
#include <raymath.h>
#include <rcamera.h>

int main()
{
	InitWindow(768, 768, "Math");

	Camera camera;
	camera.position = { 4.0f, 6.0f, 8.0f };
	camera.target = Vector3Zeros;
	camera.up = Vector3UnitY;
	camera.fovy = 90.0f;
	camera.projection = CAMERA_PERSPECTIVE;

	while (!WindowShouldClose())
	{
		BeginDrawing();
			ClearBackground(WHITE);
			BeginMode3D(camera);

			DrawGrid(10, 10);
			DrawCube(Vector3Zeros, 1.0f, 1.0f, 1.0f, BLUE);

			EndMode3D();
		EndDrawing();
	}

	CloseWindow();
	return 0;
}
