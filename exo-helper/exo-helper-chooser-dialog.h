/* $Id$ */
/*-
 * Copyright (c) 2003-2006 Benedikt Meurer <benny@xfce.org>.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2 of the License, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc., 59 Temple
 * Place, Suite 330, Boston, MA  02111-1307  USA.
 */

#ifndef __EXO_HELPER_CHOOSER_DIALOG_H__
#define __EXO_HELPER_CHOOSER_DIALOG_H__

#include <exo-helper/exo-helper-chooser.h>

G_BEGIN_DECLS;

typedef struct _ExoHelperChooserDialogClass ExoHelperChooserDialogClass;
typedef struct _ExoHelperChooserDialog      ExoHelperChooserDialog;

#define EXO_TYPE_HELPER_CHOOSER_DIALOG            (exo_helper_chooser_dialog_get_type ())
#define EXO_HELPER_CHOOSER_DIALOG(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), EXO_TYPE_HELPER_CHOOSER_DIALOG, ExoHelperChooserDialog))
#define EXO_HELPER_CHOOSER_DIALOG_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass), EXO_TYPE_HELPER_CHOOSER_DIALOG, ExoHelperChooserDialogClass))
#define EXO_IS_HELPER_CHOOSER_DIALOG(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), EXO_TYPE_HELPER_CHOOSER_DIALOG))
#define EXO_IS_HELPER_CHOOSER_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), EXO_TYPE_HELPER_CHOOSER_DIALOG))
#define EXO_HELPER_CHOOSER_DIALOG_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj), EXO_TYPE_HELPER_CHOOSER_DIALOG, ExoHelperChooserDialogClass))

GType      exo_helper_chooser_dialog_get_type (void) G_GNUC_CONST;

GtkWidget *exo_helper_chooser_dialog_new      (void) G_GNUC_MALLOC;

G_END_DECLS;

#endif /* !__EXO_HELPER_CHOOSER_DIALOG_H__ */