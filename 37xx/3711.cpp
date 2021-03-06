// [문제 설명]
/* ------------------------------------------------------------------------------------------------------------------------------------------------------ */

// 희용이는 구글에 입사하기 위해 면접시험을 보러 갔다.

// 희용이는 구글 입사 시험 기출문제로 "1 ~ 1,000,000까지 1의 개수"를 묻는 문제가 나왔다는 사실을 vega선생님으로 부터 들어서 이 문제에 대한 대답을 준비하고 갔다.

// 면접실에 들어가자 면접관은 다음과 같이 질문을 하였다.

// "1 ~ 1,000,000까지의 1의 개수 대신, a부터 b까지의 정수 중 k라는 숫자가 몇 번 나왔는지 알아내는 프로그램을 작성해보세요."

// 희용이는 순간 당황했지만 이 사이트에서 유사한 문제를 본 적이 있기 때문에 응용해서 무사히 풀수 있었다.

// 이 프로그램을 작성하시오.


// [입력]
/* ------------------------------------------------------------------------------------------------------------------------------------------------------ */

// 시작 값(a), 마지막 값(b), 한자리 정수(k)가 입력된다. ( 0 <= a <= b <= 100,000,000 ), ( 0 <= k <= 9 )


// [출력]
/* ------------------------------------------------------------------------------------------------------------------------------------------------------ */

// a부터 b사이에 k라는 숫자가 몇 번 들어 있는지 출력하시오.


// [입력 예시]
/* ------------------------------------------------------------------------------------------------------------------------------------------------------ */

// 11 15 1


// [출력 예시]
/* ------------------------------------------------------------------------------------------------------------------------------------------------------ */

// 6


// [도움말]
/* ------------------------------------------------------------------------------------------------------------------------------------------------------ */

// 입출력 예시에서 11, 12, 13, 14, 15 이렇게 1은 6번 들어간다.

// 0 ~ 1억을 탐색하기위해서는 for문을 2중으로 중첩하면 1초안에 해결이 불가능합니다. (시간초과)

// 그럼 어떻게 해결할까요? 구글에서도 분명 이 능력을 요구했을 겁니다.


// [답]
/* ------------------------------------------------------------------------------------------------------------------------------------------------------ */

