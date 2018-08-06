#include <stdio.h>
#include <stdlib.h>

struct CharacterHashNode 
{
    char data;
    int key;
};

void put(struct CharacterHashNode characterHashNodes, int size, char data);
int getHashCode(int size, char data);

int main() 
{
    struct CharacterHashNode characterHashNodes[128];
    int hashCode ;
    hashCode = getHashCode(128, 'A');
    printf("The hashCode is %d.\n", hashCode);
    return 0;
}

void put(struct CharacterHashNodes characterHashNodes[], int size, char data) 
{
    int hashCode = getHashCode(size, data);
    characterHashNodes[hashCode] = (struct CharacterHashNode)malloc(sizeof(struct CharacterHashNode));
} 

int getHashCode(int size, char data) 
{
    return ((int)data)%size;
}