### Part2 Automation

---

#### Lists

```py
Lists are mutable
sort()
reverse()
pop(2) - pop at any index
extend() - used to extend the list to accomodate another list's element and not the list as a whole.
append() - append at the last as a list or element depending upon the input.
insert() - insert at any index
```

#### Tuples

```py
Immutable, faster
count() and index() functions, array slicing
```

#### Dictionary

```py
key value pair
get() --> to get the value of a key in dictionary
keys() --> keys in dicitionary
values() --> values in dictionary
items() --> key, value pair
update() --> Similiar to extends() function of list
pop() --> removes value corresponding to key
popitem() --> pops the last element
```

 #### Set 

 ```py
Creates a data in ascending order with non repeating values
union() - combines two sets eliminating repeated values
intersection() - returns a new set with intersecting elements from two sets
```

#### Opeartors

```py
Arithmetic - + - * / % // **
Assignment - Shorthand operators
Comparison - > < == != >= <=
Identify - Used to find the type of class / object. `is` and `is not`
Membership - `in` and `not in`
Logical - and or not
Bitwise
```

```
any() - equivalent to or
and() - equivalent to and
```

---

### Modules

```
List of files with definitions and functions.
Reusability
```

```py
PLATFORM MODULE - used to extract platform data.
┌──(ckc9759㉿Kali)-[~/Desktop/ctf/python/Buy_The_Flag]
└─$ python3
Python 3.10.5 (main, Jun  8 2022, 09:26:22) [GCC 11.3.0] on linux
Type "help", "copyright", "credits" or "license" for more information.
>>> import platform
>>> platform.system()
'Linux'
>>> platform.python_version()
'3.10.5'
>>> platform.python_version
platform.python_version()        platform.python_version_tuple()  
>>> platform.python_version_tuple()
('3', '10', '5')
>>> platform.machine()
'x86_64'
>>> platform.release()
'5.18.0-kali5-amd64'
>>> platform.platform()
'Linux-5.18.0-kali5-amd64-x86_64-with-glibc2.35'
>>> platform.architecture()
('64bit', 'ELF')
>>> platform.processor()
''
>>> platform.node()
'Kali'
>>> platform.uname()
uname_result(system='Linux', node='Kali', release='5.18.0-kali5-amd64', version='#1 SMP PREEMPT_DYNAMIC Debian 5.18.5-1kali6 (2022-07-07)', machine='x86_64')
```






