### Part 1 - Automation

---

```py
Special characters
============================================================================
\n - newline
\b - cursor to 1 position back
\t - tab
\ + character - will treat as a character, used for ' and " Escape symbol.
\a - alert symbol
============================================================================
```

```py
eval() - used to identify the variable type
x=eval(input('enter a no. : '))
# Based on input, python identifies the variable type using eval
```

#### Python Scripting

---

```py
# Converting characters to numbers is encoding and reverse is decoding. ASCII and Unicode are the popular encodings used.
In python, string is a unicode character, it includes every character in all languages.
```

```py
Array slicing

s[0] --> first character
s[-1] --> last character
s[0:5] --> substring from 0th index to 4th index
s[0:] --> 0 to last
s[:5] --> till 5th, since no start is provided, 0 to 4th index

Strings are immutable though we can re-assign. 
```
