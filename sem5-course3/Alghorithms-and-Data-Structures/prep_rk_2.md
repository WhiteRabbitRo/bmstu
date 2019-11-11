# Постройте, добавьте, удалите ...

- [Splay](http://www.cs.armstrong.edu/liang/animation/web/SplayTree.html)
- [AVL](http://www.cs.armstrong.edu/liang/animation/web/AVLTree.html)
- [Binary Heap](http://btv.melezinek.cz/binary-heap.html)
- [Bin Search Tree](http://btv.melezinek.cz/binary-search-tree.html)
- [Bin Search Tree nicer](https://yongdanielliang.github.io/animation/web/BST.html)
- [Red Black Tree](http://www.cs.armstrong.edu/liang/animation/web/RBTree.html)
- [Bin min Heap 'see footer for input', no negative numbers](https://www.codelike.in/animation/binary-min-heap)
- [Skack](https://yongdanielliang.github.io/animation/web/Stack.html)
- [Queue](https://yongdanielliang.github.io/animation/web/Queue.html)
- [Heap](https://yongdanielliang.github.io/animation/web/Heap.html)

# Полностью черное дерево

*спасибо Асе за решение на русском языке
```
Можно решать так
 
Вводишь элементы по возрастанию до того момента, пока у тебя не образуется от корня полностью черное поддерево высоты h, кроме кранего правого элемента, а потом удаляешь в обратном порядке до того момента, пока у тебя не будет только черное дерево нужной высоты

Пример для высоты h
 
Вводим последовательно 1, 2, 3,...,10
```
![спасибо, ася](rk2/avs_black_rbt.jpg)
```
А затем удаляем в обратном порядке: 10, 9, 8
```
![спасибо, ася](rk2/avs_black_rbt_fin.jpg)
