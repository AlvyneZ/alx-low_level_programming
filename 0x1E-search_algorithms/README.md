# search_algorithms
## Author: AlvyneZ
This repository contains C program source code for implementing different search algorithms in C  

### Big-O files
The 2-O, 3-O, ... files give the time and space complexities of the implemented search algorithms
 in big-O notation with the following format:
- O(1)
- O(n)
- O(n!)
- n*m -> O(nm)
- n square -> O(n^2)
- sqrt n -> O(sqrt(n))
- log(n) -> O(log(n))
- n * log(n) -> O(nlog(n))
- n + k -> O(n+k)
- ...

The following shows what each file has:
1. __2-0__ - time complexity (worst case) of a linear search in an array of size n
2. __3-0__ - space complexity (worst case) of an iterative linear search algorithm in an array of size n
3. __4-0__ - time complexity (worst case) of a binary search in an array of size n
4. __5-0__ - space complexity (worst case) of a binary search in an array of size n
5. __6-0__ - space complexity of this function/algorithm:
```
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```
