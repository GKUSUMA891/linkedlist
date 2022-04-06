1.what is memory efficient in  doubly linked list?

 ANS: Memory efficient doubly linked list has only one pointer to traverse the list back and forth.
      The implementation is based on pointer difference.
     It uses bitwise XOR operator to store the front and rear pointer addresses.

2.can we implement tree using array?

  ANS:an array that represents a tree in such a way that array indexes are values in tree nodes
     and array values give the parent node of that particular index (or node).
     The value of the root node index would always be -1 as there is no parent for root.

3.how to choose pivot element in quicksort?

   ANS:A quicksort algorithm should always aim to choose the middle-most element as its pivot.
    Some algorithms will literally select the center-most item as the pivot,
    while others will select the first or the last element.

4.if two lists can be concatinated in O(1) time,then which variation of linked list can be used?

  ANS:circular doubly linked list concatenates two lists in O (1) time.

5.how do you sort elements inside a stack by using push and pop operations with an additional stack?
   ANS:Sort a Stack using Stack
      push(s, x): Insert a new element to the stack.
      pop(s): Remove the top element from the stack.
      top(s): Return the top element from the stack.
      isEmpty(s): check whether the stack is empty or not.
