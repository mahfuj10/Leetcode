var searchRange = function(nums, target) {
    let start = -1;
    let end = -1;
    for(let i = 0 ; i < nums.length ; i++){
        if(target != nums[i]){
            continue;
        }
        if(start == -1){
            start = i
        }
        end = i
    }

    if(start != -1){
        return [start,end]
    }
    return [-1,-1]
};