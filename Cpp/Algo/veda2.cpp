/* 0926 VEDA 코딩테스트 문제2 
하드디스크에 여러 개의 파일을 적재하려고 합니다
컴퓨터에 현재 N개의 하드디스크가 장착되어 있고, 각 하드디스크의 용량은 capacity(byte)로 모두 같습니다.
컴퓨터에 장착된 하드이스크의 개수 N과 하드디스크에 적재해야 할 파일의 크기 목록 files가 주어질 때, 최대 몇 개의 파일을 적재할 수 있는지 구하려고 합니다.
단, 목록에 주어진 각 파일의 크기단위는 byte이고, 초기에 장착된 하드디스크에는 아무런 데이터가 들어있지 않습니다.
그리고 각 파일은 쪼개어 저장할 수 없으며, 반드시 연속된 공간에 저장해야 합니다.

예시 1) N=2, capacity=5, files=[1,2,3,4,5]
(1) 각 하드디스크에 [1,4], [2,3]으로 배치하면 총 4개의 파일을 적재할 수 있고, 이 경우 파일을 가장 많이 적재할 수 있습니다.

(2) 만약 첫번째 하드디스크에 [1,3]으로 배치한다면, 남은 파일의 크기는 각각 [2,4,5]가 됩니다. 하드디스크의 용량은 5byte이기 떄문에,
두 번째 하드디스케은ㄴ 남아있는 파일 중 한 개의 파일만 적재할 수 잆으므로 총 3개의 파일을 적재할 수 있습니다.
그러므로 이 경우에는 파일을 가장 많이 적재하는 경우가 아닙니다.

예시 2) N=1, capacity=5, files=[1,4,5]
(1) 하드디스크에 [1,4]로 배치하면 총 2개의 파일을 적재할 수 있고, 이 경우가 파일을 가장 많이 적재할 수 있습니다.
(2) 하드디스크에 [5]로 배치할 수도 있지만, 총 1개의 파일을 적재할 수 있으므로, 파일을 가장 많이 적재하는 경우가 아닙니다.

N, capacity, files가 매개변수로 주어질 때, 하드디스크에 적재할 수 있는 파일의 최대 개수를 return 하도록 solution 함수를 완성해 주세요.

제한사항:
    - N : 10 이하의 자연수
    - capacity : 16 이하의 자연수
    - files의 크기(파일 개수) : 12 이하의 자연수
    - 각 파일의 크기 : 16 이하의 자연수
    
입출력 예)
N   capacity    files
2   5           [1,2,3,4,5]
1   5           [1,4,5]
2   3           [2,2,2,2,2]

입출력 예1 = 문제의 예시와 같습니다.
입출력 예2 = 문제의 예시와 같습니다.
입출력 예3 = 각 하드디스크에 [2], [2]로 배치하는 경우가 파일을 가장 많이 적재할 수 있으므로 2를 return하면 됩니다.
*/