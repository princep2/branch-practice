#ifndef HASH_TABLE_H
#define HASH_TABLE_H

struct node {

};

struct list {

};

struct hash_table {

};

int hash(int key, int s); // computes the hash function of the key given s, the size of the table

node *hash_contains(hash_table *t, int key); // returns pointer to node of key if it exists else NULL 
void hash_delete(hash_table *t, int key); // deletes key from hash table if it exists
void hash_insert(hash_table *t, int key, int value); // insert key into hash table
int hash_get(hash_table *t, int key); // gets the value coressponding to the key in the hash table, NULL if it doesn't exist
void hash_init(hash_table **t, int s); // initialise the table
void test(hash_table **t); // test the table's functionality
void pprint(hash_table *t); // pretty print the table, print the table visually as a table


#endif