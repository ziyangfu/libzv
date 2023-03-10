/*!
  Copyright (c) 2023

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

      http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  Author: fzy
*/

/*!
 * IO 多路复用后端
 * 功能 ： epoll 封装 */

#ifndef LIBZV_EPOLL_H
#define LIBZV_EPOLL_H

#include <sys/epoll.h>

//! IO 事件


namespace libzv {

using EVENTS_INIT_SIZE = 64;

class Epoll {
public:
    Epoll() = default;
    ~Epoll() = default;
    int EpollInit();
    int EpollCleanup();
    int EpollAddEvent();
    int EpollDelEvent();
    int EpollPollEvents();
private:

};

} // libzv

#endif //LIBZV_EPOLL_H
