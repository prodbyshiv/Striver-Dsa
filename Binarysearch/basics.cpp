
            // BINARY SEARCH BY CODING EXAMPLE

// in binaruy search apply only when we apply search in a sorted area or array or vector 
// coding example [3,4,6,7,9,12,16,17]; find 5, find 6 [3->4->6 found]; index no = 2 what if i have to found 17 in arrays poora array iterate karna hota that is why we use binary search
// pointer as low at 3 and high at 17 evrything btw low and high is considered as search space. 
// mid = 0+7/2 = 3.5 = 3 = mid = 7 = target no! therefore 6 will be on left and evrything greater than 7 will lie right so trim the search space jis hisab se result chaiye
// jaise yaha 6 chaiye to low+high/2 kiye to 7 aaya to aab pata hai ki uske left mr hoga to high ko mid ke left me kar do, now search space has reduced. again do the low+mid/2 and check if is == to target and if greater high =mid-1  left if smaller make low = mid+1
// 

// notice when high goes on left of low we return not found;
//
//
//
//              // pseudo code

//.  f(arr,n,target){
//.      low =0; high = n-1 


// while (low <=high)
// {
//     mid = low+high/2
//     if (arr[mid]==target) 
//     {
//         return mid;
//     }
//     else if (target > arr[mid])
//     {
//         low. =mid+1;
//     }
//     else {
//         high = mid-1;
//     }
    
// }
 // return -1;



//                  RECURSIVE CALL CODE 
//(
//.  f(arr,low,high,target){
// if (low > high)
// {
//     return -1
// }

// mid = low + high /2; 
// if (arr[mid]==target)
// {
//    return mid;
// }
// else if (target > a[mid])
// {
//    return f(arr,mid+1,high,target);
// }

// else
// {
//     return f(low,mid,mid-1,target);
// }



}
//
//
//
//
//
//
//
