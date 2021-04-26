#include<DxLib.h>
#include"_debug/_DebugDispOut.h"
#include"class/Square.h"

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
	Shape* shape1 = new Square({ 100, 200 }, { 50, 50 });
	Shape* shape2 = new Shape ({ 100, 300 }, { 50, 50 });
	Shape* shape3 = new Shape ({ 100, 400 }, { 50, 50 });
	while (ProcessMessage() == 0&&CheckHitKey(KEY_INPUT_ESCAPE)==0) {
		_dbgStartDraw();

		shape1->Draw();
		((Square*)shape2)->Draw();
		shape3->Draw();

		_dbgDraw();
		ScreenFlip();
		ClsDrawScreen();
	}
	return 1;
}