// FUN_0003c27c @ 0003c27c  size=164  callers=1
// program: bmminer


void FUN_0003c27c(undefined4 param_1)

{
  int __ufd;
  epoll_event local_38;
  itimerspec local_28;
  
  *(code **)(param_1 + 4) = FUN_0003c16c;
  local_38.events = 0x80000001;
  local_38.data.ptr = (void *)param_1;
  epoll_ctl(*(int *)(*(int *)(param_1 + 0x6c) + 0x18),1,*(int *)(param_1 + 100),&local_38);
  __ufd = timerfd_create(1,0);
  local_28.it_interval.tv_sec = 1;
  local_28.it_interval.tv_nsec = 0;
  local_28.it_value.tv_nsec = 0;
  local_28.it_value.tv_sec = 1;
  timerfd_settime(__ufd,0,&local_28,(itimerspec *)0x0);
  local_38.data.fd = param_1 + 4;
  local_38.events = 0x80000001;
  epoll_ctl(*(int *)(*(int *)(param_1 + 0x6c) + 0x18),1,__ufd,&local_38);
  *(int *)(param_1 + 8) = __ufd;
  return;
}

