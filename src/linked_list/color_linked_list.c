#include "../image/pixel.h"
#include "color_linked_list.h"

bool png_bytep_exists_in_cll(color_ll *cll, png_bytep color)
{
    if (cll->head->previous != NULL)
    {
        printf("Node is not the head\n");
        exit(EXIT_FAILURE);
    }

    c_node *node = cll->head;

    do
    {
        if (png_bytep_is_equal(color, node->color))
        {
            return true;
        }
    } while (node = node->next);

    return false;
}

bool intp_exists_in_cll(color_ll *cll, int *color)
{
}

c_node *get_at_cll(color_ll *cll, int index)
{
    if (cll->head->previous != NULL)
    {
        printf("Node is not the head\n");
        exit(EXIT_FAILURE);
    }

    if (index < 0)
    {
        printf("Index cannot be less than 0\n");
        exit(EXIT_FAILURE);
    }

    if (index > cll->length - 1)
    {
        printf("Index is greater than the length.");
        exit(EXIT_FAILURE);
    }

    if (index == 0)
    {
        return cll->head;
    }

    if (index == cll->length - 1)
    {
        return cll->tail;
    }

    int count = 0;
    c_node *node = cll->head;

    do
    {
        if (count == index)
        {
            return node;
        }
        count++;
    } while (node = node->next);

    return NULL;
}

void append_data_to_cll(color_ll *cll, int *color)
{
    c_node *node = init_c_node();
    node->color = color;
    append_node_to_cll(cll, node);
}

void append_node_to_cll(color_ll *cll, c_node *node)
{
    if (cll->head == NULL)
    {
        cll->head = node;
        cll->tail = node;
    }
    else
    {
        cll->tail->next = node;
        node->previous = cll->tail;
        cll->tail = node;
    }

    cll->length++;
}

bool cll_contains(color_ll *cll, int *color)
{
    c_node *node = cll->head;

    while (node != NULL)
    {
        if (rgba_is_equal(node->color, color))
        {
            return true;
        }
    }

    return false;
}

color_ll *init_cll()
{
    color_ll *list = (color_ll *)malloc(sizeof(color_ll));
    list->head = NULL;
    list->tail = NULL;
    list->length = 0;
    list->size = 0;
    return list;
}
