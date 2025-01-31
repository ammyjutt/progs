//using namespace std; 
//#include <iostream>
//#include <queue>
//
//
//
//#pragma GCC optimize ("O3")
//
//class MedianFinder {
//
//    priority_queue<int> left_heap;
//    priority_queue< int, vector<int>, greater<int> > right_heap;
//
//    int left_minus_right;
//
//public:
//    MedianFinder() {
//
//        left_minus_right = 0;
//
//    }
//
//    void addNum(int num) {
//        if (left_heap.size() == 0)
//        {
//            left_heap.push(num);
//            left_minus_right++;
//        }
//
//        else if (right_heap.size() == 0 and num > left_heap.top())
//        {
//            right_heap.push(num);
//            left_minus_right--;
//        }
//
//        else if (num <= left_heap.top())
//        {
//            left_heap.push(num);
//            left_minus_right++;
//        }
//        else
//        {
//            right_heap.push(num);
//            left_minus_right--;
//        }
//
//        if (left_minus_right > 1)
//        {
//            right_heap.push(left_heap.top());
//            left_heap.pop();
//            left_minus_right -= 2;
//        }
//        else if (left_minus_right == -1)
//        {
//            left_heap.push(right_heap.top());
//            right_heap.pop();
//            left_minus_right += 2;
//        }
//
//    }
//
//    double findMedian() {
//        if (left_minus_right == 0)
//            return (double(left_heap.top()) + double(right_heap.top())) / 2;
//        return left_heap.top();
//    }
//};
//
///**
// * Your MedianFinder object will be instantiated and called as such:
// * MedianFinder* obj = new MedianFinder();
// * obj->addNum(num);
// * double param_2 = obj->findMedian();
// */