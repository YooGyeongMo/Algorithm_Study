func solution(_ n:Int64) -> Int64 {
    
    let sortedDigits = String(n).compactMap{$0.wholeNumberValue!}.sorted{$0 > $1}
    
    let result = sortedDigits.map{String($0)}.joined()
    
    
    return Int64(result)!
}