# Write your MySQL query statement below
select product_name , year , price from Sales as s
inner join Product as p on p.product_id = s.product_id;