# coding_interview
for solving problem of caracking the coding interview.

# 사용법
### 답안 작성
question > chapter > q$-$ > answer.cpp 에 답안 작성

### Run
#### 전체 실행
프로젝트 루트에서 run.sh 실행
```
$ run.sh
```
#### 부분 실행
```
$ run.sh q$-$ q$-$
```
예1) chapter01의 q1-1 만 실행시
```
$ run.sh q1-1
```

예2) chapter01의 q1-1 q-4 만 실행시
```
$ run.sh q1-1 q1-4
```

### 주의 사항
자신의 답을 공개하고 싶은 경우 자신의 이름으로 브랜치를 생성후 푸쉬!

### 요구 사항
1. ~~Chapter or Question 별로 실행 가능하도록 run.sh 개선~~
2. make로 테스트 실행시 중간에 실패해도 이 후 테스트 진행 가능하게 변경
3. 테스트 실패시 에러 발생하는 문제 수정 (2번 수정시 3번 동시 해결?)
