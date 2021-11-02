# <p align="center" > <b> **HASHING** 💻</b></p>


## What is hashing?

- Hashing is the process of converting a given key into another value.
-------------------------------------------------------------------------------------

## Hash Function :

- A function that converts a given big phone number to a small practical integer value.

- A hash function is any function that can be used to map data of arbitrary size to fixed-size values.

- A hash function takes a group of characters (called a key) and maps it to a value of a certain length called a hash value or hash.

- The hash value is representative of the original string of characters, but is normally smaller than the original.

-------------------------------------------------------------------------------------------
![image](https://user-images.githubusercontent.com/85113641/139855015-731b1f9f-1ad6-48ff-809a-939012bb7c8b.png)

--------------------------------------------------------------------

## Hash Tables :

- Hash functions are used in conjunction with hash tables to store and retrieve data items or data records.

- The hash function translates the key associated with each datum or record into a hash code, which is used to index the hash table.

- When an item is to be added to the table, the hash code may index an empty slot also called a **Bucket**.

--------------------------------------------------------------------------------------------------------

![Hash Table](https://user-images.githubusercontent.com/85113641/139850969-d0cf5849-2964-4540-ae51-6df8a4398fdb.png)


--------------------------------------------------------------------------------------------------------

## Collision :

-  Hash collision is a random match in hash values that occurs when a hashing algorithm produces the same hash value for two distinct pieces of data.

- The situation where a newly inserted key maps to an already occupied slot in the hash table is called collision and must be handled using some collision handling technique. 
--------------------------------------------------------------------------------------------------------

![sep_chain_1](https://user-images.githubusercontent.com/85113641/139855356-06eb17cb-2568-4b2e-be0c-df082b860881.png)

------------------------------------------------------------------



## Chaining method :

- Chaining is a technique used for avoiding collisions in hash tables.

- In the chaining approach, the hash table is an array of linked lists i.e., each index has its own linked list.

- All key-value pairs mapping to the same index will be stored in the linked list of that index.

