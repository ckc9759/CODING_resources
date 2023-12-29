### MySQL

---

```py
SQL is used to interact with relational databases.

CRUD - CREATE READ UPDATED DELETE

Columns -> tell about the structure/schema/design of database.
Rows -> Individual data of database.
```
```py
CREATE database db_name;
CREATE database IF NOT EXISTS db_name;

DROP database db_name;
DROP database IF EXISTS db_name;
DROP TABLE table_name

SHOW databases
SHOW tables
```

```py
USE db_name
CREATE table table_name{
col1,
col2,                         ---> SCHEMA
col3);
```

#### Sample
```py
CREATE TABLE student(
   id INT PRIMARY KEY,
   name VARCHAR(50),
   age INT NOT NULL
);
```
```py
INSERT INTO student VALUES(1,"Hello",24); --> used for single key
INSERT INTO student VALUES(1, "abc", 25); --> Error as primary key should be unqiue.

INSERT INTO student (rollno, name)
VALUES
(124,'ckc'),
(345,'abc');


SELECT * FROM student; --> print the table
```

---

#### Data types

```py
CHAR -> FIXED LENGTH
VARCHAR -> VARIABLE LENGTH (EFFICIENT MEMORY)
BLOB -> BINARY LARGE OBJECT
INT, TINYINT, BIGINT
BIT -> BIT(1)-0,1 | BIT(2) - 01,10,00,11
FLOAT, DOUBLE -> DECIMAL VALUE
BOOLEARN -> 0,1
DATE -> YYYY-MM-DD
YEAR -> 4 DIGIT YEAR
UNSIGNED -> EXCLUDE NEGATIVE VALUES 
```

---

#### Types of SQL commands

```py
DDL, DQL, DML, DCL, TCL
```

---

#### Table related queries

```py
SELECT * FROM student;
SELECT col1, col2, FROM table_name;

KEYS :
1. PRIMARY KEY -> Single unique column, can't be null.
2. FOREIGN KEY -> Multiple, refer to P.Key, can be null.

CONSTRAINTS - NOT NULL, UNIQUE, PK, FK, DEFAULT

CLAUSES :

1. WHERE -> CONDITION (WHERE marks>80;, WHERE CITY="mumbai";,

