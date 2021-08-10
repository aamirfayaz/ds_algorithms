package pep.level1.stacks;

public class BasicStack {



    public static void main(String [] args) {
        System.out.println("Stack..");
        
        java.util.Stack<Integer> st = new java.util.Stack<>();

        st.push(10);
        st.push(20);
        System.out.println(st);
        st.push(30);
        st.push(40);
        st.push(50);
        System.out.println(st);
        System.out.println(st.size());
        System.out.println(st.peek());

        st.pop();
        st.pop();
        System.out.println(st.size());
        System.out.println(st);
        System.out.println(st.peek());

    }
}