#include<DxLib.h>
#include "Illust.h"


void Illust::run()
{
	color += GetMouseWheelRotVol() * 1000000;

	int x, y;
	GetMousePoint(&x, &y);

	//‹Èü‚Ìˆ—
	if ((GetMouseInput() & MOUSE_INPUT_LEFT) != 0) {
		leftnow = true;
		freeDraw.push_back({ Vector2int(x, y), color });
	}
	else {
		leftnow = false;
	}
	if (leftnow == false && leftold == true) {
		SetDrawScreen(illustScreen);
		if (freeDraw.size() > 2) {
			for (int n = 0; n < freeDraw.size() - 1; n++) {
				DrawLine(freeDraw[n].first.x, freeDraw[n].first.y, freeDraw[n + 1].first.x, freeDraw[n + 1].first.y, freeDraw[n].second, 5);
			}
		}
		freeDraw.clear();
	}
	leftold = leftnow;

	//’¼üˆ—
	if ((GetMouseInput() & MOUSE_INPUT_RIGHT) != 0) {
		rightnow = true;
	}
	else {
		rightnow = false;
	}
	if (rightnow == true && rightold == false) {
		lineDraw[0] = { Vector2int(x, y), color };
	}
	if (rightnow == true) {
		lineDraw[1] = { Vector2int(x, y), color };
	}
	if (rightnow == false && rightold == true) {
		SetDrawScreen(illustScreen);
		DrawLine(lineDraw[0].first.x, lineDraw[0].first.y, lineDraw[1].first.x, lineDraw[1].first.y, lineDraw[1].second, 5);
		lineDraw.resize(2);
	}
	rightold = rightnow;

	SetDrawScreen(DX_SCREEN_BACK);
	//DrawGraph(0,0,illustScreen,true);


	////ì}I—¹‚µ‚½ü(‹Èü)
	//for (auto posList : freeDrawList) {
	//	if (posList.size() > 2) {
	//		for (int n = 0; n < posList.size() - 1; n++) {
	//			DrawLine(posList[n].first.x, posList[n].first.y, posList[n + 1].first.x, posList[n + 1].first.y, posList[n].second, 5);
	//		}
	//	}
	//}
	////ì}I—¹‚µ‚½ü(’¼ü)
	//for (int n = 0; n < lineDrawList.size();n++) {
	//	DrawLine(lineDrawList[n][0].first.x, lineDrawList[n][0].first.y, lineDrawList[n][1].first.x, lineDrawList[n][1].first.y, lineDrawList[n][1].second, 5);
	//}
	
	//ì}’†‚Ìü(‹Èü)
	if (freeDraw.size() > 2) {
		for (int n = 0; n < freeDraw.size() - 1; n++) {
			DrawLine(freeDraw[n].first.x, freeDraw[n].first.y, freeDraw[n + 1].first.x, freeDraw[n + 1].first.y, freeDraw[n].second, 5);
		}
	}
	//ì}’†‚Ìü(’¼ü)
	if (rightnow) {
		DrawLine(lineDraw[0].first.x, lineDraw[0].first.y, lineDraw[1].first.x, lineDraw[1].first.y, lineDraw[1].second, 5);
	}

	//íœ
	if (CheckHitKey(KEY_INPUT_SPACE)) {
		SetDrawScreen(illustScreen);
		ClsDrawScreen();
		SetDrawScreen(DX_SCREEN_BACK);
	}
	DrawBox(0, 0, 50, 50, color, true);
}

void Illust::Init()
{
	lineDraw.resize(2);
	illustScreen = MakeScreen(800, 600);
}
