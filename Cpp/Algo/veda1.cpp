/* 0924 VEDA 코딩테스트 문제1
- 편대리님이 뽑으신 3문제 중 가장 쉬운 문제 */

/* 문자열 편집기에 한 줄 짜리 문자열이 입력되어 있으며, 처음에는 커서가 문자열의 가장 오른쪽에 있습니다. 이 편집기 에서는 다음과 같은 동작을 수행합니다.
L : 현재 커서가 있는 위치를 왼쪽으로 한칸 이동, 커서가 전체 문자열의 가장 왼쪽에 있으면 아무런 동작 안함
R : 현재 커서가 있는 위치를 오른쪽으로 한칸 이동, 커서가 전체 문자열의 가장 오른쪽에 있으면 아무런 동작 안함
D : 현재 커서가 있는 위치의 왼쪽에 있는 문자를 하나 삭제, 삭제된 문자의 오른쪽에 있던 문자열은 모두 한 칸씩 왼쪽으로 이동, 삭제된 문자의 오른쪽에 있던 문자열의 가장 왼쪽에 커서가 위치, 커서가 전체 문자열의 가장 왼쪽에 있으면 아무런 동작 안함
I @ : 현재 커서가 있는 위치의 오른쪽에 있는 문자를 @문자로 대치, 대치된 문자의 바로 오른쪽에 커서가 위치, 커서가 전체 문자열의 가장 오른쪽에 있으면 P @ 명령어와 같은 동작을 함
P @ : 현재 커서가 있는 위치에 문자를 하나 삽입, 삽입된 문자의 오른 쪽에 커서가 위치하게 됨, 삽입된 문자의 뒤에 있던 문자열은 한 칸씩 뒤로 이동

영어 소문자와 대문자로 이루어진 한 줄 짜리 문자열과 N개의 명령어가 주어질 때, N개의 명령어를 순서대로 실행한 뒤 편집기에 남아있는 문자열을 반환하는 함수를 완성해라

제한사항 : 
    - 초기 문자열 길이 L : L은 200,000이하의 음이 아닌 정수
    - 명령어의 개수 N : N은 400,000이하의 자연수
    - 각 명령어는 위의 표에 제시된 5가지의 형태 중 한 가지의 문자열 형태로 주어지며, @에 해당하는 문자는 1개의 문자이며 영어 소문자 또는 대문자로만 이루어져 있다.
*/

/* 입출력 예
InitString  : Command
"abcd"      : ["L", "P Z", "L", "D", "R", "I X"]
""          : ["P a", "P b", "L", "I c", "I d"]

입출력 예 설명
입출력 예 #1
abcd| : 처음에는 초기문자열의 가장 오른쪽에 커서가 있습니다
abc|d : L명령어로 커서가 왼쪽으로 한 칸 이동합니다.
abcZ|d : P Z 명령어로 커서의 위치에 Z를 입력 후 입력된 문자의 바로 오른쪽에 커서가 위치합니다. 입력된 문자의 오른쪽에 있던 문자열은 한 칸씩 오른쪽으로 이동합니다.
abc|Zd : L 명령어로 커서가 왼쪽으로 한 칸 이동합니다.
ab|Zd : D 명령어로 커서의 왼쪽에 있는 문자를 하나 삭제합니다. 삭제된 문자의 오른쪽에 있던 문자열은 모두 한 칸씩 앞으로 이동합니다. 삭제된 문자의 오른쪽에 있던 문자열의 가장 왼쪽에 커서가 위치합니다.
abZ|d : R 명령어로 커서가 오른쪽으로 한 칸 이동합니다.
abZx| : I x 명령어로 커서가 있는 위치의 오른쪽에 있는 문자 g를 x로 대치합니다. 대치된 문자의 바로 오른쪽에 커서가 위치합니다.

입출력 예 #2
"|" : 처음에는 빈 문자열에 커서가 위치합니다.
"a|" : P a 명령어로 커서의 위치에 a를 입력 후 입력된 문자의 바로 오른쪽에 커서가 위치합니다.
"ab|" : P b 명령어로 커서의 위치에 b를 입력 후 입력된 문자의 바로 오른쪽에 커서가 위치합니다.
"a|b" : L 명령어로 커서가 왼쪽으로 한 칸 이동합니다.
"ac|" : I c 명령어로 커서가 있는 위치의 오른쪽에 있는 문자 b를 c로 대치합니다. 대치된 문자의 바로 오른쪽에 커서가 위치합니다.
"acd|" : I d 명령어가 입력되었으나 커서의 위치가 문자열의 가장 오른쪽이므로 P d와 같은 동작을 합니다.
*/

