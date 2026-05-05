import Foundation

func solution(_ progresses:[Int], _ speeds:[Int]) -> [Int] {
    
    var days: [Int] = []
    var previousDay = 0
    
    for i in 0..<progresses.count {
        let progress = progresses[i]
        let speed = speeds[i]
        let releaseDay = Int(ceil(Double(100-progress) / Double(speed)))
        days.append(releaseDay)
    }
    
    var result: [Int] = []
    var front = 0
    
    while front < days.count {
        let deployDay = days[front]
        var count = 0
        
        while front < days.count && days[front] <= deployDay {
            front += 1
            count += 1
        }
        result.append(count)
    }
    
    return result
}