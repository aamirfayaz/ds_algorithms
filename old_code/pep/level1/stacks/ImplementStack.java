package pep.level1.stacks;

/* Java program to implement basic stack
operations */
class Stack {
	static final int MAX=1000;
	int top;
	int a[] = new int[MAX];

	boolean isEmpty() {
		return (top < 0);
	}

	Stack() {
		top=-1;
	}

	boolean push(int x) {
		if(top >= (MAX-1)) {
			System.out.println("Stack Overflow");
			return false;
		} else {
			a[++top] = x;
			System.out.println(x + " pushed into stack");
			return true;
		}
	}

	int pop() {
		if(top < 0) {
			System.out.println("Stack UnderFlow");
			return 0;
		} else {
			return a[top--];
		}
	}

	int peek() {
		if(top < 0) {
			System.out.println("Stack UnderFlow");
			return 0;
		} else {
			return a[top];
		}
	}

	 //check this out whiile infinte loop
	void printStackRecursion(int i) {
		if(i > top) {
			return;
		} else {
			System.out.println(a[i]);
			int x = i + 1;
			printStackRecursion(x);
		}
	}

	void printStackIterative() {
		// System.out.println(a[0]);
		// System.out.println(a[1]);
		// System.out.println(a[2]);
		// System.out.println(top);
		
        int i = 0;
		while(i <= top) {
			System.out.println(a[i]);
			i++;
		}
	}
}

 public class ImplementStack {
	public static void main(String args[])
	{
		 Stack s = new Stack();
		s.push(10);
		s.push(20);
		s.push(30);
		s.printStackRecursion(0);
	//	s.printStackIterative();
		System.out.println(s.pop() + " Popped from stack");
	}
}

