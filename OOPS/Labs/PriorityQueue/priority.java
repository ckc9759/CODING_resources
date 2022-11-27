// Test.java
import java.util.Comparator;
import java.util.PriorityQueue;

public class Test {
    public static void main(String[] args) {
        Comparator<String> comparator = new StringLengthComparator();
        PriorityQueue<String> queue = new PriorityQueue<String>(10, comparator);
        queue.add("short");
        queue.add("very long indeed");
        queue.add("medium");
        while (queue.size() != 0) {
            System.out.println(queue.remove());
        }
    }
}

// StringLengthComparator.java
import java.util.Comparator;

public class StringLengthComparator implements Comparator<String> {
    @Override
    public int compare(String x, String y) {
        // Assume neither string is null. Real code should
        // probably be more robust
        // You could also just return x.length() - y.length(),
        // which would be more efficient.
        if (x.length() < y.length()) {
            return -1;
        }
        if (x.length() > y.length()) {
            return 1;
        }
        return 0;
    }
}
