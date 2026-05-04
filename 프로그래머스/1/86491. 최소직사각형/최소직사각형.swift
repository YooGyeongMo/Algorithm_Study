import Foundation

func solution(_ sizes:[[Int]]) -> Int {
    
    var result: [[Int]] = []
    
    for i in 0..<sizes.count {
       let w = sizes[i].max()!
       let h = sizes[i].min()!
       result.append([w,h])
    }
    
    var width = Int.min
    var height = Int.min
    
    for i in 0..<result.count {
        if width < result[i][0] {
            width = result[i][0]
        }
        
        if height < result[i][1] {
            height = result[i][1]
        }
    }
    
    return width * height
}