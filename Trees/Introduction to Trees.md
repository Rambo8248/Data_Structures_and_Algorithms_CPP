Tree is one data structure that's quite often used to represent hierarchical data. For example. let's say we want to show employees in an organization and their positions in organizational hierarchy, then we can show it something like this. Let's say the following example is organization hierarchy of some company.

![](https://github.com/andy489/Data_Structures_and_Algorithms_CPP/blob/master/assets/Introduction%20to%20Trees%2001.png)

We have to look at the structure upside down and then it will resemble a real tree. The root is at top and we are branching out in downward direction. Logical representation of tree data structure is always like this. Root at top and branching out in downward direction. Tree is an efficient way of storing and organazing data that is naturally hierarchical, but this is not the only application of tree in computer science. Before we proceed to other applications and implementation, let's first define tree as a logical model.

Tree data structure can be defined as a collection of entities called nodes linked together to simulate a hierarchy. *Tree is a non-linear data structure, it's a hierarchical structure*. The topmost node in the tree is called root of the tree. Each node will contain some data and this can be data of any type. In the above tree that we have displayed - data is the name of position (designation) in the organization. We can have also an object with two (or more) - one to store name of person and another to store designation. So, each node will contain some data and may contain link or reference to some other nodes that can be called its children.

The HTML source code and the tree accompanying the source illustrate another hierarchy. Notice that each level of the tree corresponds to a level of nesting inside the HTML tags. The first tag in the source is <img src="https://latex.codecogs.com/svg.latex?\Large&space;<html>"> and the last is <img src="https://latex.codecogs.com/svg.latex?\Large&space;</html>"> All the rest of the tags in the page are inside the pair. If you check, you will see that this nesting property is true at all levels of the tree.

Here is the tree that corresponds to each of the HTML tags used to create the page.

![](https://github.com/andy489/Data_Structures_and_Algorithms_CPP/blob/master/assets/Introduction%20to%20Trees%2002.png)

### Definitions:

Now that we have looked at examples of trees, we will formally define a tree and its components.

#### Node

A node is a fundamental part of a tree. It can have a unique name, which we sometimes call the “key.” A node may also have additional information, which we refer to in this book as the “payload.” While the payload information is not central to many tree algorithms, it is often critical in applications that make use of trees.

#### Edge

An edge is another fundamental part of a tree. An edge connects two nodes to show that there is a relationship between them. Every node other than the root is connected by exactly one incoming edge from another node. Each node may have several outgoing edges.

#### Root

The root of the tree is the only node in the tree that has no incoming edges. In a file system, / is the root of the tree. In an HTML document, the <html> tag is the root of the tree.

#### Path

A path is an ordered list of nodes that are connected by edges. For example, html→body→h2→a is a path.

#### Children

The set of nodes *C* that have incoming edges from the same node are said to be the children of that node. In our example, nodes ul, h1, and h2 are the children of node body.

#### Parent

A node is the parent of all the nodes to which it connects with outgoing edges. In our example the node head is the parent of nodes meta and title.

#### Sibling

Nodes in the tree that are children of the same parent are said to be siblings. The nodes meta and title are siblings in the HTML tags system tree.

#### Subtree

A subtree is a set of nodes and edges comprised of a parent and all the descendants of that parent.

#### Leaf Node

A leaf node is a node that has no children. For example, 'a' is a leaf node.

#### Level / Depth

The level of a node *n* is the number of edges on the path (i.e. lenght of path) from the root node to *n*. For example, the level of the ul node in our example is two. By definition, the level of the root node is zero.

#### Height

The height of a tree is equal to the maximum level of any node in the tree. The height of the tree in our example is three.

We can define an empty tree as a tree with no node and we can say that height of an empty tree is minus one (-1).

Now that we have defined the basic vocabulary, we can give two more definitions of a tree: one involving nodes and edges, and other a recursive definition:

**Definition one:** A tree consists of a set of nodes and a set of edges that connect pairs of nodes. A tree has the following properties:
- One node of the tree is designated as the root node.
- Every node *n*, except the root node, is connected by an edge from exactly one other node *p*, where *p* is the parent of *n*.
- A unique path traverses from the root to each node.
- If each node in the tree has a maximum of two children, we say that the tree is a *binary* tree.

The diagram below illustrates a tree that fits definition one. The arrowheads on the edges indicate the direction of the connection.

![](https://github.com/andy489/Data_Structures_and_Algorithms_CPP/blob/master/assets/Introduction%20to%20Trees%2003.png)

**Definition two:** A tree is either empty or consists of a root and zero or more subtrees, each of which is also a tree. The root of each subtree is connected to the root of the parent tree by an edge.

The diagram below illustrates this recursive definition of a tree. Using the recursive definition of a tree, we know that the tree below has at least four nodes, since each of the triangles representing a subtree must have a root. It may have many more nodes than that, but we do not know unless we look deeper into the tree.

![](https://github.com/andy489/Data_Structures_and_Algorithms_CPP/blob/master/assets/Introduction%20to%20Trees%2004.png)

Recursion basically is reducing something in a self similar manner. This recursive property of tree will be used everywhere in all implementation and uses of tree.

In a valid tree with N nodes there will be exactly N-1 links/edges. All nodes except the root node will have exactly 1 incoming edge. 

Based on properties, trees are classified into various categories. There are different kinds of trees that are used in different scenarios. Simplest and most common kind of tree is a tree with this property that any node can have at most two children. This kind of tree is called *binary tree*. Binary tree is most famous tree. 

The most common way of implemanting tree is dynamically created nodes linked using pointers or references, just the way we do for linked list. A tree Node will have several fields: one of the fields will store the data and the other fields will store the address of the childs of the tree. If the tree is binary we cannot have more of two children so in the Node we will include only three fields. If a node for example has only one child, the left field with address data will be filled with null. Or if a node is a leaf, then the two address fields will be both filled with null. We can name the children as left child and right child. Programmatically, in C or C++, we can define a node as a structure like this:
```cpp
struct Node
{
    int data; // assuming data type is integer
    Node* left;
    Node* right;
}
```
We have kept only 2 pointers because we can have at most 2 children in binary tree. This particular definition of Node can be used only for a binary tree. For generic trees that can have any number of children, we use some other structure.

### Applications:

#### 1) Storing naturally hierarchical data *→ eg: - file system*
#### 2) Organize data - for quick search, insertion, deletion *→ eg: - binary search tree*
#### 3) Trie - a special kind of tree used to store dictionary. Fast and efficient and is used for dynamic spell checking.
#### 4) Network Routing algorithm
... and the list goes on
