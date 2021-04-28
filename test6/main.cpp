#include<DxLib.h>
#include<vector>
#include<tuple>
#include"Illust.h"
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
	Square* shape1 = new Square({ 400.0, 300.0 }, { 50, 50 });

	float angle = 0;

	Illust::Instance().Init();
	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0) {
		_dbgStartDraw();

		angle += 0.001;

		//			倍率　拡大の中心点　座標分ずらす　角度　　色
		shape1->Draw(3.0f);
		shape1->Draw(2.0f, {-0.5,-0.5}, { 0, 0}, angle,0xffffff);
		shape1->Draw();
		shape1->Draw(0.5f, { 0.25,0.25 }, { -50, +50 }, -angle, 0xaaaaff);


		Illust::Instance().run();
		_dbgDraw();
		ScreenFlip();
		ClsDrawScreen();
	}
	return 1;
}