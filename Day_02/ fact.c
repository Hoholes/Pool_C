int recursive_fact(int nb){
    if (nb==2){
        return 2;
    }
    return nb * recursive_fact(nb - 1);
    
}

int factorial(int nb) {

    if  (nb==0 || nb==1 ){
        return 1;

    }
    else if (nb<0){       
        return -1;

    }
    else{
           return recursive_fact(nb);
    }
    
}