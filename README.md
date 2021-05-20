# MyQueue
A Queue is an abstract data structure similar to Stacks. Unlike stacks, a queue is open at both its ends. One end is always used to insert data (enqueue) and the other is used to remove data (dequeue). Think of the queue as a waiting line, where people at the front (head) get serviced first and they get to leave first, whereas new arriving people will wait at the end (tail) of the queue. Unlike the stack which is a Last In First Out (L.I.F.O.) data structure, the queue is a First In First Out (F.I.F.O.) data structure.

Use a built-in array and dynamic memory management to represent the queue. Instead of using one variable to keep track of insertion and
deletion level (like top in the Stack), you may consider using two members (head to represent the removal
point and tail to represent the insertion point). Think of how you need to manipulate these two variables
to control the insertion and deletion operations.

Your MyQueue class should support the following operations:

- A constructor that dynamically allocates memory for the queue. Assume a default size of 10.

- A destructor to free up the dynamically allocated storage.

- A function that returns the size of the queue (getSize).

- A function that returns the number of items currently in the queue (getCount).

- A function that checks if the queue is full (isFull). Call this function before you attempt to insert
an item onto the queue.

- A function that checks if the queue is empty (isEmpty). Call this function before you attempt to
remove an item from the queue.

- A function that returns the item in the front of the queue (getHead). This function should throw
an exception in case the queue is empty.

- A function that returns the item in the end of the queue (getTail). This function should throw an
exception in case the queue is empty.

- Enqueue to insert a new item. Code it almost similarly to push. Think of what you need to do with
the tail variable.

- Overload + to allow inserting onto the queue. For example Q + 10 should be equivalent to
Q.enqueue(10).

- Dequeue to remove an item from the queue. Code it almost similarly to pop. Think of what you
need to do with the head variable. Make sure to keep track of the item that was removed as we
did in the pop function.

- Overload - to allow removing items from the queue. For example Q – x should be equivalent to
Q.dequeue(x) and x should hold the value of the deleted item after the removal operation.

- Overload << to display the items of the queue in order.

- Function reset should empty the queue and reset it

- Overload the assignment operator to prevent default member-wise assignment. The code should
be similar to the overloaded assignment operator in the MyArray class.

- Do not forget to include a Copy Contsructor.

- Overload >> to allow input of a queue. Make sure to allow input “up to” but not beyond the queue
size. In case the queue already contained data, make sure to reset it before you input new items.
If for instance the queue has a size of 10, the user may choose to input between 1 and 10 values.
He/She should be given the possibility to stop the input process at any moment.

- Overload == to check if two queues have the same content at the same positions.

- Overload != by calling ==.

- Compute the Intersection of two queues using function intersect. For simplicity, create a queue
with size equal to the size of the smaller of the 2 queues. Anytime you find an item that exists in
both queues you may enqueue it in their intersection.

- Overload && to compute the intersection of two queues.

- Compute the Union of two queues using function union. For simplicity, create a queue with size
equal to the summation of the sizes of the 2 queues. Do not insert duplicates into the union.

- Overload || to compute the union of two queues
