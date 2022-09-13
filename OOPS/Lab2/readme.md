### Notes

---

```java
public static void main(String args[]) throws IOException


InpuStreamReader obj1 = new InputStreamReader(System.in); 
BufferReader bc = new BufferReader(obj1); // BufferReader --> Constructor used to read characters of the stream (int --> parse)
String name = bc.readLine(); 
```

#### Scanner

```java
Scanner sc = new Scanner(System.in);
num1 = sc.nextInt();

// Scanner is a class used for obtaining the input output of primitive data types.

.next() --> Used for scanning  the next token of the input output.
.nextLine() --> Used for scanning a string with spaces.
```
