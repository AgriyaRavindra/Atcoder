#include <bits/stdc++.h> 
using namespace std; 

class DisjSet { 
	int *rank, *parent, n; 
public: 
	DisjSet(int n){ 
		rank = new int[n]; 
		parent = new int[n]; 
		this->n = n; 
		makeSet(); 
	} 

	void makeSet(){ 
		for (int i = 0; i < n; i++){ 
			parent[i] = i; 
		} 
	} 

	int find(int x){ 

		if (parent[x] != x) { 
			parent[x] = find(parent[x]); 
		} 

		return parent[x]; 
	} 

	void Union(int x, int y) { 
		int xset = find(x); 
		int yset = find(y); 
		if (xset == yset) 
			return; 
		if (rank[xset] < rank[yset]) { 
			parent[xset] = yset; 
		} 
		else if (rank[xset] > rank[yset]) { 
			parent[yset] = xset; 
		} 
		else { 
			parent[yset] = xset; 
			rank[xset] = rank[xset] + 1; 
		} 
	} 
}; 

int main() 
{   int n,q;
    cin>>n>>q;
	DisjSet obj(n); 
    while(q--){
        int t;
        cin>>t;
        int x,y;
        cin>>x>>y;
        if(t==0){
            obj.Union(x,y);
        }else if(t == 1){
            if (obj.find(x) == obj.find(y)) 
		        cout << "1\n"; 
	        else
		        cout << "0\n"; 
        }
    }
	return 0; 
} 
