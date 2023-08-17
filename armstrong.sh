is_armstrong() {
    num=$1
    sum=0
    temp=$num
    num_of_digits=${#num}
    
    while [ $temp -gt 0 ]
    do
        digit=$((temp % 10))
        sum=$((sum + digit**num_of_digits))
        temp=$((temp / 10))
    done
