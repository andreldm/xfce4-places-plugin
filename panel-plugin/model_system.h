/*  xfce4-places-plugin
 *
 *  Copyright (c) 2007 Diego Ongaro <ongardie@gmail.com>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Library General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef _XFCE_PANEL_PLACES_MODEL_SYSTEM_H
#define _XFCE_PANEL_PLACES_MODEL_SYSTEM_H

#include "model.h"
#include <glib.h>

typedef struct _BookmarksSystem BookmarksSystem;

BookmarksSystem*
places_bookmarks_system_init();

void
places_bookmarks_system_visit(BookmarksSystem *b, BookmarksVisitor *visitor);

gboolean
places_bookmarks_system_changed(BookmarksSystem *b);

void
places_bookmarks_system_finalize(BookmarksSystem *b);

void
places_bookmarks_system_bi_system_mod(BookmarksSystem *b, 
                                      BookmarkInfo *other);

#endif
// vim: ai et tabstop=4