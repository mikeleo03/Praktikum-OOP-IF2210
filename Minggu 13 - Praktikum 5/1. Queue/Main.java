public class Main {
    // javac *.java
    // java App
    
    public static void main(String[] args) throws Exception {
        Queue<Integer> queue1 = new Queue<Integer>();
        queue1.push(3);
        queue1.push(2);
        System.out.println(queue1.isFull());
        queue1.push(3);
        while(!queue1.isEmpty()) {
            System.out.println(queue1.pop());
        }
        System.out.println(queue1.isEmpty());

        Queue<String> queue2 = new Queue<String>();
        queue2.push("makan");
        queue2.push("pisang");
        String pop = queue2.pop();
        System.out.println(pop);
        System.out.println(queue2.isFull());
        System.out.println(queue2.isEmpty());
        while(!queue2.isEmpty()) {
            System.out.println(queue2.pop());
        }
    }
}