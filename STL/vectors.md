# Internal Working of Vectors

![Image](../Static/Pasted%20image%2020230928200437.png)

- High performance inserts at the back only
- Iterators are just pointers that point to a memory location
- Random access - constant 𝓞(1).
- Insertion or removal of elements at the end - amortized constant 𝓞(1).
- Insertion or removal of elements - linear in the distance to the end of the vector 𝓞(n).



