# Linked list implementation in Python


class Node:
    # Creating a node
    def __init__(self, data):
        self.data = data
        self.next = None


class LinkedList:

    def __init__(self):
        self.head = None


if __name__ == '__main__':

    llist = LinkedList()

    # Assign data values
    llist.head = Node(1)
    second = Node(2)
    third = Node(3)

    # Connect nodes
    llist.head.next = second
    second.next = third

    # Print the linked list data
    while llist.head != None:
        print(llist.head.data, end=" ")
        llist.head = llist.head.next
