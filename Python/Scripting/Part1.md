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
┌──(ckc9759㉿Kali)-[~/Desktop/ctf/python]
└─$ python3
Python 3.10.5 (main, Jun  8 2022, 09:26:22) [GCC 11.3.0] on linux
Type "help", "copyright", "credits" or "license" for more information.
>>> a="            ckc          "
>>> a.strip()
'ckc'
>>> b='hh jtmcvkjnb hh'
>>> b.lstrip('hh')
' jtmcvkjnb hh'
>>> x='python is easy'
>>> x.split()
['python', 'is', 'easy']
>>> x.split('is')
['python ', ' easy']
>>> x.split('easy')
['python is ', '']
>>> 
```

### count, index and find

```py
┌──(ckc9759㉿Kali)-[~/Desktop/ctf/python]
└─$ python3
Python 3.10.5 (main, Jun  8 2022, 09:26:22) [GCC 11.3.0] on linux
Type "help", "copyright", "credits" or "license" for more information.
>>> a="hello what a pleasant day it is. a bee is flying there, what a sight !"
>>> a.count()
Traceback (most recent call last):
  File "<stdin>", line 1, in <module>
TypeError: count() takes at least 1 argument (0 given)
>>> a.count('a')
8
>>> a.count(a)
1
>>> a.count('what')
2
>>> a.count('ll')
1
>>> a.index('a')
8
>>> a.index('h')
0
>>> a.index('h',1)
7
>>> a.find('bee')
35
>>> a.find('is')
29
>>> a.find('is',30)
39
>>> a.find('is',36)
39
>>> a.find('is',40)
-1
>>>
```

#### Data Structures

```py
list --> []
tuple --> ()
dict --> {} key value pair
set --> {}
```



