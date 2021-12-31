#include <iostream>
#include <queue>
using namespace std;
//char로 배열 받기 
int mazeXSize, mazeYSize;		//미로 사이즈

int moveX[4] = { 0, 0, -1, 1 };	//x 이동
int moveY[4] = { -1, 1, 0, 0 };	//y 이동

char mazeMap[101][101];			//미로 맵
int visitCount[101][101];		//해당 인덱스 방문 횟수


void inputMazeSize() {
	ios_base::sync_with_stdio(false);
	cin >> mazeXSize >> mazeYSize;
}

void inputMazeMap() {
	for (int i = 0; i < mazeXSize; i++) {
		for (int j = 0; j < mazeYSize; j++) {
			cin >> mazeMap[i][j];
		}
	}
}

//범위를 체크하는 함수
bool inRange(int x, int y) {
	if ((x >= 0 && x < mazeXSize) && (y >= 0 && y < mazeYSize)) {
		return true;
	}
	else {
		return false;
	}
}

void escapeMaze() {
	int currX = 0, currY = 0;

	queue<pair<int, int> >  q;
	q.push(make_pair(currX, currY));
	visitCount[currX][currY] = 1;

	while (!q.empty()) {
		currX = q.front().first;
		currY = q.front().second;
		q.pop();

		if ((currX == mazeXSize - 1) && (currY == mazeYSize - 1)) {
			break;
		}
		for (int i = 0; i < 4; i++) {
			int nextX = currX + moveX[i];
			int nextY = currY + moveY[i];

			//범위안에 있고, 이전에 방문한적이 없고, 갈 수 있는 길이면
			if (inRange(nextX, nextY) && visitCount[nextX][nextY] == 0 
                                        && mazeMap[nextX][nextY] == '1') 
            {
				visitCount[nextX][nextY] = visitCount[currX][currY] + 1;
				q.push(make_pair(nextX, nextY));
			}
		}
	}
}

void printResult() {
	cout << visitCount[mazeXSize - 1][mazeYSize - 1] << "\n";
}

int main() {
	inputMazeSize();	//미로 사이즈 입력
	inputMazeMap();		//미로 맵 입력
	escapeMaze();		//미로탈출 시작
	printResult();		//결과 출력
}
