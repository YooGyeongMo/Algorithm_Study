import Foundation

func solution(_ n:Int, _ computers:[[Int]]) -> Int {
    
    var visited = Array(repeating: false, count: n)
    var answer = 0
    
    func dfs (_ node: Int) {
        visited[node] = true
        
        for i in 0..<n{
            // 나랑 연결되어있으면서 방문안한애들
            if computers[node][i] == 1 && !visited[i] {
                dfs(i)
            }
        }
    }
    
    for i in 0..<n {
        if !visited[i] {
            answer += 1
            dfs(i)
        }
    }
    
    return answer
}