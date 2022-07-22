### N o T e S

---

### Introduction to Graphs

* Graph is also a non linear data structure in c++.
* In trees, we have n nodes and n-1 edges.
* Any tree is also a graph.
* A social network like facebook can be represented as an undirected graph. A user is a node in such a graph and his friend would be lineked with an edge to him.
* A webpage can also be considered as a graph. Connected nodes are connected links in a webpage.
* Intercity road networks --> unweighted graphs.

### weighted and unweighted graphs

* Unweighted graph is a weighted graph having all weights equal to 1 unit.

### Directed and undirected graphs

* Graph edges having a certain direction are directed graphs.

---

### Properties of Graphs 

* Self loop - If an edge involved only vertex. 
* Multiedge - If it occurs more than once in a graph. Ex- Flight networks (arrival and departure) more than 1 flights running between 2 cities.
* If graph has n vertex, then number of edges are
  * 0 to n*(n-1) if directed 
  * 0 to n*(n-1)/2 if undirected


* A graph is dense if too many edges and spare if too less number of edges.
* A path in a graph is a way to reach from one node to another via diffn set of nodes. (WALK)
* A simple path in a graph is when no vertices is repeated. (PATH)
* A path in which no edges are repeated. (TRAIL)

* STRONGLY CONNECTED GRAPHS - If there is a path from any vertex to every other vertex.
* CLOSED WALKS - A path which begins and ends at the same vertex.

* Acyclic Graph - A tree with undirected edges. ( NO CYCLE )

---

Thank you
