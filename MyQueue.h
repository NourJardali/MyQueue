#include <iostream>
#include <string>
using namespace std;

#define SIZE 10
//An abstract data structure that is open at both its ends
//Can be used with any datatype
template<typename T>
class MyQueue { //Class definition
private:
	int size;	//size of queue
	T* arr;	//data array
	int head;	//to represent removal point
	int tail;	//to represent the insertion point
	int counter; //to track number of inserted items

public:
	//default constructor
	MyQueue() {
		head = 0;
		tail = 0;
		size = SIZE;	//default size is 10
		arr = new T[size];
		counter = 0;
	}

	//second constructor
	MyQueue(int n) {
		head = 0;
		tail = 0;
		size = n;
		arr = new int[size];
		counter = 0;
	}

	MyQueue(MyQueue& q) {
		arr = q.arr;
		head = q.head;
		tail = q.tail;
		counter = q.counter;
		size = q.size;
	}

	//destructor to free up the dynamically allocated storage
	virtual ~MyQueue(void) {
		delete arr;
	}

	//returns the size of the queue
	int getSize(void) {
		return size;
	}

	//returns number of items currently in the queue
	int getCount(void) {
		return counter;
	}

	//checks if the queue is full
	bool isFull(void) {
		return counter == size;
	}

	//checks if the queue is empty
	bool isEmpty(void) {
		return counter == 0;
	}

	//returns the item in the front of the queue
	T getHead(void) {
		if (isEmpty()) {
			throw "Queue is empty";
		}
		return arr[head];
	}

	//returns the item in the end of the queue
	T getTail(void) {
		if (isEmpty()) {
			throw "Queue is empty";
		}
		return arr[tail-1];
	}

	//to insert a new item
	void enqueue(T v) {
		//check first if queue is full
		if (isFull()) {
			//can't insert a new item
			cout << "Queue is full";
		}
		else {
			//add new item and increment tail and counter
			arr[tail++] = v;
			counter++;
		}
	}

	//overload + to allow inserting into the queue
	void operator+(int v) {
		this->enqueue(v);
	}

	//remove an item from the queue
	T dequeue(void) {
		//check first if queue is empty
		if (isEmpty()) {
			//then no items to remove
			cout << "Queue is empty";
		}
		else {
			counter--;
			//EDITED
			//this part was written in the beginning of enqeue
			//but it was supposed to be in dequeue
			int h = arr[head];
			head++;
			for (int i = 0; i < tail - head; i++) {
				arr[i] = arr[i + head];
			}
			tail--;
			head = 0;
			return h;
		}
	}

	//overload - to allow removing items from the queue
	T operator-(void) {
		return this->dequeue();
	}

	//to print the items in queue
	void print(void) {
		for (int i = 0; i < counter; i++) {
			cout << arr[i] << " ";
		}
	}

	//to empty the queue and reset it
	void reset() {
		head = 0;
		tail = 0;
		arr = new int[size];
		counter = 0;
	}

	//to take input from keyboard and add it to queue
	void takeInput(void) {
		T n;
		cin >> n;
		enqueue(n);
	}

	//overload == to check if two queues have the same content
	//at the same positions
	bool operator==(MyQueue q1) {
		for (int i = 0; i < size; i++) {
			if (this->arr[i] != q1.arr[i])
				return false;
		}
		return true;
	}

	//overload != to check if two queues are not the same
	bool operator!=(MyQueue& q1) {
		return *this == q1;
	}

	//intersection of two queues
	MyQueue<T>& intersect(MyQueue<T>& queue) {
		int size;
		//create a queue with size equal to
		//the size of the smaller of the 2 queues
		if (counter < queue.counter)
			size = counter;
		else
			size = queue.counter;
		MyQueue<T>* q = new MyQueue<T>(size);
		for (int i = 0; i < counter; i++) {
			for (int j = 0; j < queue.counter; j++) {
				if (arr[i] == queue.arr[j]) {
					q->enqueue(arr[i]);
					break;
				}
			}
		}
		return *q;
	}

	//overload && to compute the intersection
	MyQueue& operator&&(MyQueue& queue) {
		return this->intersect(queue);
	}

	private:
		//to check if queue contains a specific item
		bool checkExist(int n) {
			for (int i = 0; i < counter; i++) {
				if (arr[i] == n)
					return true;
			}
			return false;
		}

	//compute union of two queues
	MyQueue<T>& _union(MyQueue<T>& queue) {
		//create a queue with size equal to the 
		//summation of the sizes of the 2 queues
		MyQueue<T>* q = new MyQueue<T>(size + queue.size);
		for (int i = 0; i < counter; i++) {
			if (!this->checkExist(queue.arr[i]))
				q->enqueue(arr[i]);
		}
		for (int i = 0; i < queue.counter; i++) {
			if (!this->checkExist(arr[i]))
				q->enqueue(queue.arr[i]);
		}
		return *q;
	}

	public:
		//overload || to compute the union
		MyQueue<T>& operator||(MyQueue<T>& queue) {
		return this->_union(queue);
	}
};

//overload << to display items of the queue in order
template<typename T>
void operator<<(ostream& os, MyQueue<T> q) {
	q.print();
}

//overload >> to allow input of a queue
template<typename T>
void operator>>(istream& is, MyQueue<T>& queue) {
	queue.takeInput();
}
