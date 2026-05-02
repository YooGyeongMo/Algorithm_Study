func solution(_ s:String) -> Bool {
    
    if (s.count == 4 || s.count == 6) {
        for chr in s {
        if !chr.isNumber {
            return false
             }
        }
        return true
    }
    
    return false
}