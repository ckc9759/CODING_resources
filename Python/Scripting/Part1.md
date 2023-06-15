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

#### Python functions for strings

```py
lower() --> lowercase
upper() --> uppercase
dir(x) --> operations that can be performed on x
swapcase() --> swap the cases, upper to lower, lower to upper.
title() --> each words first letter is capital.
capitalize() --> first letter capital.
```

#### Python Boolean

```py
startswith('p') --> checks if string starts with p or not, returns boolean data
endswith('p') --> checks for ending character, returns boolean
islower() --> checks if strings is lowercase.
isupper() --> Similiar
istitle()
isspace()
isalpha()
isnumeric()
isprintable()
isalnum()
isascii()
isdecimal()
```

---

#### join, centre, zfill

```py
┌──(ckc9759㉿Kali)-[~/Desktop/ctf/python]
└─$ python3
Python 3.10.5 (main, Jun  8 2022, 09:26:22) [GCC 11.3.0] on linux
Type "help", "copyright", "credits" or "license" for more information.
>>> x="chaitanya"
>>> y="".join(x)
>>> y
'chaitanya'
>>> y=" ".join(x)
>>> y
'c h a i t a n y a'
>>> 
```

```py
┌──(ckc9759㉿Kali)-[~/Desktop/ctf/python]
└─$ python3
Python 3.10.5 (main, Jun  8 2022, 09:26:22) [GCC 11.3.0] on linux
Type "help", "copyright", "credits" or "license" for more information.
>>> x="chaitanya"
>>> x
'chaitanya'
>>> y=x.center(30)
>>> y
'          chaitanya           '
>>> z=x.zfill
>>> z=x.zfill(20)
>>> z
'00000000000chaitanya'
>>>
```

### Strip, split

```py





