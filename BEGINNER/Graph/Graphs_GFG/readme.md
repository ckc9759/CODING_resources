### G r A p H s

---

```py
A graph is a data structure that consists of the following two components: 
1. A finite set of vertices also called as nodes. 
2. A finite set of ordered pair of the form (u, v) called as edge. 
```

#### Graph representation

```py
The following two are the most commonly used representations of a graph. 
1. Adjacency Matrix 
2. Adjacency List 
```

```py
Adjacency matrix for undirected graph is always symmetric.
Adjacency Matrix is also used to represent weighted graphs. 
```

#### Implementation

```cpp
#include <iostream>
using namespace std;

int main()
{
	// n is the number of vertices
	// m is the number of edges
	int n, m;
	cin >> n >> m ;
	int adjMat[n + 1][n + 1];
	for(int i = 0; i < m; i++){
		int u , v ;
		cin >> u >> v ;
		adjMat[u][v] = 1 ;
		adjMat[v][u] = 1 ;
	}
	
	
	return 0;
}
```

#### Using Sets for representing Graphs

```py
* A set is different from a vector in two ways: it stores elements in a sorted way, and duplicate elements are not allowed. 
* Sets are internally implemented as binary search trees.
```

