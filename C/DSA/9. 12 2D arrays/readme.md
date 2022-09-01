### 2 D arrays

---

Find the transpose of a n*n matrix;

```cpp
void baj(){
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            swap(a[i][j],a[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
```

#### Character arrays 

---

let's suppose we have "chaitanya"

We can store it in a character array as;

```cpp
int n;
cin>>n;
char ckc[n+1];
cin>>ckc;
```

#### Inputting a sentence

```cpp
int n;
cin>>n;
cin.ignore();
char arr[n+10];
cin.getline(arr,n);
cin.ignore();

---

Thank you
