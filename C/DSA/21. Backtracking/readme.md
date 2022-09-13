### Backtracking

It is a technique for solving recursive problems by trying to build every possible solution incrementally and removing those solutions that fail to satisfy the constraints of the problem at any point of time.

Example : Rat in a maze.

```cpp
bool isSafe(int** a, int x, int y, int n){
    if(x<n&&y<n&&arr[x][y]==1){
        return true;
    }
    else{
        return false;
    }
}

bool ratInMaze(int** a,int x, int y, int n,int** solArr){
    if(x==n-1&&y==n-1){
        solArr[x][y]=1;
        return true;
    }
    if(isSafe(arr,x,y,n)){
        solArr[x][y]=1;
        if(ratInMaze(arr,x+1,y,n,solArr)){
            return true;
        }
        if(ratInMaze(arr,x,y+1,n,solArr){
            return true;
        }
        solArr[x][y]=0; //backtracking
        return false;
    }
    else{
        return false;
    }
}
```

