![image](https://github.com/ckc9759/CODING_resources/assets/95117634/a374c7d1-ea70-459c-a484-90c3dc28163e)### Linked List

---

### TO DO :

1. https://www.geeksforgeeks.org/top-20-linked-list-interview-question/
2. https://www.interviewbit.com/linked-list-interview-questions/
3. https://www.geeksforgeeks.org/data-structures/linked-list/

---

### Points of discussion / doubts

1. Middle element
```c
2 approaches
1. Naive approach - Find n and then return n/2 and n/2+1
2. Fast and slow pointer
```

2. Deleting a node
```c
used curr node as prev and deleted the next pointer shifting accordingly.
```

3. Binary to Decimal
```c
Traverse the linked list and concatenate the binary string.
```

4. Delete multiple nodes in a linked list
```c
Used stack implementation or a reverse based approach, (MARKED)
```

5. Swap Nodes in Pair
```c
Use recursive approach, 
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL||head->next==NULL){
            return head;
        }
        ListNode* temp=head->next;
        head->next=swapPairs(head->next->next);
        temp->next=head;
        return temp;
    }
};
```


