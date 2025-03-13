# Write your MySQL query statement below
SELECT dept.name AS "Department", emp.name AS "Employee", emp.salary AS "Salary"
FROM Employee AS emp
JOIN Department AS dept ON emp.departmentId = dept.id
WHERE emp.salary = (
    SELECT MAX(salary) 
    FROM Employee 
    WHERE departmentId = emp.departmentId
);
