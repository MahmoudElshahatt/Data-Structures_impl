using System;

namespace Stack
{
    class Program
    {
        class Node
        {
            int data;
            Node next;
            public int Data
            {
                get { return data; }
            }
            public Node Next
            {
                get { return next; }
            }
            public Node(int data, Node next)
            {
                this.data = data;
                this.next = next;
            }
        }

        class Stack
        {
            public Node head;
            int count = 0;
            public void push(int item)
            {
                head = new Node(item, head);
                count++;
            }
            public int size()
            {
                return count;
            }
            public bool isEmpty
            {
                get { return count == 0; }
            }
            public void print()
            {
                if (isEmpty)
                {
                    Console.WriteLine("the stack is empty");
                    return;
                }
                else
                {
                    Node current = head;
                    while (current != null)
                    {
                        Console.WriteLine(current.Data);
                        current = current.Next;
                    }
                }
            }
            public int Pop()
            {
                if (isEmpty)
                {
                    Console.WriteLine("the stack is empty");
                }
                int x = head.Data;           
                head = head.Next;
                count--;
                return x;
            }
            public int top()
            {
                if (isEmpty)
                {
                    Console.WriteLine("is empty");
                }
                return head.Data;
            }
        }
        static void Main(string[] args)
        {
            Stack stack = new Stack();
            stack.push(10);
            stack.push(6);
            stack.push(1);
            stack.push(7);
            stack.push(8);
            stack.push(13);
            Console.WriteLine(stack.size());
            Console.WriteLine(stack.isEmpty);
            Console.WriteLine("--------------------------------------");
            stack.print();
            stack.Pop();
            Console.WriteLine("--------------------------------------");
            stack.print();
            Console.WriteLine("--------------------------------------");
            Console.WriteLine(stack.top());
            Console.WriteLine("--------------------------------------");
            
        }
    }
   
}
