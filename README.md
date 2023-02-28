# �������� ������� � ������� ������������� ������. ������. ����

------

### ������� 1

[����� ����������� ������������� �������](01).

<details>
# ������ 1. ����� ����������� ������������� �������
� ���� ������� ����� ����������� ������� ������ ������������� ������� ����� ����� �� �����.

������, ������� �� ������ �������� �� �����, �� ������ ������������, � ������, � �������� ����� ���� **�����**. ������ ��������� �� ������������ ������ � ��� **�����������** ������, �� ���� ������������ ���������� ���������, ������� ������ ����� �������, �� ������ ����� ��� **����������** ������, �� ���� ���������� ����������� � ���� ������ ���������. ������� ��������� ����� ������� ������ ����� ��������� ���: `void print_dynamic_array(int* arr, int logical_size, int actual_size)`. ��� ������� ��� ����������� � ��������� ��������.

�������: ���������� ������ ������� �� ����� ��������� ��� ����������� ������.

������ ������ ���������� �� ����� ��������� �������: �������� �������, �������� � ��� ���������� ������, ������ ���������� ��� ����, � �� ��������, ������� ������� �� ������� ����������� �������, ������ ����������, ��� ������ `_` (������ �������������). �������� ������� ����������� �������� �������.

���������� ���� ������ ������������� ������� � ���������������� �������. ������������ ������ ������������:
1. ����������� ������ �������.
2. ���������� ������ �������.
3. �������� ��� ���������� �������. �� ���������� ����� ����� ����������� ������� �������.

�� ������ ������� ������, ������� **�����** ������� ���������� ���������, ������ ������������ ������� �������.

����� ����� ������������� ������� � ������� �������� �� ������� ���������� ������ � ������� ��������� ���� ������� `print_dynamic_array`.

### ������� ������ ���������

```
������� �������c��� ������ �������: 10
������� ���������� ������ �������: 7
������� arr[0]: 1
������� arr[1]: 2
������� arr[2]: 3
������� arr[3]: 4
������� arr[4]: 5
������� arr[5]: 6
������� arr[6]: 7
������������ ������: 1 2 3 4 5 6 7 _ _ _
```

```
������� �������c��� ������ �������: 8
������� ���������� ������ �������: 9
������! ���������� ������ ������� �� ����� ��������� �����������!
```

```
������� �������c��� ������ �������: 5
������� ���������� ������ �������: 5
������� arr[0]: 1
������� arr[1]: 2
������� arr[2]: 3
������� arr[3]: 4
������� arr[4]: 5
������������ ������: 1 2 3 4 5
```

```
������� �������c��� ������ �������: 12
������� ���������� ������ �������: 4
������� arr[0]: 1
������� arr[1]: 2
������� arr[2]: 3
������� arr[3]: 4
������������ ������: 1 2 3 4 _ _ _ _ _ _ _ _
```
#### ���������

> �� ������� ���� ������ �����. ����������� ������� ������ ������ �������������� :)

<details>

<summary>��� ������������ ��� �������.</summary>

��� �������� ������������� ������� ����� ����� ��������� ������� ����������� �������� `new int[]`.

��� ������ ������� �� ������� ����������� ���� `for`.

����� ����������, ����� ����� �������� ������ `_`, ����������� ������� ������ ������� � ���������� ���������� �������� ����� �������.

</details>
</details>


### ������� 2

[���������� � ���������� ������������ ������](02).

<details>
# ������ 2. ���������� � ���������� ������������ ������
� ���� ������� ��� ����� ����������� ������� ���������� ������ �������� � ����� ������������� ������� ����� ����� `append_to_dynamic_array`.

���������� �������� ����� ����������� �� ���������: ���� ���������� ������ ������� ������ ������������, �� �� ���������� ����� ������� � **�����** ������ ������� � ������������ ��� ���������� ������ �� 1.

���� ���������� ������ ������� ����� ��� ������������ �������, ����� �������� ����� ������ �������� � 2 ���� ������. � ���� ��������������� �������� �� ������� ������� ������ � ����� ��������� � �����. ����������� � ���������� ������� ������� �������� ��� ��������. ���������� ������ ������������� �� �������, ����������� ������ ������������� � ��� ����, ������ ������ ������������. ����� ��������� ������ �������� ��� � ����� ��������.

����������� ������������� �������������� � �������������. ���� ��������� ����� �������� �� ���������:
1. ������������ ������ ����������� ������ �������.
2. ������������ ������ ���������� ������ �������.
3. ������������ ������ �������� ��� ���������� �������. �� ���������� ����� ����� ����������� ������� �������.
4. ��������� ������� �������� ������ �� ������� � ������� ������� `print_dynamic_array` �� �������� �������.
5. ������������ ������ ����� ������� ��� ���������� � �����. ���� ��������� �������������, ���� ������������ ����� ����������� �������� (��������, `0`).
6. ��������� ������� ������ � ����������� ���������.
7. ������ `5` � `6` ����������� �� ��� ���, ���� ������������ �� ����� ����������� �������� (��������, `0`).
8. ��������� ���������, ������� ������������� ��������� ������������� ������� � ��������� ���� ������.

��������� ��� ���, ����� ��������� ����� � ����� ������� � ��� �� ������ ������� ����������� � ���������� ������� ������ �������.

### ������� ������ ���������

```
������� �������c��� ������ �������: 3
������� ���������� ������ �������: 2
������� arr[0]: 1
������� arr[1]: 2
������������ ������: 1 2 _
������� ������� ��� ����������: 9
������������ ������: 1 2 9
������� ������� ��� ����������: 7
������������ ������: 1 2 9 7 _ _
������� ������� ��� ����������: 4
������������ ������: 1 2 9 7 4 _
������� ������� ��� ����������: 0
�������! ��� ������: 1 2 9 7 4 _
```

```
������� �������c��� ������ �������: 8
������� ���������� ������ �������: 9
������! ���������� ������ ������� �� ����� ��������� �����������!
```

```
������� �������c��� ������ �������: 5
������� ���������� ������ �������: 3
������� arr[0]: 1
������� arr[1]: 2
������� arr[1]: 3
������������ ������: 1 2 3 _ _
������� ������� ��� ����������: -4
������������ ������: 1 2 3 -4 _
������� ������� ��� ����������: 12
������������ ������: 1 2 3 -4 12
������� ������� ��� ����������: 6
������������ ������: 1 2 3 -4 12 6 _ _ _ _
������� ������� ��� ����������: 0
�������! ��� ������: 1 2 3 -4 12 6 _ _ _ _
```
#### ���������

> �� ������� ���� ������ �����. ����������� ������� ������ ������ �������������� :)

<details>

<summary>��� ������������ ��� �������.</summary>

��� �������� ������������� ������� ����� ����� ��������� ������� ����������� �������� `new int[]`.

������� `append_to_dynamic_array` ������ �������� �� ������ ���������� �� ������, �� � ����������, � ����� ������ ����������� ������ ����� �������. ����� ����� �������� ����� ������: ������� ���������� � ����������� ������� ������� ��� ���������� ���������� ��� ���������� �� � ������� �� ������ ���� �� ���������. ������ ������� ����������������, ������ ��� ���������� ���������� � ��� :)

������� `append_to_dynamic_array` ������ ����� ��������� ����� ������ ������ �������, ����� ������� ������� ��� �� ������. ������� ��� ������ ���� ����������� ������������ ���� ������� ������ ����� ������ �������, � ������, ������ ���������� ��������� �� ������, � ������� ������ ������. ���� �������� ������ ������� �� �������������, �� ������������ ��������� �� ������ ������.

</details>
</details>

### ������� 3*

[�������� ������� �������� �� ����������� ������������� �������](03).

<details>
# ������ 3*. �������� ������� �������� �� ����������� ������������� �������
��� ����� ����������� ������� �������� �������� �� ������ ������������� ������� ����� ����� `remove_dynamic_array_head`.

�������� �������� ����� ����������� �� ���������: ���� ���������� ������ �������, ����������� �� �������, ������ ������ ����� ����� ������������ �������, �� �� ��������� ��� �������� �������, ����� �������, ����� �� 1, ����� ������� ��������� ������ ������� �������, � ��������� ���������� ������ ������� �� 1.

���� ���������� ������ �������, ����������� �� �������, ������ ��� ����� ����� ����� ��� ������������ �������, ����� �������� ����� ������ �������� � 3 ���� ������. � ���� ��������������� �������� �� ������� �������, ����� �������, �� ������� ������� �� 1 �����. ����������� � ���������� ������� ������� �������� ��� ��������. ���������� ������ ����������� �� �������, ����������� ������ ����������� � ��� ����, ������ ������ ������������. ����� ��������� ������ �������� ��� � ����� ��������.

����������� ������������� �������������� � �������������. ���� ��������� ����� �������� �� ���������:
1. ������������ ������ ����������� ������ �������.
2. ������������ ������ ���������� ������ �������.
3. ������������ ������ �������� ��� ���������� �������. �� ���������� ����� ����� ����������� ������� �������.
4. ��������� ������� �������� ������ �� ������� � ������� ������� `print_dynamic_array` �� �������� �������.
5. ��������� ���������� ������������, ����� �� ������� ��������� �������.
6. ���� ������������ �������� `"��"`, �� ��������� ������� ������ ������� �� ������� � ������� ������������ �� ����� ���������� ������. ���� ������ ������� (������ ������� ������), �� ��������� �������� �� ���� � ��������� ���� ������.
7. ���� ������������ �������� `"���"`, �� ��������� ���������� ������������, ������� �� ����� ������������� ��������� ������� � ��������� ���� ������.
8. ��������� ��������� ����� `5` �� ��� ���, ���� ������������ �� ������� `"���"`, ��� ���� ������ �� ��������.

��������� ��� ���, ����� ��������� ����� � ����� ������� � ��� �� ������ ������� ����������� � ���������� ������� ������ �������.

### ������� ������ ���������

```
������� �������c��� ������ �������: 3
������� ���������� ������ �������: 2
������� arr[0]: 1
������� arr[1]: 2
������������ ������: 1 2 _
������� ������ �������? ��
������������ ������: 2
������� ������ �������? ��
������������ ������: _
������� ������ �������? ��
���������� ������� ������ �������, ��� ��� ������ ������. �� ��������!
```

```
������� �������c��� ������ �������: 8
������� ���������� ������ �������: 9
������! ���������� ������ ������� �� ����� ��������� �����������!
```

```
������� �������c��� ������ �������: 5
������� ���������� ������ �������: 3
������� arr[0]: 1
������� arr[1]: 2
������� arr[2]: 3
������������ ������: 1 2 3 _ _
������� ������ �������? ��
������������ ������: 2 3 _ _ _
������� ������ �������? ��
������������ ������: 3
������� ������ �������? ���
�������! ��� ������������ ������: 3
```


```
������� �������c��� ������ �������: 9
������� ���������� ������ �������: 7
������� arr[0]: 1
������� arr[1]: 2
������� arr[2]: 3
������� arr[3]: 4
������� arr[4]: 5
������� arr[5]: 6
������� arr[6]: 7
������������ ������: 1 2 3 4 5 6 7 _ _
������� ������ �������? ��
������������ ������: 2 3 4 5 6 7 _ _ _
������� ������ �������? ��
������������ ������: 3 4 5 6 7 _ _ _ _
������� ������ �������? ��
������������ ������: 4 5 6 7 _ _ _ _ _
������� ������ �������? ��
������������ ������: 5 6 7
������� ������ �������? ��
������������ ������: 6 7 _
������� ������ �������? ���
�������! ��� ������������ ������: 6 7 _
```
#### ���������

> �� ������� ���� ������ �����. ����������� ������� ������ ������ �������������� :)

<details>

<summary>��� ������������ ��� �������.</summary>

��� �������� ������������� ������� ����� ����� ��������� ������� ����������� �������� `new int[]`.

������� `remove_dynamic_array_head` ������ �������� �� ������ ���������� �� ������, �� � ����������, � ����� ������ ����������� ������ ����� �������. ����� ����� �������� ����� ������: ������� ���������� � ����������� ������� ������� ��� ���������� ���������� ��� ���������� �� � ������� �� ������ ���� �� ���������. ������ ������� ����������������, ������ ��� ���������� ���������� � ��� :)

������� `remove_dynamic_array_head` ������ ����� ��������� ����� ������ ������ �������, ����� ���������� ������ ������� ������� ����� � ��� ���� ������ ������������. ������� ��� ������ ���� ����������� ������������ ���� ������� ������ ����� ������ �������, � ������, ������ ���������� ��������� �� ������, � ������� ������ ������. ���� �������� ������ ������� �� �������������, �� ������������ ��������� �� ������ ������.

��� ���������� ����� ����� �� ������������ ������� ������� ����� ������������ ������������� �������.

</details>
</details>
