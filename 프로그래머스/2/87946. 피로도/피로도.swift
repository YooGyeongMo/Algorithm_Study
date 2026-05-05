import Foundation

func solution(_ k:Int, _ dungeons:[[Int]]) -> Int {
    
    var visited = Array(repeating: false, count: dungeons.count)
    var answer = 0
    
    func dfs ( _ tired: Int, _ count: Int) {
        answer = max(answer,count)
        
        for i in 0..<dungeons.count {
            let need = dungeons[i][0]
            let cost = dungeons[i][1]
            
            if !visited[i] && tired >= need {
                visited[i] = true
                dfs(tired - cost, count + 1)
                visited[i] = false
            }
        }
    }
    
    
    dfs(k,0)
    
    return answer
}