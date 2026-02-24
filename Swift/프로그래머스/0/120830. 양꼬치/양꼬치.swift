import Foundation

func solution(_ n:Int, _ k:Int) -> Int {
    
    let service = k - (n / 10)
    
    
    return (n*12000) + (service*2000)
}