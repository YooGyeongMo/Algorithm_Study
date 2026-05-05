import Foundation

func solution(_ answers:[Int]) -> [Int] {
    
    let nums = [ [1,2,3,4,5], [2,1,2,3,2,4,2,5], [3,3,1,1,2,2,4,4,5,5] ]
    var dict: [Int: Int] = [:]
    var result: [Int] = []
    
    for i in 0..<answers.count {
        let check = answers[i]
        
        for j in 0..<nums.count {
            let numsVCount = nums[j].count
            
            if check == nums[j][i%numsVCount] {
                dict[j+1, default: 0] += 1
                }
            }
        }
    
    let mx = dict.values.max() ?? 0
    
    return dict.filter{$0.value == mx}.map{ $0.key }.sorted()
}