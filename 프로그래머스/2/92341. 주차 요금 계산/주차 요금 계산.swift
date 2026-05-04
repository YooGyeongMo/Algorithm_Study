import Foundation

func solution(_ fees:[Int], _ records:[String]) -> [Int] {
    
    let primeT = fees[0]
    let primeM = fees[1]
    let addT = fees[2]
    let addM = fees[3]
    
    var parkingLot:[Int: Int] = [:]
    var carTime:[Int: Int] = [:]
    var parkingMoney: [Int: Int] = [:]
    
    func toMin(_ time: String) -> Int {
        let part = time.split(separator: ":").map{Int($0)!}
        let h = part[0]
        let m = part[1]
        
        return h * 60 + m
    }
    
    for record in records {
        let part = record.split(separator: " ").map{String($0)}
        
        let time = toMin(part[0])
        let carNum = Int(part[1])!
        let cmd = part[2]
        
        if cmd == "IN" {
            parkingLot[carNum] = time
        }
        
        else {
            let parkingTime = time - parkingLot[carNum]!
            parkingLot[carNum] = nil
            carTime[carNum, default: 0] += parkingTime
        }
    }
    
    if !parkingLot.isEmpty {
        
        let allTime = toMin("23:59")
        
        for item in parkingLot {
            let parkingTime = allTime - parkingLot[item.0]!
            
            carTime[item.key, default:0] += parkingTime
        }
    }
    
    for item in carTime {
        if item.value <= primeT {
            parkingMoney[item.key] = primeM
        }
        else {
            
            parkingMoney[item.key] = primeM + Int(ceil(Double(item.value - primeT) / Double(addT))) * addM
        }
    }
    
    return parkingMoney.sorted{$0.key < $1.key}.map{ $0.value }
}