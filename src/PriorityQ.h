/**
 * Copyright (C) 2011 Eric Huang
 *
 * This file is part of rectpack.
 *
 * rectpack is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * rectpack is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with rectpack. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef PRIORITYQ_H
#define PRIORITYQ_H

#include "HeapBox.h"
#include <vector>

class PriorityQ : private std::vector<HeapBox> {
 public:
  PriorityQ();
  virtual ~PriorityQ();
  const HeapBox& top() const;
  void pop();
  void push(const HeapBox& hb);
  void clear();
  size_t size() const;
  bool empty() const;
  void print() const;

 private:
  std::greater<HeapBox> m_Greater;
};

#endif // PRIORITYQ_H