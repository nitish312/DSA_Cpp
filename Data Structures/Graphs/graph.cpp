#include<iostream>
using namespace std;

int main()
{
    int n,m;
    int graph[n+1][n+1];
    for(int i = 0; i < m; i++)
    {
        int v1,v2;
        cin>>v1>>v2;
        graph[v1][v2] = 1;
        graph[v2][v1] = 1;
    }
}