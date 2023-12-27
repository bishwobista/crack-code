function FindFibo(num){
    if(num < 2){
        return num;
    }

    return FindFibo(num-1) + FindFibo(num-2);
}

