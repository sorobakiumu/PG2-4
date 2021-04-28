#pragma once
#include<vector>
#include<tuple>

class Vector2int
{
public:
	int x;
	int y;
};

class Illust
{
public:

	//スングルトンインスタンス
	static Illust& Instance() {
		static Illust instance;
		return instance;
	}
	void run();
	void Init();
private:
	Illust() = default;
	Illust(const Illust&) = delete;
	void operator = (const Illust&) = delete;

	std::vector<std::pair<Vector2int, int>> freeDraw;
	std::vector<std::vector<std::pair<Vector2int, int>>> freeDrawList;


	std::pair<Vector2int, int> lineDraw[2];
	std::vector<std::pair<Vector2int, int>[2]> lineDrawList;

	bool leftnow = false;
	bool leftold = false;

	bool rightnow = false;
	bool rightold = false;
	int color = 0x888888;
};

