//This problem demonstrate the sliding Window problem pattern.
//What is sliding window problem pattern??
//below is the link to explore more about sliding window problem pattern.
// https://leetcode.com/discuss/interview-question/3722472/mastering-sliding-window-technique-a-comprehensive-guide#:~:text=The%20main%20idea%20behind%20the,is%20of%20a%20fixed%20size.


//Given, 
//array of integer 
// number 'num' represent the items to be added for sum .
//example
//  let arr = [1,2,3,4,5,6,9,8,7];
//  let num = 3
// here : 1+2+3 = 6 , 1+3+4 = 8 .... 9+8+7 = 24 which is maximum sum of three subarray (array element)



function maxSubarraySum(arr,num){
    if(num > arr.length){
        return null
    }
    let max = -Infinity
    for(let i=0 ; i< arr.length -num +1 ; i++){
        temp = 0;
        for(let j = 0 ; j<num ; j++){
            temp += arr[i+j]
            
        }
        if(temp > max){
            max = temp
        }
        
    } return max

}
 let arr = [1,2,3,4,5,6,9,8,7];
 let num = 3

 console.log(maxSubarraySum(arr,num))