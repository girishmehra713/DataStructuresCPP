#include<bits/stdc++.h>
using namespace std;
class AdjMatrix{
public:

    int V;
    int E;
    int** adj;
    void createGraph();


};
void AdjMatrix::createGraph(){
int u,v;
AdjMatrix* G = new AdjMatrix();
cout<<"Enter number of vertices:";
cin>>G->V;
cout<<"Enter number of edges:";
cin>>G->E;
adj = new int*[G->V];
for(int j=0;j<G->V;j++){
    adj[j] = new int[G->V];
}

for(u=0;u<G->V;u++){
    for(v=0;v<G->V;v++){
        adj[u][v] = 0;
    }
}
for(int i=0;i<G->E;i++){
    cout<<"Enter start:";
    cin>>u;
    cout<<"Enter End:";
    cin>>v;
    adj[u][v] = 1;
    adj[v][u] = 1;
}
cout<<"Graph created Successfully!!"<<endl;


}
int main(){
AdjMatrix A;
A.createGraph();

}



