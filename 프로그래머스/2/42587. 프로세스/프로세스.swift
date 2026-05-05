import Foundation

func solution(_ priorities:[Int], _ location:Int) -> Int {
    var queue = priorities.enumerated().map{(index: $0.offset, priority: $0.element)}
    var order = 0
    var front = 0
    
    while front < queue.count {
        let cur = queue[front]
        front += 1
        
        var higher = false
        
        for i in front..<queue.count {
            if queue[i].1 > cur.1 {
                higher = true
                break
            }
        }
        
        if higher {
            queue.append(cur)
        }
        else {
            order += 1
            
            if location == cur.0 {
                return order
            }
            
        }
    }
    
    return order
}