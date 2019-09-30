# Алгоритм

- 1. Алгоритм быстрого возведения в степерь

Алгоритм бинарного возведения аль-Каши

[шмяк](https://ru.wikipedia.org/wiki/Алгоритмы_быстрого_возведения_в_степень)

- 2. Алгоритм получения N числа фибоначчи за O(log n)

Кнут: 

```
( Fn+1 Fn ) = ( 1 1 )^n
( Fn Fn-1 )   ( 1 0 )
```

- 3. Алгоритм генерации подстановок

[шмяк](https://habr.com/ru/post/248493/)

- 4. Проверка числа на простоту 

```
Проверка на простоту

Чтобы определить, является ли данное число N простым, безусловно, достаточно написать простой цикл поиска делителей числа N:

bool prime(long long n){ 
	for(long long i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return false;
	return true;
}


Данная функция проверки числа на простоту достаточно эффективна — асимптотика ее работы O (sqrt(N)).
```
лучше: (O (log N))
[шмяк](https://habr.com/ru/post/205318/) 

- 5. Разворот списка за О(n) и О(1) по памяти

```format=go
func (chain *links) Reverse() *links {
    if chain == nil || chain.Next == nil {
        return chain
    }

    left, next := chain, chain.Next.Next
    chain = chain.Next
    left.Next = nil

    for {
        chain.Next = left

        if next == nil {
            break
        }

        left, chain, next = chain, next, next.Next
    }

    return chain
}
```

[шмяк](https://bolknote.ru/all/3814/)
