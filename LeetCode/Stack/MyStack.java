package Stack;

public class MyStack {

    private int capacity;
    private int[] arr;
    private int top;

    
    public MyStack(){
        this(15);
    }

    public MyStack(int size){

        arr = new int[size];
        capacity = size;
        top = -1;
    }

    public int size(){
        return top + 1;
    }

    public int top(){

        if (!empty()){
            return arr[top];
        }
        else
            System.exit(-1);;

        return -1;
    }

    public int get(int x){

        if (!empty()){
            return arr[x];
        }
        else
            System.exit(-1);

        return -1;
    }

    public void push(int x){
        
        if (isFull()){
            System.out.println("\nOverflow\nProgram Terminated\n");
            System.exit(-1);
        }
        System.out.println("Inserting " + x);
        arr[++top] = x;
    }

    public int pop(){

        if (empty()){
            System.out.println("Underflow\nProgram Terminated");
            System.exit(-1);
        }
        System.out.println("Removing " + top());

        return arr[top--];
    }

    public boolean isFull(){
        return top == capacity - 1;
    }

    public boolean empty(){
        return top == -1;
    }


    public static void main(String[] args) {
        
        MyStack stack = new MyStack();

        stack.push(8);
        stack.push(12);
        stack.push(9);
        stack.push(1);
        stack.push(0);
        stack.push(800);

        System.out.println("peek value is: " + stack.top());

        stack.pop();

        System.out.println("size of stack is: " + stack.size());


        for (int i=0;i<stack.size();i++)
        System.out.print(stack.get(i)+" ");
        

        
    }
}
