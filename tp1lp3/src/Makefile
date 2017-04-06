########################################################################
# Code listing from "Advanced Linux Programming," by CodeSourcery LLC  #
# Copyright (C) 2001 by New Riders Publishing                          #
# See COPYRIGHT for license information.                               #
########################################################################

# Default compiler options for C and C++.  To build with other options,
# provide a definition of CFLAGS when invoking make.  For example,
# invoke "make CFLAGS=-O2 all".
CFLAGS		= -g -Wall
CXXFLAGS	= $(CFLAGS)

# Pass these variables to make subprocesses.
export 		CFLAGS CXXFLAGS

# The subdirectories in this directory.
SUBDIRS		=  chapter-3 chapter-4 chapter-5 \

.PHONY:		all clean $(SUBDIRS)

# The default target: build the contents of each subdirectory.
all:		$(SUBDIRS)

# For each subdirectory, invoke a make subprocess.
$(SUBDIRS):
	cd $@; $(MAKE)

# Clean up build products in all subdirectories.
clean:
	for subdir in $(SUBDIRS); do \
	  (cd $${subdir}; $(MAKE) $@); \
	done
