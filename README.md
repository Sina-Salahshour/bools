# bools
Datatype for storing more than one booleans in a single byte.  

```
         name 	memory used 	 capacity

	 sbool 	  1 byte 	 8 booleans
	 lbool 	  2 bytes 	16 booleans
	llbool 	  4 bytes 	32 booleans
	ulbool 	  8 bytes 	64 booleans
```
Usage:  
```
#include "bools"
```
"index" is the index of our boolean and "value" is the value of our boolean.
"bool[index]" for accessing the value of bool.
```
sbool bool1; 
bool1[index] = value;
if(bool1[index]) 
{
 /* some code */
}
```
you can change the value of array manually. index is counted from right to left. in this example "bool1[1]" is equal to "true".
```
bool1 = 0b0000'0010; 
```
