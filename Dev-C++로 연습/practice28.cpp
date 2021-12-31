#include<iostream> 

using namespace std; 
char map[101][101], ch[10][10]; 

int dx[4] = { 1, 0, -1, 0 }; 

int dy[4] = { 0, 1, 0, -1 }; 

int cnt = 0; 
int n, m; 

void DFS(int x, int y) { 

int xx, yy, i; 

if (x == n && y == m) { 
 cnt++; 
 } 

  else { 

    for (i = 0; i < 4; i++) { 

      xx = x + dx[i]; 

      yy = y + dy[i]; 

      if (xx<1 || xx>n || yy<1 || yy>m) 

     continue; 

     if (map[xx][yy] == '0' && ch[xx][yy] == '0') { 

        ch[xx][yy] = '1';

        DFS(xx, yy); 

        ch[xx][yy] = '0';

     } 

  } 

 } 

 } 

 int main() { 

   cin >> n >> m; 

   /*for (int i = 1; i <= n; i++) { 

     string map[100]; 

   cin >> map[i]; 

  } */
  for(int i=1;i<=n;i++){
  	for(int j=1;j<=m;j++){
  		cin>>map[i][j];
	  }
  }

  ch[1][1] = 1; 

 DFS(1, 1); 

  cout << cnt; 

  return 0; 

 } 


