### N o T e S

---

### Implementing a graph

* A graph is a set of vertices and edges. So we can create two lists one for each.

```cpp
#include<iostream>
using namespace std;
class Edge{
    string startvertex;
    string endvertex;
    int weight
};
string vertex_list[MAX_SIZE];
Edge edge_list[MAX_SIZE];
```

Adjacency matrix representation

Using n*n matrix to store graph values.

---

Thank you
