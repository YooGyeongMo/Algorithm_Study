import Foundation

func isPrime(_ num: Int) -> Bool {
    if num < 2 { return false }
    
    var i = 2
    
    while i * i <= num {
        if num%i == 0 {
            return false
        }
        i+=1 
    }
    
    return true
}

func solution(_ nums:[Int]) -> Int {
    
    var answer = 0
    
    for i in 0..<nums.count-2 {
        for j in i+1..<nums.count-1 {
            for z in j+1..<nums.count {
                let sum = nums[i] + nums[j] + nums[z]
                
                if isPrime(sum) {
                    answer += 1
                }
            }
        }
    }
    return answer
}