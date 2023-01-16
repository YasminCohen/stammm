#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "graph.h"

int main()
{
    // char choice, c;
    char choice;
    char c;
    int src = 0;
    int numOfNodes = 0;
    // src = 0;
    // v = src;
    p_node temp = NULL; 
    p_node *head = &temp;
    while (scanf("%c", &choice) != EOF)
    {
        switch (choice)
        {
    
          case 'A':
            deleteGraph(head);
            scanf("%d", &numOfNodes);
            *head = createGraph(numOfNodes);

            // scanf("%c", &c);

            //while (scanf("%c", &c) != 0)
            while (scanf("%c", &c) != EOF)
            {
                if (c == 'n')
                {
                    scanf("%d", &src);
                    addNode(head, src);
                }
                else
                {
                    break;
                }
            }
            // choice = c;
            // continue;
            break;
        
          case 'B':
            addNode_B(head);
            break;
        
        case 'D':
            deleteNode(head);
            break;

        case 'S':
            int start, end;
            scanf("%d %d", &start, &end);
            int dist = shortestPath(*head, start, end);
            printf("Dijsktra shortest path: %d \n", dist);
            break;

        case 'T':
            TSP(*head);
          break;
        }
   
    }
    deleteGraph(head);
}
