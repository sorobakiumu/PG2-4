#include<DxLib.h>

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
	while (ProcessMessage() == 0&&CheckHitKey(KEY_INPUT_ESCAPE)==0) {

	}
	return 1;
}