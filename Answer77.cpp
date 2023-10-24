#include <stack>

void deleteMiddle(stack<int> &input, int currentidx, int middleidx) {
    if (currentidx== middleidx) {
        input.pop(); 
        return;
    }

    int temp = input.top();
    input.pop();
    deleteMiddle(input, currentidx + 1, middleidx);  
    input.push(temp);
}

void delete_middle_elem(stack<int> &input){
    if (input.empty()){
        return;
    }
     int size = input.size();
     int middleidx = (size / 2); 
     deleteMiddle(input, 0, middleidx);
}
