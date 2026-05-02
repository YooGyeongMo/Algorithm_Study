func solution(_ strings:[String], _ n:Int) -> [String] {
    return strings.sorted {
        let first = Array($0)[n]
        let second = Array($1)[n]
        
        if first == second {
            return $0 < $1
        }
        
        return first < second
    }
}