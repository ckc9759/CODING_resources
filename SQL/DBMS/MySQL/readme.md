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
DROP database db_name;

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
