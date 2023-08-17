read -p "Enter the value of n: " n

sum=0

for ((i=2; i<=n; i+=2))
do
    square=$((i*i))
    sum=$((sum + square))
done

echo "The sum of the series is: $sum"