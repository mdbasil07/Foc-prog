read -p "Enter the value of n: " n
sum=0

for ((i=1; i<=n; i++))
do
    sum=$((sum + i))
done

echo "The sum of the series is: $sum"