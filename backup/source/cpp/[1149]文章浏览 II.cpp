//Table: Views 
//
// 
//+---------------+---------+
//| Column Name   | Type    |
//+---------------+---------+
//| article_id    | int     |
//| author_id     | int     |
//| viewer_id     | int     |
//| view_date     | date    |
//+---------------+---------+
//此表无主键，因此可能会存在重复行。此表的每一行都表示某人在某天浏览了某位作者的某篇文章。 请注意，同一人的 author_id 和 viewer_id 是相
//同的。
// 
//
// 
//
// 编写一条 SQL 查询来找出在同一天阅读至少两篇文章的人，结果按照 id 升序排序。 
//
// 查询结果的格式如下： 
//
// 
//Views table:
//+------------+-----------+-----------+------------+
//| article_id | author_id | viewer_id | view_date  |
//+------------+-----------+-----------+------------+
//| 1          | 3         | 5         | 2019-08-01 |
//| 3          | 4         | 5         | 2019-08-01 |
//| 1          | 3         | 6         | 2019-08-02 |
//| 2          | 7         | 7         | 2019-08-01 |
//| 2          | 7         | 6         | 2019-08-02 |
//| 4          | 7         | 1         | 2019-07-22 |
//| 3          | 4         | 4         | 2019-07-21 |
//| 3          | 4         | 4         | 2019-07-21 |
//+------------+-----------+-----------+------------+
//
//Result table:
//+------+
//| id   |
//+------+
//| 5    |
//| 6    |
//+------+ 
//


//There is no code of C++ type for this problem