import Foundation

func solution(_ bridge_length:Int, _ weight:Int, _ truck_weights:[Int]) -> Int {
    
    var curTime = 0
    var bridgeWeight = 0
    var trucks = truck_weights
    var bridge = Array(repeating: 0, count: bridge_length)
    var truckIndex = 0
    
    
    while truckIndex < trucks.count {
        curTime += 1
        
        let passTruck = bridge.removeFirst()
        bridgeWeight -= passTruck
        let nextTruck = trucks[truckIndex]
        
        if bridgeWeight + nextTruck <= weight {
            bridge.append(nextTruck)
            bridgeWeight += nextTruck
            truckIndex += 1
        }
        else {
            bridge.append(0)
        }
        
    }
    
    return curTime + bridge_length
}