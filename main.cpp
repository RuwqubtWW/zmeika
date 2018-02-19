#include <iostream>
#include <string>

using namespace std;

bool gameOver;
const int area_width = 30;
const int area_height = 30;
int x, y, FruitX, FruitY, score;
enum eDirection {Stop = 0,Left, Right, Up, Down};
eDirection dir;


void Setup() {
	gameOver = false;
	dir = STOP;
	x = area_width / 2;
	y = area_height / 2;
	FruitX = rand() % width;
	FruitX = rand() % height;
	score = 0;
}


void Draw() {
	system("cls");
	for (int i = 0; i < width; i++)
		cout << "#";
	cout << endl;

	for (int i = 0; i < height; i++)
		for (int j = 0; j < width; j++)

	for (int i = 0; i < width; i++)
		cout << "#";
	cout << endl;
}

void Input() {

}

void Logic() {

}


int main() {
	Setup();
	while (!gameOver) {
		Draw();
		Input();
		Logic();
	}
	return 0;
}