import Foundation

func solution(_ sizes:[[Int]]) -> Int {
    
    var width = 0
    var height = 0
    
    for size in sizes {
       let w = max(size[0], size[1])
       let h = min(size[0], size[1])
        
       width = max(width, w)
       height = max(height, h)
    }
    
 
    
    return width * height
}