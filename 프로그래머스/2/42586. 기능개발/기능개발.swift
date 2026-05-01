import Foundation

func solution(_ progresses:[Int], _ speeds:[Int]) -> [Int] {
    
    var release: [Int] = []
    var previousDay = 0
    
    for i in 0..<progresses.count {
        let progress = progresses[i]
        let speed = speeds[i]
        let releaseDay = Int(ceil(Double(100-progress) / Double(speed)))
        
        if previousDay >= releaseDay {
            release[release.count-1] += 1
        }
        else {
            release.append(1)
            previousDay = releaseDay
        }
    }
    
    return release
}