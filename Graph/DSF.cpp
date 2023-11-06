#include <iostream>

using namespace std;

int main()
{
    int n, i, j, edges, src_vrt, dest_vrt;
    cout << "Enter no. of vertices and edges: ";
    cin >> n >> edges;
    int adj[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            adj[i][j] = 0;
        }
    }
    cout << "Input src and dest vertices of edges\n";
    for (i = 0; i < edges; i++)
    {
        cin >> src_vrt >> dest_vrt;
        adj[src_vrt][dest_vrt] = 1;
    }
    cout << "Adjacency matrix:\n";
    for (i = 0; i < n; i++)
    {
        cout << " ";
        for (j = 0; j < n; j++)
        {
            cout << adj[i][j] << '\t';
        }
        cout << endl;
    }
    int start, status[n], stk[10];
    cout << "Enter the starting vertex: ";
    cin >> start;
    for (i = 0; i < n; i++)
    {
        status[i] = 0;
    }
    int top = -1;
    stk[++top] = start;
    status[start] = 1;
    int w, k = 0, dfs[10];
    while (top != -1)
    {
        w = stk[top];
        top = top - 1;
        status[w] = 2;
        dfs[k] = w;
        k++;
        for (j = 0; j < n; j++)
        {
            if (adj[w][j] != 0 && status[j] == 0)
            {
                stk[++top] = j;
                status[j] = 1;
            }
        }
    }
    cout << "\nDFS traversal: \n";
    for (int q = 0; q < k; q++)
    {
        cout << dfs[q] << " ";
    }
    return 0;
}