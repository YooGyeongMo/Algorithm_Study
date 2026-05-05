import Foundation

func solution(_ fees:[Int], _ records:[String]) -> [Int] {
    
    let primeT = fees[0]
    let primeM = fees[1]
    let addT = fees[2]
    let addM = fees[3]
    
    var parkingLot: [Int: Int] = [:]
    var parkingTime : [Int: Int] = [:]

    var result: [Int] = []
    
    func toMin(_ time: String) -> Int {
        let part = time.split(separator: ":").map{Int($0)!}
        return part[0] * 60 + part[1]
    }
    
    for record in records {
        let part = record.split(separator: " ").map{ String($0) }
        
        let time = toMin(part[0])
        let carNumber = Int(part[1])!
        let cmd = part[2]
        
        if cmd == "IN" {
            parkingLot[carNumber] = time
        }
        else {
            parkingTime[carNumber, default: 0] += time - parkingLot[carNumber]!
            parkingLot[carNumber] = nil
        }
    }
    
    let allTime = toMin("23:59")
    
    for item in parkingLot {
        parkingTime[item.key, default: 0] += allTime - item.value
    }
    
    
    for item in parkingTime {
        
        let time = item.value
        
        if time <= primeT {
            parkingTime[item.key] = primeM
        }
        else {
            let money = primeM + Int(ceil(Double(item.value-primeT) / Double(addT))) * addM
            parkingTime[item.key] = money
        }
    }
    
    return parkingTime.sorted{ $0.key < $1.key }.map{ $0.value }
}