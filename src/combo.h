/*
 * Copyright (C) 2002 2003 2004 2009, Magnus Hjorth
 *
 * This file is part of mhWaveEdit.
 *
 * mhWaveEdit is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by        
 * the Free Software Foundation; either version 2 of the License, or  
 * (at your option) any later version.
 *
 * mhWaveEdit is distributed in the hope that it will be useful,   
 * but WITHOUT ANY WARRANTY; without even the implied warranty of  
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with mhWaveEdit; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */


/* This is a dropdown read-only combo box with text items. Under GTK 2.4
 * and later it's a simple subclass of GtkComboBox. */


#ifndef COMBO_H_INCLUDED
#define COMBO_H_INCLUDED

#include "main.h"

#define COMBO_TYPE          (combo_get_type ())
#define COMBO(obj)          (G_TYPE_CHECK_INSTANCE_CAST ((obj), COMBO_TYPE, Combo))
#define IS_COMBO(obj)       (G_TYPE_CHECK_INSTANCE_TYPE ((obj), COMBO_TYPE))
#define COMBO_CLASS(klass)  (G_TYPE_CHECK_CLASS_CAST ((klass),  COMBO_TYPE, ComboClass))

#define COMBO_PARENT_TYPE GtkComboBox
#define COMBO_PARENT_CLASS GtkComboBoxClass
#define COMBO_PARENT_TYPE_FUNC gtk_combo_box_get_type

typedef struct {
     COMBO_PARENT_TYPE parent;
     /* Until GTK+ 2.6 comes out with the
	gtk_combo_box_get_active_text function, this will have to
        make do. */ 
     GList *strings;
     int max_request_width;
} Combo;

typedef struct {
     COMBO_PARENT_CLASS parent_class;
     void (*selection_changed)(Combo *obj);
} ComboClass;

GType combo_get_type(void);
GtkWidget *combo_new(void);
void combo_set_items(Combo *combo, GList *item_strings, int default_index);
void combo_set_selection(Combo *combo, int item_index);
/* The removed item must not be currently selected */
void combo_remove_item(Combo *combo, int item_index);
int combo_selected_index(Combo *combo);

/* Result must be freed by caller */
char *combo_selected_string(Combo *combo);

void combo_set_max_request_width(Combo *c, int w);

#endif
