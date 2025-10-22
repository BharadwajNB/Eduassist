-- Description: Create tables for branch, account, and depositer, insert records, and perform basic queries.

-- Create Branch table
CREATE TABLE branch (
    branch_name VARCHAR2(30),
    branch_city VARCHAR2(30)
);

-- Insert branch records
INSERT INTO branch VALUES ('Kakinada', 'Kakinada');
INSERT INTO branch VALUES ('Gandhinagar', 'Kakinada');
INSERT INTO branch VALUES ('Ashoknagar', 'Kakinada');
INSERT INTO branch VALUES ('Main Road', 'Kakinada');

-- View branch table
SELECT * FROM branch;


-- Create Account table
CREATE TABLE account (
    branch_name VARCHAR2(30),
    acc_no NUMBER,
    balance FLOAT
);

-- Insert account records
INSERT INTO account VALUES ('Kakinada', 1122334455, 112.96);
INSERT INTO account VALUES ('Main Road', 122221111, 1992.96);
INSERT INTO account VALUES ('Gandhinagar', 1000000001, 1552.96);
INSERT INTO account VALUES ('Ashoknagar', 1999999299, 11211.96);

-- View account table
SELECT * FROM account;


-- Create Depositer table
CREATE TABLE depositer (
    customer_name VARCHAR2(30),
    acc_no NUMBER
);

-- Insert depositer records
INSERT INTO depositer VALUES ('Bigal', 1122334455);
INSERT INTO depositer VALUES ('Chandan', 1000000001);
INSERT INTO depositer VALUES ('Sushil', 122221111);
INSERT INTO depositer VALUES ('Bharadwaj', 1999999299);

-- View depositer table
SELECT * FROM depositer;


-- Example of UPDATE query
UPDATE account
SET balance = balance + 100
WHERE branch_name = 'Kakinada';

-- Check the updated data
SELECT * FROM account;