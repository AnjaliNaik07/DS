#include <iostream><br>
using namespace std;<br>
  // Structure of Linked Lists<br>
struct info {<br>
    int data;<br>
    info* next;<br>
};<br>
  // Driver Code<br>
int main()<br>
{<br>
    int size = 10;<br>
  // Pointer To Pointer Array<br>
    info** head;<br>
   // Array of pointers to info struct<br>
    // of size
    head = new info*[size];<br>
  
    // Initialize pointer array to NULL<br>
    for (int i = 0; i < size; ++i) {<br>
        *(head + i) = NULL;<br>
    }<br>
  // Traverse the pointer array<br>
    for (int i = 0; i < size; ++i) {<br>
  // To track last node of the list<br>
        info* prev = NULL;<br>
  // Randomly taking 4 nodes in each<br>
        // linked list<br>
        int s = 4;<br>
   while (s--) {<br>
   // Create a new node<br>
            info* n = new info;<br>
 // Input the random data<br>
            n->data = i * s;<br>
            n->next = NULL;<br>
  // If the node is first<br>
            if (*(head + i) == NULL) {<br>
                *(head + i) = n;<br>
            }<br>
            else {<br>
                prev->next = n;<br>
            }<br>
            prev = n;<br>
        }<br>
    }<br>
  // Print the array of linked list<br>
    for (int i = 0; i < size; ++i) {<br>
        info* temp = *(head + i);<br>
  // Linked list number<br>
        cout << i << "-->\t";<br>
  // Print the Linked List<br>
        while (temp != NULL) {<br>
            cout << temp->data << " ";<br>
            temp = temp->next;<br>
        }<br>
  cout << '\n';<br>
    }<br>
  return 0;<br>
}<br>
