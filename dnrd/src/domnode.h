/*

    File: domnode.c
    
    Copyright (C) 2004 by Natanael Copa <n@tanael.org>

    This source is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2, or (at your option)
    any later version.

    This source is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

*/


#ifndef DOMNODE_H
#define DOMNODE_H

#include "srvnode.h"

typedef struct _domnode {
  char            *domain;  /* the domain */
  srvnode_t       *srvlist; /* linked list of servers */
  struct _domnode *next;    /* ptr to next server */
} domnode_t;


domnode_t *alloc_domnode(void);
domnode_t *ins_domnode (domnode_t *list, domnode_t *p);
domnode_t *del_domnode(domnode_t *list);
domnode_t *destroy_domnode(domnode_t *p);
domnode_t *empty_domlist(domnode_t *head);
domnode_t *destroy_domlist(domnode_t *head);
domnode_t *add_domain(domnode_t *list, char *name);
domnode_t *search_domain(domnode_t *head, char *name);





#endif




