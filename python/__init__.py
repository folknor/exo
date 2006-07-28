# $Id$
# vim:set ts=4 sw=4 et ai syntax=python:
#
# Copyright (c) 2005-2006 os-cillation
# Copyright (c) 1998-2002 James Henstridge
#
# Written by Benedikt Meurer <benny@xfce.org>.
#
# This library is free software; you can redistribute it and/or
# modify it under the terms of the GNU Lesser General Public
# License as published by the Free Software Foundation; either
# version 2.1 of the License, or (at your option) any later version.
#                                                                             
# This library is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# Lesser General Public License for more details.
#                                                                             
# You should have received a copy of the GNU Lesser General Public
# License along with this library; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
# USA
#

# load the required modules:
from _exo import *



class BindingWithNegation(Binding):
    def __init__(self, src_object, src_property, dst_object, dst_property):
        Binding.__init__(self, src_object, src_property, dst_object, dst_property, lambda value: not value)



class MutualBindingWithNegation(MutualBinding):
    def __init__(self, src_object, src_property, dst_object, dst_property):
        MutualBinding.__init__(self, src_object, src_property, dst_object, dst_property, lambda value: not value, lambda value: not value)