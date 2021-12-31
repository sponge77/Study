#include <iostream>
#include <queue>
using namespace std;
//char�� �迭 �ޱ� 
int mazeXSize, mazeYSize;		//�̷� ������

int moveX[4] = { 0, 0, -1, 1 };	//x �̵�
int moveY[4] = { -1, 1, 0, 0 };	//y �̵�

char mazeMap[101][101];			//�̷� ��
int visitCount[101][101];		//�ش� �ε��� �湮 Ƚ��


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

//������ üũ�ϴ� �Լ�
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

			//�����ȿ� �ְ�, ������ �湮������ ����, �� �� �ִ� ���̸�
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
	inputMazeSize();	//�̷� ������ �Է�
	inputMazeMap();		//�̷� �� �Է�
	escapeMaze();		//�̷�Ż�� ����
	printResult();		//��� ���
}
