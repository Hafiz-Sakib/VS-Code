#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using    namespace __gnu_pbds;
using    namespace std;
template<class T> using oset= tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;///ascending
template<class T> using ooset= tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;///duplicate values count
int k, value;
int main()
{
    ooset<int>os;
    
    // 1. insert a number in the list
    os.insert(5);
    os.insert(2);
    os.insert(4);
    
    // 2. delete a given number from the list
    os.erase(5);

    // 3. check if the list is empty
    if(os.empty()){
        cout << "set is empty\n";
    }
    
    // 4. count of a given number(7) in the list
    // unfortunately pbds don't support count() method like set;
    if(os.find(7)==os.end())
        cout << "0\n";
    else cout << "1\n";

    // 5. delete all the numbers from the list, i.e. clear the list
    //os.clear();
    

    // 6. how many distinct numbers in the list
    cout << os.size() << "\n";

    // 7. what is the smallest number in the list
    if(os.size()>0)
        cout << *os.begin() << "\n";

    // 8. what is the greatest number in the list
    if(os.size()>0)
        cout << *os.rbegin() << "\n";
    //or,
    if(os.size()>0)
    {
        auto pos = os.end();
        pos--;
        cout << *pos << "\n";
    }

    // 9. find a given number(7) or say if it is not found
    if(os.find(7)==os.end())
        cout << "not found\n";
    else auto idx = os.find(7);

    // 10. how many numbers are smaller than a given value(7)
    cout << os.order_of_key(7);

    // 11. how many numbers are smaller than or equal to a given value(7)
    int cnt = os.order_of_key(7);
    if(os.find(7)!=os.end()) cnt++;
    cout << cnt << "\n";
    //or,
    cnt = os.order_of_key(8);
    cout << cnt << "\n";

    // 12. how many numbers are greater than a given value(7)
    cout << os.size() - os.order_of_key(8) << "\n";
    
    // 13. how many numbers are greater than or equal to a given value(7)
    cout << os.size() - os.order_of_key(7) << "\n";
    
    // 14. if the given numbers are sorted in ascending order, what is the k'th number
    //5 1 5 2 1 6
//    1 2 5 6
//    0 1 2 3
    
    cout << *os.find_by_order(2) << "\n";

    // 15. if the given numbers are sorted in descending order, what is the k'th number
    // if we use greater<int> 
    cout << *os.find_by_order(k) << "\n";
    
//    or, if numbers are sorted in ascending order
//    1 3 4 6 7
//    0 1 2 3 4 => size-1
//    4 3 2 1 0
    cout << *os.find_by_order(os.size()-1-k) << "\n";

    // 16. delete the k'th smallest number
    os.erase(os.find_by_order(k));

    // 17. delete the k'th greatest number
    
    // if sorted in ascending order
    os.erase(os.find_by_order(os.size()-1-k));
    //or, if sorted in descending order
    os.erase(os.find_by_order(k));
    
    // 18. delete the smallest number from the list
    os.erase(os.begin());
     
    // 19. delete the greatest number from the list
    os.erase(os.rbegin());

    // 20. print all the numbers in ascending order
    for(auto itr=os.begin();itr!=os.end();itr++)
        cout << *itr << " ";
    cout << "\n";
    
    // 21. print all the numbers in descending order
    for(auto itr=os.rbegin();itr!=os.rend();itr++)
        cout << *itr << " ";
    cout << "\n";
      
    // 22. what is the smallest number which is greater than or equal to a given number(7) 
    
    cout << *os.lower_bound(7) << "\n";
    
      
    // 23. what is the smallest number which is greater than to a given number(7)
    cout << *os.upper_bound(7) << "\n";

    return 0;
}
