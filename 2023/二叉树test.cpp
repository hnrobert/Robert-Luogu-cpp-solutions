#include<iostream>
#include<cmath>
#include<iomanip>
#include <cstddef>
using namespace std;

int del_data[11][2];
int m, n;

struct node {
    struct node* son[2];
    int depth;
};

// Function to create a new node
node* createNode(int depth) {
    node* newNode = new node;
    newNode->depth = depth;
    newNode->son[0] = newNode->son[1] = NULL;
    return newNode;
}

// Function to fill the tree
void fill(int d, int num, node*& g) {
    if (d) {
        g = createNode(m - d + 1);
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < n; j++) {
                if (del_data[j][0] == d + 1 && del_data[j][1] == 2 * num - 1 + i) {
                    g->son[i] = createNode(0); // Create a leaf node
                }
                else {
                    fill(d - 1, 2 * num - 1 + i, g->son[i]);
                }
            }
        }
    }
    else {
        g = createNode(0);
    }
}

// Function to draw and print the tree's depth
void draw(node* root, int indent = 0) {
    if (root) {
        if (root->son[1]) {
            draw(root->son[1], indent + 4);
        }
        if (indent) {
            cout << setw(indent) << ' ';
        }
        if (root->son[1]) cout << "o";
        else cout << "o";
        cout << " (" << root->depth << ")" << endl;
        if (root->son[0]) {
            draw(root->son[0], indent + 4);
        }
    }
}


int main() {
    cin >> m >> n;
    for (int i = 0; i < n; i++) {
        cin >> del_data[i][0] >> del_data[i][1];
    }
    
    node* root = NULL;
    fill(m, 1, root);

    // Print the depth of the tree
    draw(root);

    // Clean up memory (you should add this to your code)
    // deleteTree(root);

    return 0;
}

