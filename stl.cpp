#include <bits/stdc++.h>
using namespace std;

// pairs
void explainpair() {
    // simple pair
    pair<int, int> p1 = {1, 3};
    cout << p1.first << " " << p1.second << endl;

    // nested pair
    pair<int, pair<int,int>> p2 = {1, {3, 4}};
    cout << p2.first << " " << p2.second.second << " " << p2.second.first << endl;

    // array of pairs
    pair<int,int> arr[] = {{1,2}, {2,5}, {5,1}};
    cout << arr[1].second << endl;
}

#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

void explainVector() {
    cout << "===== VECTOR DEMONSTRATION =====\n\n";

    // -------------------------------------------------
    // 1. Basic Operations: push_back() vs emplace_back()
    // -------------------------------------------------
    cout << "--- 1. Basic Operations ---\n";
    vector<int> vi;
    vi.push_back(10);      // Adds 10
    vi.emplace_back(20);   // Adds 20
    cout << "Vector vi: ";
    for (int x : vi) cout << x << " ";
    cout << "\n\n";

    // -------------------------------------------------
    // 2. Vector of Pairs
    // -------------------------------------------------
    cout << "--- 2. Vector of Pairs ---\n";
    vector<pair<int,int>> vp;
    vp.push_back({1, 2});          // Using push_back with initializer list
    vp.emplace_back(3, 4);         // emplace_back is more efficient
    cout << "Vector of pairs: ";
    for (auto &p : vp) cout << "(" << p.first << "," << p.second << ") ";
    cout << "\n\n";

    // -------------------------------------------------
    // 3. Fixed Size Initialization
    // -------------------------------------------------
    cout << "--- 3. Fixed Size Initialization ---\n";
    vector<int> v1(5, 100);  // {100,100,100,100,100}
    vector<int> v2(5);       // {0,0,0,0,0}
    vector<int> v3(v1);      // Copy of v1
    cout << "v1: ";
    for (int x : v1) cout << x << " ";
    cout << "\n\n";

    // -------------------------------------------------
    // 4. Iterators
    // -------------------------------------------------
    cout << "--- 4. Iterator Examples ---\n";
    vector<int> v = {10, 20, 30, 40, 50};

    // begin(), end()
    auto it = v.begin();   // Points to 10
    cout << "First element: " << *it << "\n";
    it++; // Now points to 20
    cout << "After increment: " << *it << "\n";

    // Move iterator safely
    if (distance(it, v.end()) > 2) {
        it += 2; // Moves to 40
        cout << "After moving +2: " << *it << "\n";
    }

    // end() points past last element
    auto itEnd = v.end();
    itEnd--; // Now at last element
    cout << "Last element using end(): " << *itEnd << "\n";

    // rbegin() points to last element
    auto itR = v.rbegin();
    cout << "First element in reverse (rbegin): " << *itR << "\n\n";

    // -------------------------------------------------
    // 5. Access Elements
    // -------------------------------------------------
    cout << "--- 5. Access Elements ---\n";
    cout << "First element: " << v[0] << " or " << v.at(0) << "\n";
    cout << "Last element (back): " << v.back() << "\n\n";

    // -------------------------------------------------
    // 6. Looping
    // -------------------------------------------------
    cout << "--- 6. Looping ---\n";

    cout << "Using iterator: ";
    for (auto itr = v.begin(); itr != v.end(); itr++) cout << *itr << " ";
    cout << "\n";

    cout << "Range-based loop: ";
    for (auto val : v) cout << val << " ";
    cout << "\n\n";

    // -------------------------------------------------
    // 7. Erase Elements
    // -------------------------------------------------
    cout << "--- 7. Erase Examples ---\n";
    v.erase(v.begin() + 1); // Removes 20
    cout << "After removing 2nd element: ";
    for (int x : v) cout << x << " ";
    cout << "\n";

    if (v.size() > 3) {
        v.erase(v.begin() + 1, v.begin() + 3); // Removes 30, 40
    }
    cout << "After erasing range [1,3): ";
    for (int x : v) cout << x << " ";
    cout << "\n\n";

    // -------------------------------------------------
    // 8. Other Useful Functions
    // -------------------------------------------------
    cout << "--- 8. Other Functions ---\n";
    cout << "Size: " << v.size() << "\n";
    cout << "Capacity: " << v.capacity() << "\n";

    v.resize(5, 99); // Resize to 5, fill new elements with 99
    cout << "After resize: ";
    for (int x : v) cout << x << " ";
    cout << "\n";

    v.clear();
    cout << "After clear, size = " << v.size() << "\n";
    cout << "\n===== END OF EXAMPLES =====\n";
}



    void explainVector() {
    cout << "=== VECTOR OPERATIONS ===\n\n";

    // ------------------- INSERT EXAMPLES -------------------
    cout << "--- Insert Examples ---\n";
    vector<int> v(2, 100); // {100, 100}
    
    v.insert(v.begin(), 300); // Insert 300 at beginning
    // Now: {300, 100, 100}
    
    v.insert(v.begin() + 1, 2, 10); // Insert two 10s at index 1
    // Now: {300, 10, 10, 100, 100}

    vector<int> copy(2, 50); // {50, 50}
    v.insert(v.begin(), copy.begin(), copy.end());
    // Now: {50, 50, 300, 10, 10, 100, 100}

    cout << "Vector after insertions: ";
    for (int x : v) cout << x << " ";
    cout << "\n";

    // ------------------- SIZE EXAMPLE -------------------
    cout << "Size of vector: " << v.size() << "\n\n";

    // ------------------- POP_BACK EXAMPLE -------------------
    vector<int> v1 = {10, 20};
    cout << "--- Pop Back Example ---\n";
    v1.pop_back(); // Removes last element
    // Now: {10}
    cout << "After pop_back: ";
    for (int x : v1) cout << x << " ";
    cout << "\n\n";

    // ------------------- SWAP EXAMPLE -------------------
    cout << "--- Swap Example ---\n";
    v1 = {10, 20};
    vector<int> v2 = {30, 40};
    v1.swap(v2);
    // v1 -> {30, 40}, v2 -> {10, 20}
    cout << "After swap:\n";
    cout << "v1: ";
    for (int x : v1) cout << x << " ";
    cout << "\n";
    cout << "v2: ";
    for (int x : v2) cout << x << " ";
    cout << "\n\n";

    // ------------------- CLEAR AND EMPTY -------------------
    cout << "--- Clear and Empty Example ---\n";
    v.clear(); // Removes all elements
    cout << "Is vector empty? " << (v.empty() ? "Yes" : "No") << "\n\n";
}

void explainList() {
    cout << "=== LIST EXAMPLE ===\n\n";

    list<int> ls;
    ls.push_back(1);
    ls.emplace_back(2);
    ls.push_front(0);
    ls.emplace_front(-1);

    cout << "List elements: ";
    for (int x : ls) cout << x << " ";
    cout << "\n\n";
}


void explainstack(){
    stack<int>st;
    st.push(1); //{1}
    st.push(2); //{2,1}
    st.push(3); //{3,2,1}
    st.push(3); //{3,3,2,1}
    st.emplace(5); //{5,3,3,2,1}

    cout<<st.top(); // print 5 "** st [2] is invalid **"

    st.pop(); //st looks like {3,3,2,1}

    cout<< st.top(); // 3

    cout<< st.size(); //4

    cout<<st.empty();

    stack<int>st1,st2;
    st1.swap(st2);
}

void explainqueue() {
    queue<int>q;
    q.push(1); // {1}
    q.push(2); //{1,2}
    q.emplace(4); //{1,2,4}

    q.back() += 5;

    cout <<q.back(); //print 9

    //q is {1,2,9}
    cout<<q.front(); // print 1 

    q.pop (); // {2,9}

    cout<<q.front(); // print 2

    //size swap empty same as stack
}

void explainPQ(){
    priority_queue<int>pq;

    pq.push(5); //{5}
    pq.push(2); //{5,2}
    pq.push(8); //{8,5,2}
    pq.emplace(10); //{10,8,5,2}

    cout<< pq.top(); //print 10
    
    pq.pop(); //{8,5,2}

    cout << pq.top(); //print 8

    // size swap empty function same as others 

    // minimum heap
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(5);  //{5}
    pq.push(2);  //{2,5}
    pq.push(8);  //{2,5,8}
    pq.emplace(10); //{2,5,8,10}

    cout<<pq.top(); // print 2

}

void explainset(){
    set<int>st;
    st.insert(1); //{1}
    st.emplace(2); //{2}
    st.insert(2); //{1,2}
    st.insert(4); //{1,2,4}
    st.insert(4); //{1,2,3,4}

    // Functionality of insert in vector
    // can be used also,that only increases
    // efficiency

    // begin(), end(),rbegin(),rend(),size(),
    // empty()and swap() are same as those of above

    //{1,2,3,4,5}
    auto it =st.find(3);

    //{1,2,3,4}
    auto it = st.find(6);

    //{1,4}
    st.erase(5); // erase 5 // takes logarithimic time

    int cnt = st.count(1);

    auto it = st.find(3);
    st.erase(it);  // its take constant time

    // {1,2,3,4,5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1,it2); // after erase {1,4,5} [first,last]

    // lower_bound() and upper_bound() function works in the same way 
    // as in vector it does .

    // This is the  syntax
    auto it = st.lower_bound(2);

    auto it =st.upper_bound(3);

}

void explainMultiset(){
    // Everything is same
    // only stores duplicate elements also

multiset<int>ms;
ms.insert(1); //{1}
ms.insert(1); //{1,1}
ms.insert(1); //{1,1,1}

ms.erase(1); // all 1's erased

int cnt =ms.count(1);

// only a single one erased
ms.erase(ms.find(1));

ms.erase(ms.find(1), std::next(ms.find(1), 2));
// rest all the function same as set
}

void explainUset (){
    unordered_set<int> st;
    // lower_bound and upper bound function 
    // does not works,rest all functions are same
    // as above,it does not stores in any
    // particular order it has better complexity
    // than set in most cases, except some when collision happens

}


   void explainMap() {
    map<int, int> mpp;

    // insert elements
    mpp[1] = 2;
    mpp.emplace(3, 1);
    mpp.insert({2, 4});

    // iterate and print
    for (auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }

    // access keys
    cout << mpp[1] << endl;  // prints 2
    cout << mpp[5] << endl;  // inserts {5,0} automatically

    // find key
    auto it1 = mpp.find(3);
    if (it1 != mpp.end()) {
        cout << "Found key 3 with value " << it1->second << endl;
    }

    auto it2 = mpp.find(5);
    if (it2 != mpp.end()) {
        cout << "Found key 5 with value " << it2->second << endl;
    }

    // lower and upper bounds
    auto lb = mpp.lower_bound(2); // first key >= 2
    if (lb != mpp.end()) cout << "Lower bound of 2: " << lb->first << endl;

    auto ub = mpp.upper_bound(3); // first key > 3
    if (ub != mpp.end()) cout << "Upper bound of 3: " << ub->first << endl;
}


void explainMultimap(){
    // everything same as map, only it can stor multiple maps
    // only mpp[key] cannot be used here

}

void explainUnorderedMap(){
    // same as set and unordered_set difference.
}

bool comp(pair<int,int>p1, pair<int,int>p2){
    if(p1.second < p2.second){
        return  true;
    }else if (p1.second == p2.second){
        if(p1.first>p2.second) return true;
    }
    return false;

}

#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> p1, pair<int,int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    return p1.first > p2.first; // if second same, sort first descending
}

void explainExtra(){
    int a[] = {5, 2, 8, 1, 4};
    int n = sizeof(a)/sizeof(a[0]);

    sort(a, a+n);                       // sort entire array
    sort(a+2, a+4);                     // sort only elements [2,3]
    sort(a, a+n, greater<int>());       // sort in descending order

    vector<int> v = {10,5,2};
    sort(v.begin(), v.end());           // sort vector

    pair<int,int> p[]={{1,2},{2,1},{4,1}};
    int m = sizeof(p)/sizeof(p[0]);
    sort(p, p+m, comp);                 // custom sort for pairs

    int num = 71;
    int cnt = __builtin_popcount(num);  // count set bits

    long long num2 = 165786578687;
    int cnt2 = __builtin_popcountll(num2); // count set bits for long long

    string s ="123";
    do {
        cout << s << endl;
    } while (next_permutation(s.begin(),s.end()));

    int maxi = *max_element(a,a+n);
    cout << "Max element: " << maxi << endl;
}

int main(){
    
    return 0;
}
