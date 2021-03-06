/*
 * Seven Kingdoms: Ancient Adversaries
 *
 * Copyright 1997,1998 Enlight Software Ltd.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

// Filename    : OVQUEUE.H
// Description : header file of variable length queue


#ifndef __OVQUEUE_H
#define __OVQUEUE_H

class VLenQueue
{
public:
	char*	queue_buf;
	int	queue_buf_size;
	int	queued_size;
	char* queue_ptr;

public:
	VLenQueue();
	VLenQueue(int);
	VLenQueue(VLenQueue &);
	~VLenQueue();

	VLenQueue& operator= (VLenQueue &);
	void	clear();
	char* reserve( int );
	void	append_queue(VLenQueue &);
	void	swap(VLenQueue &);
	int	length();

private:
	void	expand( int );
};

#endif
