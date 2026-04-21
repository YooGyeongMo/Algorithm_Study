# [13168] 내일로 여행

| 항목 | 내용 |
|---|---|
| **문제 번호** | 13168 |
| **문제 제목** | 내일로 여행 |
| **시간 제한** | 1 초 |
| **메모리 제한** | 512 MB |
| **분류** | 플로이드 |
| **링크** | [백준 13168번](https://www.acmicpc.net/problem/13168) |

## 문제

친한 친구인 승현이와 지학이는 여름방학 때 여행을 가기로 계획했습니다. 해외여행은 금전적으로 부담이 많기 때문에 둘은 한국의 여러 도시를 여행하기로 했습니다. 한국에는 N개의 도시가 있으며, 승현이는 이 중 여행할 M개의 도시를 결정했습니다. 여행 경로에서 같은 도시를 여러 번 방문할 수 있으며, 여행을 시작하는 도시와 끝내는 도시는 같습니다.

한국에는 두 도시 사이를 오갈 수 있는 K개의 교통수단이 있습니다. 교통수단의 종류는 기차, 지하철, 버스, 택시, 비행기 등으로 다양합니다. 특히 기차 코스는 매우 세부적으로 나뉘어 있어서 무궁화호(Mugunghwa), ITX-새마을(ITX-Saemaeul), ITX-청춘(ITX-Cheongchun), KTX, S-Train, V-Train 등이 있습니다. 모든 교통수단은 한 번 이용하는 데 필요한 비용이 정해져 있습니다. 승현이와 지학이는 계획한 M개의 도시를 최소비용으로 차례대로 움직일 것입니다.

한편, 코레일에서는 &lsquo;내일로&rsquo;라는 특별한 기차표를 판매하고 있습니다. 방학 동안, 젊은 청년들은 R원을 주고 내일로 티켓을 살 수 있습니다. 한 번 내일로 티켓을 사면, 며칠 동안 무궁화호, ITX-새마을, ITX-청춘은 무료로 이용할 수 있으며, S-Train과 V-Train은 50% 할인된 가격으로 이용할 수 있습니다. KTX나 지하철, 또는 다른 교통수단에 대해서는 할인이 적용되지 않습니다.

지학이는 자신이 아무것도 하지 않는 것에 죄책감을 느끼기 때문에, 자신들의 여행에서 내일로 티켓이 필요한지 생각해보기로 했습니다. 지학이를 도와 내일로 티켓을 사는 것과 사지 않는 것 중 어떤 선택이 더 좋은 지 구하는 프로그램을 작성하세요.

## 입력

첫 번째 줄에는 한국에 있는 도시의 수 N(1 ≤ N ≤ 100)과 1인당 내일로 티켓의 가격 R(1 ≤ R ≤ 1,000,000)이 주어집니다. 두 번째 줄에는 N개의 도시의 이름이 주어집니다. 도시의 이름은 알파벳 대소문자로 구성된 길이 20 이하의 문자열입니다. 세 번째 줄에는 승현이와 지학이가 여행할 도시의 수 M(1 ≤ M ≤ 200)이 주어집니다. 네 번째 줄에는 승현이와 지학이가 여행할 M개 도시의 이름이 주어집니다. 이 도시들은 앞서 언급된 N개의 도시 중 하나입니다. 다섯 번째 줄에는 교통수단의 수 K(1 ≤ K ≤ 10,000)가 주어집니다. 마지막 K개의 줄에는 교통수단에 대한 정보가 주어집니다. 줄마다 교통수단의 종류 Type_(i), 양 끝 도시 S_(i), E_(i), 1인당 비용 Cost_(i) (1 ≤ Cost_(i) ≤ 100,000)가 주어집니다. Type_(i)는 &lsquo;Subway&rsquo;, &lsquo;Bus&rsquo;, &lsquo;Taxi&rsquo;, &lsquo;Airplane&rsquo;, &lsquo;KTX&rsquo;, &lsquo;S-Train&rsquo;, &lsquo;V-Train&rsquo;, &lsquo;ITX-Saemaeul&rsquo;, &lsquo;ITX-Cheongchun&rsquo;, &lsquo;Mugunghwa&rsquo; 중 하나이며, 모든 도시는 주어진 K개의 교통수단을 이용하여 갈 수 있음이 보장되어 있습니다.

한국에는 이름이 같은 도시가 있을 수 있다. 따라서, N개의 도시의 이름에는 같은 도시의 이름이 두 번 이상 주어질 수도 있다. 이 경우 이러한 도시를 모두 같은 도시라고 생각해야 한다.

## 출력

한줄에 내일로 티켓을 사는 것이 좋으면 &lsquo;Yes&rsquo;를 출력하고 그렇지 않으면 &lsquo;No&rsquo;를 출력합니다. 내일로 티켓을 사더라도 비용이 정확히 같다면 &lsquo;No&rsquo;를 출력합니다.


## 예제 입력 1

```
14 40000
Boseong Busan Changwon Cheonan Chuncheon Daegu Daejeon Gwangju Jeonju Jinju Masan Seoul Suncheon Yeosu
9
Seoul Jeonju Suncheon Yeosu Suncheon Boseong Jinju Busan Seoul
23
KTX Seoul Busan 20000
KTX Seoul Gwangju 12000
KTX Gwangju Yeosu 8000
KTX Seoul Jinju 17000
ITX-Saemaeul Seoul Cheonan 7000
ITX-Cheongchun Seoul Chuncheon 3000
V-Train Chuncheon Daegu 10000
Subway Seoul Cheonan 2000
ITX-Saemaeul Cheonan Daejeon 4000
ITX-Saemaeul Daejeon Daegu 10000
ITX-Saemaeul Daegu Busan 7000
Mugunghwa Daejeon Daegu 6000
Mugunghwa Daejeon Gwangju 5000
Mugunghwa Gwangju Jeonju 1500
Mugunghwa Jeonju Suncheon 4000
Mugunghwa Suncheon Yeosu 1500
S-Train Busan Changwon 3000
S-Train Changwon Masan 1000
S-Train Masan Jinju 2000
S-Train Jinju Suncheon 2000
S-Train Suncheon Boseong 1000
Bus Busan Jinju 1500
Bus Suncheon Jinju 4000
```

## 예제 출력 1

```
Yes
```

## 예제 입력 2

```
5 50000
Seoul Cheonan Daejeon Daegu Busan
3
Seoul Busan Seoul
5
ITX-Saemaeul Seoul Cheonan 7000
ITX-Saemaeul Cheonan Daejeon 4000
ITX-Saemaeul Daejeon Daegu 10000
ITX-Saemaeul Daegu Busan 7000
KTX Seoul Busan 24999
```

## 예제 출력 2

```
No
```

## 풀이

```cpp
// TODO: 풀이 작성
```
