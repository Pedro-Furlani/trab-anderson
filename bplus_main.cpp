#include <bits/stdc++.h>
#include "bplus.h"

using namespace std;

void print_bool(bool cond) {
    if (cond) {
        std::cout << "True\n";
    } else {
        std::cout << "False\n";
    }
}

int main() {
    BPlusTree<int> bpt(3);

    bpt.insert(5);
	bpt.insert(15);
	bpt.insert(25);
	bpt.insert(35);
	bpt.insert(45);
	bpt.insert(55);
	bpt.insert(40);
	bpt.insert(30);
	bpt.insert(7);
	bpt.insert(6);
	bpt.insert(10);
	bpt.insert(41);
    bpt.insert(42);
    bpt.insert(23);
    bpt.insert(1);
	bpt.insert(100);

	bpt.bpt_print();

	cout << "\n\n";

    bpt.display(bpt.getroot());

    cout << "\n\n";

    bpt.remove(23);
    bpt.remove(10);
    bpt.remove(7);
    bpt.remove(25);

    if(bpt.search(7)){
        cout<<"ta aqui oh \n";
    }
    else cout<<"ta nao, suave \n";

    bpt.display(bpt.getroot());

    return 0;
}