# Write your MySQL query statement below
-- select name as Customers from Customers where id not in (select distinct customerId from Orders);
select c.name as Customers from Customers as c Left Join Orders as o ON c.id=o.customerId  where o.customerId is NULL;