# standard templates library


## containers and iterators

+ containers: provided by stl, to store and manipulate collections of objects efficiently
  + **Sequence Containers:** Store elements in a linear order (like arrays/lists). -> *vector*, *deque*, *list*, *array*, *forward_lis*
  + **Associative Containers**: Store key-value pairs in sorted/unordered fashion.-> *map*, *set*, *multimap*, *multiset*
  + **Unordered Containers**: Use hashing for faster access.-> *unordered_map*, *unordered_set*, *unordered_multimap*, *unordered_multiset*

+ iterator: its like a pointer but for containers. It allows to traverse elements of a container without exposing the underlying structure.
+ 
  
```cpp
#include <iostream>
#include <map>
#include <vector>
#include <list>


```

## algorithms