### Strings

---

```py
It is basically a dynamic character array.
Appending is easier.
Terminated with a special character '\0'.
```

Header file : 
```cpp
#include<string>
```

```cpp
String str; // Declaring a string

String str(5,'n'); // Prints nnnnn

String str;
getline(cin,str); // Used to input a sentence as a string including spaces.

String s1="chai",s2="tanya";
cout<<(s1.append(s2)); // Prints chaitanya basically concatenates the strings s1 and s2.

s1+s2 does the same thing i.e appends both the strings.

s1.clear(); // removes the string and makes it ""
compare(); // this function is used to compare two strings lexicographically i.e using their ASCII values.

empty(); // This function is used to check if the string is empty or not.
erase(3,4); // Delete 3 characters starting from the 4th position or index.

find("com"); // Returns the index of c if com is found in the string.
s1.insert(2,"lol"); // inserts string lol at the index 2 in the string s1.
size(); // This function is used to find the size of the string, same as length()

s1.substr(6,4); // Returns the substring from 6th index with size = 4.

stoi(); // converts the string to integer abbreviated as stoi function.
to_string(); // Used to convert the integer to string value.
sort(s.begin(),s.end()) // sort the string
```

---
