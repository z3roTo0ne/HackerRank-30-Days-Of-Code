    def levelOrder(self,root):

        if root:
            traversal = ''
            queue = [root]
 
            while queue:
                
                node = queue.pop()
                traversal = traversal + str(node.data) + ' '
                
                if node.left:
                    queue.insert(0, node.left)
                if node.right:
                    queue.insert(0, node.right)
            
            print(traversal)
