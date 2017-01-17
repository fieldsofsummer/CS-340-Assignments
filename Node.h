#ifndef NODE_H
#define NODE_H

class Node
{

	private:

		Node* left;
		Node* right;

		int key;		// Determines the branching of a node.
		int value;		// Arbitrary value container.

	public:

	// Default & initializing constructors.

		Node();
		Node(int newKey, int newValue);

	// Destructor. Should be called recursively by any binary tree destructor.

		~Node();

	// Getter & setter functions.

		void setKey(int newKey);
		void setValue(int newValue);

		int getKey();
		int getValue();

	// Initializes branch nodes of a root. 
	// Note that any branch node is its own root, so this should call a Node() constructor.
	
	// Dev note: could we omit these if class BT was a friend class to class Node?

		void setLeft(Node* newNode);    
		void setRight(Node* newNode);  

	// Returns the address of any branches. These should return some invalid value if uninitialized.

		Node* getLeft();
		Node* getRight();		         
	
};

#endif
