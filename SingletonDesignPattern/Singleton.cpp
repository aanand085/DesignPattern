#include<iostream>

using namespace std;

class GameSetting
{
private:
	static GameSetting* _instance;
	int _width;
	int _height;
	int _brightness;
	GameSetting() : _width(500), _height(300), _brightness(80) {}

public:
	void setWidth(int w)		{ _width = w; }
	void setHeight(int h)		{ _height = h; }
	void setBrightness(int b)	{ _brightness = b; }

	int getBrightness() { return _brightness; }
	int getWidth()		{ return _width; }
	int getHeight()		{ return _height; }

	void display()
	{
		cout << "Brightness : " << _brightness << endl;
		cout << "Width : " << _width << endl;
		cout << "Height : " << _height << endl;
	}

	static GameSetting* _getInstance()
	{
		if (_instance == NULL)
			_instance = new GameSetting();
		return _instance;
	}
};

GameSetting* GameSetting::_instance = NULL;

void someFunction()
{
	GameSetting* gs2 = GameSetting::_getInstance();
	gs2->display();
}


int main()
{
	GameSetting* gs = GameSetting::_getInstance();
	gs->setBrightness(70);
	gs->setHeight(250);
	gs->setWidth(400);
	gs->display();
	someFunction();
	return 0;
}