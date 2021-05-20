#include <iostream>
#include <conio.h>
#include "MyQueue.h"
using namespace std;

int main()
{
    int choice1;
    int size1;
    int size2;
    int choice2;
    int choice3;

    do {
        cout << "Choose an option:" << endl;
        cout << "1- Create two queues with int content" << endl;
        cout << "2- Create two queues with double content" << endl;
        cout << "3- Create two queues with char content" << endl;
        cout << "4- Exit" << endl;
        cin >> choice1;
        //conditional switch statement
        switch (choice1) {
        case 1:
        {
            cout << "Enter size of first queue: " << endl;
            cin >> size1;
            MyQueue<int> intQ1(size1);
            cout << "Enter size of second queue: " << endl;
            cin >> size2;
            MyQueue<int> intQ2(size2);
            do {
                cout << "Choose which queue to do operations on:" << endl;
                cout << "1- First Queue" << endl;
                cout << "2- Second Queue" << endl;
                cout << "3- Compute intersection of the two queues" << endl;
                cout << "4- Compute union of the two queues" << endl;
                cout << "5- Go back to menu 1" << endl;
                cin >> choice2;
                switch (choice2) {
                case 1:
                {
                    do {
                        cout << "Choose an operation:" << endl;
                        cout << "1- Add item to queue" << endl;
                        cout << "2- Delete an item from queue" << endl;
                        cout << "3- Get size of queue" << endl;
                        cout << "4- Get number of items in queue" << endl;
                        cout << "5- Get item in front" << endl;
                        cout << "6- Get item at the end" << endl;
                        cout << "7- Reset queue" << endl;
                        cout << "8- Print queue" << endl;
                        cout << "9- Go back to menu 2" << endl;
                        cin >> choice3;
                        switch (choice3) {
                        case 1:
                        {
                            cout << "Enter number of items to enter: " << endl;
                            int num;
                            cin >> num;
                            cout << "Enter items to add: " << endl;
                            while (num != 0) {
                                cin >> intQ1;
                                num--;
                            }
                            break;
                        }
                        case 2:
                        {
                            int x = intQ1.dequeue();
                            cout << "item that was removed is = ";
                            cout << x << endl;
                            break;
                        }
                        case 3:
                        {
                            cout << "size = " << intQ1.getSize() << endl;
                            break;
                        }
                        case 4:
                        {
                            cout << "number of items in queue = " << intQ1.getCount() << endl;
                            break;
                        }
                        case 5:
                        {
                            cout << intQ1.getHead() << endl;
                            break;
                        }
                        case 6:
                        {
                            cout << intQ1.getTail() << endl;
                            break;
                        }
                        case 7:
                        {
                            intQ1.reset();
                            break;
                        }
                        case 8:
                        {
                            cout << intQ1;
                            break;
                        }
                        }
                    } while (choice3 != 9);
                    break;
                }
                case 2:
                {
                    do {
                        cout << "Choose an operation:" << endl;
                        cout << "1- Add item to queue" << endl;
                        cout << "2- Delete an item from queue" << endl;
                        cout << "3- Get size of queue" << endl;
                        cout << "4- Get number of items in queue" << endl;
                        cout << "5- Get item in front" << endl;
                        cout << "6- Get item at the end" << endl;
                        cout << "7- Reset queue" << endl;
                        cout << "8- Print queue" << endl;
                        cout << "9- Go back to menu 2" << endl;
                        cin >> choice3;
                        switch (choice3) {
                        case 1:
                        {
                            cout << "Enter number of items to enter: " << endl;
                            int num;
                            cin >> num;
                            cout << "Enter items to add: " << endl;
                            while (num != 0) {
                                cin >> intQ2;
                                num--;
                            }
                            break;
                        }
                        case 2:
                        {
                            int x = intQ2.dequeue();
                            cout << "item that was removed is = ";
                            cout << x << endl;
                            break;
                        }
                        case 3:
                        {
                            cout << "size = " << intQ2.getSize() << endl;
                            break;
                        }
                        case 4:
                        {
                            cout << "number of items in queue = " << intQ2.getCount() << endl;
                            break;
                        }
                        case 5:
                        {
                            cout << intQ2.getHead() << endl;
                            break;
                        }
                        case 6:
                        {
                            cout << intQ2.getTail() << endl;
                            break;
                        }
                        case 7:
                        {
                            intQ2.reset();
                            break;
                        }
                        case 8:
                        {
                            cout << intQ1;
                            break;
                        }
                        }
                    } while (choice3 != 9);
                    break;
                }
                case 3:
                {
                    MyQueue<int> intersec = intQ1 && intQ2;
                    cout << intersec;
                    break;
                }
                case 4:
                {
                    MyQueue<int> un = intQ1 || intQ2;
                    cout << un;
                    break;
                }
                }
            } while (choice2 != 5);
            break;
        }
        case 2:
        {
            cout << "Enter size of first queue: " << endl;
            cin >> size1;
            MyQueue<int> doubleQ1(size1);
            cout << "Enter size of second queue: " << endl;
            cin >> size2;
            MyQueue<int> doubleQ2(size2);
            do {
                cout << "Choose which queue to do operations on:" << endl;
                cout << "1- First Queue" << endl;
                cout << "2- Second Queue" << endl;
                cout << "3- Compute intersection of the two queues" << endl;
                cout << "4- Compute union of the two queues" << endl;
                cout << "5- Go back to menu 1" << endl;
                cin >> choice2;
                switch (choice2) {
                case 1:
                {
                    do {
                        cout << "Choose an operation:" << endl;
                        cout << "1- Add item to queue" << endl;
                        cout << "2- Delete an item from queue" << endl;
                        cout << "3- Get size of queue" << endl;
                        cout << "4- Get number of items in queue" << endl;
                        cout << "5- Get item in front" << endl;
                        cout << "6- Get item at the end" << endl;
                        cout << "7- Reset queue" << endl;
                        cout << "8- Print queue" << endl;
                        cout << "9- Go back to menu 2" << endl;
                        cin >> choice3;
                        switch (choice3) {
                        case 1:
                        {
                            cout << "Enter number of items to enter: " << endl;
                            int num;
                            cin >> num;
                            cout << "Enter items to add: " << endl;
                            while (num != 0) {
                                cin >> doubleQ1;
                                num--;
                            }
                            break;
                        }
                        case 2:
                        {
                            int x = doubleQ1.dequeue();
                            cout << "item that was removed is = ";
                            cout << x << endl;
                            break;
                        }
                        case 3:
                        {
                            cout << "size = " << doubleQ1.getSize() << endl;
                            break;
                        }
                        case 4:
                        {
                            cout << "number of items in queue = " << doubleQ1.getCount() << endl;
                            break;
                        }
                        case 5:
                        {
                            cout << doubleQ1.getHead() << endl;
                            break;
                        }
                        case 6:
                        {
                            cout << doubleQ1.getTail() << endl;
                            break;
                        }
                        case 7:
                        {
                            doubleQ1.reset();
                            break;
                        }
                        case 8:
                        {
                            cout << doubleQ1;
                            break;
                        }
                        }
                    } while (choice3 != 9);
                    break;
                }
                case 2:
                {
                    do {
                        cout << "Choose an operation:" << endl;
                        cout << "1- Add item to queue" << endl;
                        cout << "2- Delete an item from queue" << endl;
                        cout << "3- Get size of queue" << endl;
                        cout << "4- Get number of items in queue" << endl;
                        cout << "5- Get item in front" << endl;
                        cout << "6- Get item at the end" << endl;
                        cout << "7- Reset queue" << endl;
                        cout << "8- Print queue" << endl;
                        cout << "9- Go back to menu 2" << endl;
                        cin >> choice3;
                        switch (choice3) {
                        case 1:
                        {
                            cout << "Enter number of items to enter: " << endl;
                            int num;
                            cin >> num;
                            cout << "Enter items to add: " << endl;
                            while (num != 0) {
                                cin >> doubleQ2;
                                num--;
                            }
                            break;
                        }
                        case 2:
                        {
                            int x = doubleQ2.dequeue();
                            cout << "item that was removed is = ";
                            cout << x << endl;
                            break;
                        }
                        case 3:
                        {
                            cout << "size = " << doubleQ2.getSize() << endl;
                            break;
                        }
                        case 4:
                        {
                            cout << "number of items in queue = " << doubleQ2.getCount() << endl;
                            break;
                        }
                        case 5:
                        {
                            cout << doubleQ2.getHead() << endl;
                            break;
                        }
                        case 6:
                        {
                            cout << doubleQ2.getTail() << endl;
                            break;
                        }
                        case 7:
                        {
                            doubleQ2.reset();
                            break;
                        }
                        case 8:
                        {
                            cout << doubleQ1;
                            break;
                        }
                        }
                    } while (choice3 != 9);
                    break;
                }
                case 3:
                {
                    MyQueue<int> intersec = doubleQ1 && doubleQ2;
                    cout << intersec;
                    break;
                }
                case 4:
                {
                    MyQueue<int> un = doubleQ1 || doubleQ2;
                    cout << un;
                    break;
                }
                }
            } while (choice2 != 5);
            break;
        }
        case 3:
            cout << "Enter size of first queue: " << endl;
            cin >> size1;
            MyQueue<int> charQ1(size1);
            cout << "Enter size of second queue: " << endl;
            cin >> size2;
            MyQueue<int> charQ2(size2);
            do {
                cout << "Choose which queue to do operations on:" << endl;
                cout << "1- First Queue" << endl;
                cout << "2- Second Queue" << endl;
                cout << "3- Compute intersection of the two queues" << endl;
                cout << "4- Compute union of the two queues" << endl;
                cout << "5- Go back to menu 1" << endl;
                cin >> choice2;
                switch (choice2) {
                case 1:
                {
                    do {
                        cout << "Choose an operation:" << endl;
                        cout << "1- Add item to queue" << endl;
                        cout << "2- Delete an item from queue" << endl;
                        cout << "3- Get size of queue" << endl;
                        cout << "4- Get number of items in queue" << endl;
                        cout << "5- Get item in front" << endl;
                        cout << "6- Get item at the end" << endl;
                        cout << "7- Reset queue" << endl;
                        cout << "8- Print queue" << endl;
                        cout << "9- Go back to menu 2" << endl;
                        cin >> choice3;
                        switch (choice3) {
                        case 1:
                        {
                            cout << "Enter number of items to enter: " << endl;
                            int num;
                            cin >> num;
                            cout << "Enter items to add: " << endl;
                            while (num != 0) {
                                cin >> charQ1;
                                num--;
                            }
                            break;
                        }
                        case 2:
                        {
                            int x = charQ1.dequeue();
                            cout << "item that was removed is = ";
                            cout << x << endl;
                            break;
                        }
                        case 3:
                        {
                            cout << "size = " << charQ1.getSize() << endl;
                            break;
                        }
                        case 4:
                        {
                            cout << "number of items in queue = " << charQ1.getCount() << endl;
                            break;
                        }
                        case 5:
                        {
                            cout << charQ1.getHead() << endl;
                            break;
                        }
                        case 6:
                        {
                            cout << charQ1.getTail() << endl;
                            break;
                        }
                        case 7:
                        {
                            charQ1.reset();
                            break;
                        }
                        case 8:
                        {
                            cout << charQ1;
                            break;
                        }
                        }
                    } while (choice3 != 9);
                    break;
                }
                case 2:
                {
                    do {
                        cout << "Choose an operation:" << endl;
                        cout << "1- Add item to queue" << endl;
                        cout << "2- Delete an item from queue" << endl;
                        cout << "3- Get size of queue" << endl;
                        cout << "4- Get number of items in queue" << endl;
                        cout << "5- Get item in front" << endl;
                        cout << "6- Get item at the end" << endl;
                        cout << "7- Reset queue" << endl;
                        cout << "8- Print queue" << endl;
                        cout << "9- Go back to menu 2" << endl;
                        cin >> choice3;
                        switch (choice3) {
                        case 1:
                        {
                            cout << "Enter number of items to enter: " << endl;
                            int num;
                            cin >> num;
                            cout << "Enter items to add: " << endl;
                            while (num != 0) {
                                cin >> charQ2;
                                num--;
                            }
                            break;
                        }
                        case 2:
                        {
                            int x = charQ2.dequeue();
                            cout << "item that was removed is = ";
                            cout << x << endl;
                            break;
                        }
                        case 3:
                        {
                            cout << "size = " << charQ2.getSize() << endl;
                            break;
                        }
                        case 4:
                        {
                            cout << "number of items in queue = " << charQ2.getCount() << endl;
                            break;
                        }
                        case 5:
                        {
                            cout << charQ2.getHead() << endl;
                            break;
                        }
                        case 6:
                        {
                            cout << charQ2.getTail() << endl;
                            break;
                        }
                        case 7:
                        {
                            charQ2.reset();
                            break;
                        }
                        case 8:
                        {
                            cout << charQ1;
                            break;
                        }
                        }
                    } while (choice3 != 9);
                    break;
                }
                case 3:
                {
                    MyQueue<int> intersec = charQ1 && charQ2;
                    cout << intersec;
                    break;
                }
                case 4:
                {
                    MyQueue<int> un = charQ1 || charQ2;
                    cout << un;
                    break;
                }
                }
            } while (choice2 != 5);
            break;
        }
    } while (choice1 != 4);

    //MyQueue<int> q1(5);
    //q1.enqueue(1);
    //q1.enqueue(4);

    //MyQueue<int> q2(2);
    //q2.enqueue(2);
    //q2.enqueue(1);

    //MyQueue<int> _union = q1 || q2;
    //cout << _union;

    //MyQueue<int> intersection = q1 && q2;
    ////cout << intersection;

    //MyQueue<double>* q3 = new MyQueue<double>();
    //q3->enqueue(1.1);
    //q3->enqueue(5.1);

    //double x = q3->dequeue();
    ////cout << x;
}
