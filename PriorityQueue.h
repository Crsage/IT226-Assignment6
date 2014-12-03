/*
 * PriorityQueue.h
 *
 *  Created on: Dec 2, 2014
 *      Author: csage
 */

#ifndef PRIORITYQUEUE_H_
#define PRIORITYQUEUE_H_

class PriorityQueue
{
	public:
		PriorityQueue();
		virtual ~PriorityQueue();
		void push(std::string item, float priority);
		std::string pop();
		void changePriority(std::string item, int new_p);
};


#endif /* PRIORITYQUEUE_H_ */
