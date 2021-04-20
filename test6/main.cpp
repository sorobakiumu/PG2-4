#include<DxLib.h>
#include"_debug/_DebugDispOut.h"
#include"class/Shape.h"

bool sysInit() {
	SetGraphMode(800, 600, 32);
	ChangeWindowMode(true);
	if (DxLib_Init() == -1)
	{
		return false;
	}
	SetDrawScreen(DX_SCREEN_BACK);
	return true;
}


int WINAPI WinMain(HINSTANCE inst, HINSTANCE prev, LPSTR, int)
{
	if (!sysInit()) {
		return 0;
	}
	int x, y,bit;
	GetScreenState(&x, &y, &bit);
	x /= 2;
	y /= 2;
	int flame = 0;
	Shape shape;
	while (ProcessMessage() == 0&&CheckHitKey(KEY_INPUT_ESCAPE)==0) {
		_dbgStartDraw();
		flame++;

		shape.Draw();
		_dbgDraw();
		ScreenFlip();
		ClsDrawScreen();
	}
	return 1;
}