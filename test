#include <iostream>
#include <map>
#include <queue>
#include <string>
using namespace std;

map<string, int> warehouse;
queue <string> output;

void add(string name, int qty) {
    warehouse[name] += qty;
}

void removeItem(string name, int qty) {
    if (warehouse[name] <= qty) {
        output.push("Not enough stock for " + name);
        warehouse.erase(name);
    } else {
        warehouse[name] -= qty;
        if (warehouse[name] == 0) {
            warehouse.erase(name);
        }
    }
}

void check() {
    bool found = false;
    for (auto & item : warehouse) {
        if (item.second < 5) {
            output.push(item.first);
        }
    }
    if (!found) {
        output.push("All stocks are sufficient");
    }
}

void report() {
    for (auto & item : warehouse) {
        output.push(item.first + ": " + to_string(item.second));
    }
}

int main() {
    string  command;
    while (cin >> command) {
        if (command == "ADD") {
            string name; int qty;
            cin >> name >> qty;
            add(name, qty);
        }
        else if (command == "REMOVE") {
            string name; int qty;
            cin >> name >> qty;
            removeItem(name, qty);
        }
        else if (command == "CHECK") {
            check();
        }
        else if (command == "REPORT"){
            report();
        }
        else if (command == "END") {
            break;
        }
    }

    while (!output.empty()) {
        cout << output.front() << "\n";
        output.pop();
    }

    return 0;
}