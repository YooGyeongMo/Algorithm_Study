import Foundation

func solution(_ progresses:[Int], _ speeds:[Int]) -> [Int] {
    
    var lastRelease = 0
    var releaseArr: [Int] = []
    
    for i in 0..<progresses.count {
        let progress = Double(progresses[i])
        let speed = Double(speeds[i])
        let day = Int(ceil((100-progress) / speed))
        
        if ( day > lastRelease) {
            lastRelease = day
            releaseArr.append(1)   
        }
        else {
            releaseArr[releaseArr.count - 1] += 1
        }
    }
    
    
    return releaseArr
}