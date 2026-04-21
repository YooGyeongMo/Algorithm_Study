# [14956] Philosopher’s Walk

| 항목 | 내용 |
|---|---|
| **문제 번호** | 14956 |
| **문제 제목** | Philosopher’s Walk |
| **시간 제한** | 0.5 초 |
| **메모리 제한** | 512 MB |
| **분류** | 재귀 |
| **링크** | [백준 14956번](https://www.acmicpc.net/problem/14956) |

## 문제

In Programming Land, there are several pathways called Philosopher&rsquo;s Walks for philosophers to have a rest. A Philosopher&rsquo;s Walk is a pathway in a square-shaped region with plenty of woods. The woods are helpful for philosophers to think, but they planted so densely like a maze that they lost their ways in the maze of woods of a Philosopher&rsquo;s Walk.

Fortunately, the structures of all Philosopher&rsquo;s Walks are similar; the structure of a Philosopher&rsquo;s Walk is designed and constructed according to the same rule in a 2^(k) meter square. The rule for designing the pathway is to take a right-turn in 90 degrees after every 1-meter step when k is 1, and the bigger one for which the integer k is greater than 1 is built up using four sub-pathways with k - 1 in a fractal style. Figure F.1 shows three Philosopher&rsquo;s Walks for which k is 1, 2, and 3. The Philosopher&rsquo;s Walk W_(2) consists of four W_(1) structures with the lower-left and the lower-right ones are 90 degree rotated clockwise and counter-clockwise, respectively; the upper ones have the same structure with W_(1). The same is true for any W_(k) for which the integer k is greater than 1. This rule has been devised by a mathematical philosopher David Hilbert (1862 &ndash; 1943), and the resulting pathway is usually called a HILBERT CURVE named after him. He once talked about a space filling method using this kind of curve to fill up a square with 2^(k) sides, and every Philosophers&rsquo; Walk is designed according to this method.

			(a) W_(1)
			(b) W_(2)
			(c) W_(3)

Figure F.1. Three Philosopher&#39;s Walks with size (a) 2^(1) = 2, (b) 2^(2) = 4, and (c) 2^(3) = 8, repectively.

Tae-Cheon is in charge of the rescue of the philosophers lost in Philosopher&rsquo;s Walks using a hot air balloon. Fortunately, every lost philosopher can report Tae-Cheon the number of meter steps he has taken, and Tae-Cheon knows the length of a side of the square of the Philosopher&rsquo;s Walk. He has to identify the location of the lost philosopher, the (x,y) coordinates assuming that the Philosopher&rsquo;s Walk is placed in the 1st quadrant of a Cartesian plain with one meter unit length. Assume that the coordinate of the lower-left corner block is (1,1). The entrance of a Philosopher&rsquo;s Walk is always at (1,1) and the exit is always (n,1) where n is the length of a side. Also assume that the philosopher have walked one meter step when he is in the entrance, and that he always go forward to the exit without back steps.

For example, if the number of meter-steps taken by a lost philosopher in the Philosopher&rsquo;s Walk in W_(2) in Figure F.1(b) is 10, your program should report (3,4).

Your mission is to write a program to help Tae-Cheon by making a program reporting the location of the lost philosopher given the number of meter-steps he has taken and the length of a side of the square of the Philosopher&rsquo;s Walk. Hurry! A philosopher urgently needs your help.

## 입력

Your program is to read from standard input. The input consists of a single line containing two positive integers, n and m, representing the length of a side of the square of the Philosopher&rsquo;s Walk and the number of meter-steps taken by the lost philosopher, respectively, where n = 2^(k) and m ≤ 22k for an integer k satisfying 0 k ≤ 15.

## 출력

Your program is to write to standard output. The single output line should contain two integers, x and y, separated by a space, where (x,y) is the location of the lost philosopher in the given Philosopher&rsquo;s Walk.


## 예제 입력 1

```
4 10
```

## 예제 출력 1

```
3 4
```

## 예제 입력 2

```
8 19
```

## 예제 출력 2

```
2 6
```

## 풀이

```cpp
// TODO: 풀이 작성
```
