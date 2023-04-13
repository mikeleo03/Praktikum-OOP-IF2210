import java.util.ArrayList;

public class Queue<T> {
    private ArrayList<T> data;
    private int lastElmIdx, size;
    private final static int DEFAULT_QUEUE_SIZE = 500;

    //Instantiate dengan size default
    public Queue()  {
        this.data = new ArrayList<T>();
        this.size = DEFAULT_QUEUE_SIZE;
        this.lastElmIdx = 0;
    }

    //Instantiate dengan size = n
    public Queue(int n) {
        this.data = new ArrayList<T>();
        this.size = n;
        this.lastElmIdx = 0;
    }

    //Copy queue
    public Queue(final Queue<T> q) {
        this.data = new ArrayList<T>();
        for (T data : q.data) {
            this.data.add(data);
        }
        this.size = q.size;
        this.lastElmIdx = q.lastElmIdx;
    }

    public void push(T t) {
        if (!isFull()) {
            this.data.add(t);
            this.lastElmIdx++;
        }
    }  

    public T pop() {
        T popped = null;
        if (!isEmpty()) {
            popped = this.data.get(0);
            this.data.remove(0);
            this.lastElmIdx--;
        }
        return popped;
    }

    public boolean isEmpty() {
        return this.data.size() == 0;
    }

    public boolean isFull() {
        return this.data.size() == this.size;
    }
}