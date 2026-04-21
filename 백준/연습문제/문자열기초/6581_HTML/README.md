# [6581] HTML

| 항목 | 내용 |
|---|---|
| **문제 번호** | 6581 |
| **문제 제목** | HTML |
| **시간 제한** | 1 초 |
| **메모리 제한** | 128 MB |
| **분류** | 문자열기초 |
| **링크** | [백준 6581번](https://www.acmicpc.net/problem/6581) |

## 문제

오로지
,  태그와 그 외 평문으로만 주어지는 HTML 문서가 있을 때, 그 결과를 보여주는 코드를 작성하시오.

한 줄에는 80자보다 많은 글자가 출력되어서는 안 된다.

## 입력

원래의 HTML 문서가 입력으로 주어진다. 이 텍스트는 단어와 HTML 태그들로 이루어져 있으며, 태그는 한 개 이상의 공백문자나 탭, 개행 문자 등으로 구분된다.

단어는 연속된 알파벳, 숫자, 또는 문장 부호들이다. 예를 들어, &quot;abc,123&quot;은 하나의 단어이지만, &quot;abc, 123&quot;은 &quot;abc,&quot;, &quot;123&quot; 두 단어이다. 단어는 항상 80글자 이하이며, &#39;&#39;를 포함하지 않는다. 입력에 등장하는 태그는
과  외에는 없다.

## 출력

다음과 같은 규칙에 맞게 출력해야 한다.

	이번에 출력할 단어를 출력하고 나서도 현재 줄이 80글자를 넘지 않으면 현재 줄에 출력해도 좋다. 단, 80글자를 넘어가게 된다면 새로운 줄에 출력해야 한다.

 태그를 읽게 되면, 새 줄을 시작한다.
	 태그를 읽게 되면, 이미 줄의 첫 부분이 아니라면 새 줄을 시작한 뒤, &#39;-&#39;를 한 줄에 80글자를 입력한다. 그 후 다시 새 줄을 시작한다.

마지막 줄은 개행 문자로 끝난다.

여러 개의 연속된 개행 문자, 공백 문자, 탭 문자는 하나의 공백문자로 출력한다.


## 예제 입력 1

```
Hallo, dies ist eine 
ziemlich lange Zeile, die in Html
aber nicht umgebrochen wird.
&lt;br&gt;
Zwei &lt;br&gt; &lt;br&gt; produzieren zwei Newlines. 
Es gibt auch noch das tag &lt;hr&gt; was einen Trenner darstellt.
Zwei &lt;hr&gt; &lt;hr&gt; produzieren zwei Horizontal Rulers.
Achtung       mehrere Leerzeichen irritieren

Html genauso wenig wie


mehrere Leerzeilen.
```

## 예제 출력 1

```
Hallo, dies ist eine ziemlich lange Zeile, die in Html aber nicht umgebrochen
wird.
Zwei

produzieren zwei Newlines. Es gibt auch noch das tag
--------------------------------------------------------------------------------
was einen Trenner darstellt. Zwei
--------------------------------------------------------------------------------
--------------------------------------------------------------------------------
produzieren zwei Horizontal Rulers. Achtung mehrere Leerzeichen irritieren Html
genauso wenig wie mehrere Leerzeilen.
```

## 풀이

```cpp
// TODO: 풀이 작성
```
