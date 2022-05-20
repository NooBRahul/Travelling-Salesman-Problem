#include <bits/stdc++.h>
using namespace std;

int graph[20][20];

void adjmatrix(int a, int b, int w){
    graph[a][b] = w;
    graph[b][a] = w;
}

int travllingSalesmanProblem(int V, int s)
{
    int step = 0;
    int count = 1;
    vector<int> vertex;
    for (int i = 0; i < V; i++)
        if (i != s)
            vertex.push_back(i);

    int min_path = INT_MAX;
    do {

        int current_pathweight = 0;

        int k = s;
        cout<<"Hamiltonian Path followed is :"<<endl;
        for (int i = 0; i < vertex.size(); i++) {
            current_pathweight += graph[k][vertex[i]];
            k = vertex[i];
            cout<<k<<" "<<current_pathweight<<endl;
        }
        current_pathweight += graph[k][s];
        cout<<s<<" "<<current_pathweight<<endl;
        if(min_path > current_pathweight){
            step = count;
        }
        min_path = min(min_path, current_pathweight);


        cout<<endl;
        count++;
    } while (next_permutation(vertex.begin(), vertex.end()));
    cout<<"Minimum cost path followed is : "<<endl;
    cout<<step<<endl;
    return min_path;
}

int main()
{
    int V;
    cout<<"Enter Number of Vertices : ";
    cin>>V;
    int e;
    cout<<"Enter Number of Edges : ";
    cin>>e;
    int a,b,w;
    for(int i = 0; i < e; i++){
        cin>>a>>b>>w;
        adjmatrix(a,b,w);
    }
    int s = 0;
    cout << travllingSalesmanProblem(V, s) << endl;

    return 0;
}

/*
4
6
0 1 10
0 2 15
0 3 20
1 2 35
1 3 25
2 3 30
*/
