#include <iostream>
#include <list>
#include <set>
#include <unordered_set>
#include <map>
using namespace std;

void explainPair()
{
    pair<int, int> p = {1, 2};
    cout << p.first << " " << p.second << endl;
    pair<int, char> p1 = {1, 'a'};
    cout << p1.first << " " << p1.second << endl;
    pair<pair<int, int>, int> p2 = {{1, 2}, 3};
    cout << p2.first.first << " " << p2.first.second << " " << p2.second << endl;
}

void explainVector()
{
    // for size we use size()
    // for giving the input we can either use push_back() or emplace_back()
    vector<int> v = {1, 2, 3, 4};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    v.push_back(5);
    cout << v[4] << endl;

    // iterator
    vector<int>::iterator it = v.begin();
    // it returns to the refrence of the first element
    cout << *it << endl;
    // similarly if we use v.end() -> it doesn't point to the last element, it points to the location after that last element.
}

void explainList()
{
    // list allows you to push in the front. (push_front)
    list<int> ls = {4, 5};
    ls.push_front(7);
    for (auto it : ls)
    {
        cout << it << " ";
    }
}

void explainStack()
{
    // lifo -> last in first out
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
}

void explainQueue()
{
    // fifo -> first in first out
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    while (q.empty() == false)
    {
        cout << q.front() << " ";
        q.pop();
    }
}

void explainPQ()
{
    // stores the highest element at the top
    priority_queue<int> pq;
    pq.push(7);
    pq.push(18);
    pq.push(3);
    pq.push(4);
    pq.push(5);
    while (pq.empty() == false)
    {
        cout << pq.top() << " ";
        pq.pop();
    }
}

void explainSet()
{
    // stores only unique element
    // and in ascending order
    set<int> s;
    s.insert(1);
    s.insert(4);
    s.insert(5);
    s.insert(13);
    s.insert(2);
    for (auto it : s)
    {
        cout << it << " ";
    }
    // returns an iterator that points to an element
    // that is >= number given
    auto lb = s.lower_bound(14);
    // cout << *lb << endl;
    // it you pass a element which is bigger than all the elements then the iterator will refer to the end of the set.
    if (lb == s.end())
    {
        cout << "end" << endl;
    }
    // and upper_bound() returns -> elements which are bigger than the given element.
}

void explainMultiSet()
{
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.insert(4);
    ms.insert(15);
    auto it = ms.find(1);
    cout << *it << endl;
    // ms.erase(1); -> will erase every occurence of 1
    for (auto it : ms)
    {
        cout << it << " ";
    }
}

void explainUnorderedSet()
{
    // unique elements but no order
    unordered_set<int> us;
    us.insert(1);
    us.insert(2);
    us.insert(3);
    us.insert(4);
    us.insert(5);
    for (auto it : us)
    {
        cout << it << " ";
    }
    auto it = us.find(1); // -> 0(1) extremely rare 0(N)
}

void explainMap()
{
    // stores key value pair -> asceding order for keys
    map<int, string> mpp;
    mpp[1] = "abc";
    mpp[2] = "def";
    mpp.insert({3, "naksh"});
    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << endl;
    }
    auto it = mpp.find(3); // returns adress/ refrence to the
    cout << (*it).first << " " << (*it).second << endl;

    // lower bound is same greater than equal to <= than the provided element
    // upper bound is greater than only < than the provided value
}

void explainUnorderedMap()
{
    // similar to map it's just the indexing is not sorted
    unordered_map<int, string> mpp;
    mpp[1] = "abc";
    mpp[2] = "def";
    mpp.insert({3, "naksh"});
    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << endl;
    }
    // tc is mostly 0(1) for 
}
int main()
{
    // explainPair();
    // explainVector();
    // explainList();
    // explainStack();
    // explainQueue();
    // explainPQ();
    // explainSet();
    // explainMultiSet();
    // explainUnorderedSet();
    // explainMap();
    explainUnorderedMap();

    return 0;
}