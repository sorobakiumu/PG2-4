#include<DxLib.h>
#include<vector>
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
	std::vector<Vector2<int>> mouseOld;
	std::vector<std::vector<Vector2<int>>> drawLineList;
	mouseOld.reserve(1);
	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0) {
		_dbgStartDraw();

		angle += 0.001;

		//			倍率　拡大の中心点　座標分ずらす　角度　　色
		shape1->Draw(3.0f);
		shape1->Draw(2.0f, {-0.5,-0.5}, { 0, 0}, angle,0xffffff);
		shape1->Draw();
		shape1->Draw(0.5f, { 0.25,0.25 }, { -50, +50 }, -angle, 0xaaaaff);

		int x, y;
		GetMousePoint(&x, &y);
		if ((GetMouseInput() & MOUSE_INPUT_LEFT) != 0) {
			//mouseOld.push_back({ x-1,y-1 });
			//mouseOld.push_back({ x,y-1 });
			//mouseOld.push_back({ x+1,y-1 });
			//mouseOld.push_back({ x-1,y });
			//mouseOld.push_back({ x+1,y });
			//mouseOld.push_back({ x-1,y +1});
			//mouseOld.push_back({ x,y +1});
			//mouseOld.push_back({ x+1,y +1});

			mouseOld.push_back({ x,y });
		}

		//for (auto pos : mouseOld) {
		//	DrawPixel(pos.x, pos.y, 0xffffff);
		//}
		if (mouseOld.size() > 2) {
			for (int n = 0; n < mouseOld.size() - 1; n++) {
				DrawLine(mouseOld[n].x, mouseOld[n].y, mouseOld[n + 1].x, mouseOld[n + 1].y, 0xffffff, 5);
			}
		}


		if (CheckHitKey(KEY_INPUT_SPACE)) {
			mouseOld.clear();
		}

		_dbgDraw();
		ScreenFlip();
		ClsDrawScreen();
	}
	return 1;
}