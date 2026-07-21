# Write your MySQL query statement below
SELECT e2.name As Employee
FROM Employee as e1 JOIN Employee as e2
ON e1.id=e2.managerId
AND e2.salary>e1.salary

