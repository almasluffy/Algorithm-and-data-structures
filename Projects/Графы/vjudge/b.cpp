#include <iostream>
#include <queue>
using namespace std;
bool used[101][101];
int n,m;
queue<pair<int,int> > q;
char a[101][101];
int dx[8] = {-1,0,1,1,1,0,-1,-1};
int dy[8] = {1,1,1,0,-1,-1,-1,0};
bool check(int x,int y)
{
	if(x >=0 && y>=0 && x < n && y < m)
	{
		return true;
	}
	return false;
}

 void bfs(int x,int y)
{

    used[x][y] = true;
    q.push(make_pair(x,y));
    while(!q.empty())
    {
    	int x1 = q.front().first;
    	int y1 = q.front().second;
        q.pop();
        for(int i = 0;i<8;i++)
        {
        	int x2 = x1  + dx[i];
        	int y2 = y2  + dy[i]; 
        	if(check(x2, y2) && a[x2][y2] == '@' && !used[x2][y2] )
        	{
        		q.push(make_pair(x2, y2));
        		used[x2][y2] = true;
        	}
        }
    }

}

int main()
{
	
	while(1)
	{
		cin>>n>>m;
		int count = 0;
		if(n == 0 && m == 0) break;
		for(int i = 0;i<101;i++)
		{
			for(int j = 0;j<101;j++)
			{
				used[i][j] = false;
			}
		}
		for(int i = 0;i<n;i++)
		{
			for(int j = 0;j<m;j++)
			{
                cin>>a[i][j];
              
			}
		}
		for(int i = 0;i<n;i++)
		{
			for(int j = 0;j<m;j++)
			{
				if(a[i][j] == '@' && !used[i][j])
				{
                      bfs(i,j);
                      count ++;
				}
			}
		}
		cout<<count<<endl;



	}
	
	return 0;
}