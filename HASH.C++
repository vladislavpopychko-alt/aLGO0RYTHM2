
   import java.util.PriorityQueue;

    class BinaryHeap {
        private PriorityQueue<Integer> heap;

        public BinaryHeap() {
            heap = new PriorityQueue<>();
        }

        public void insert(int key) {
            heap.add(key);
        }

        public Integer extractMin() {
            return heap.poll();
        }
    }
