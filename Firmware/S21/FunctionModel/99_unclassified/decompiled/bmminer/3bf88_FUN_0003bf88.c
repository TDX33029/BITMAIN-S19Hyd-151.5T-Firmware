// FUN_0003bf88 @ 0003bf88  size=140  callers=1
// program: bmminer


void FUN_0003bf88(int param_1)

{
  int iVar1;
  epoll_event local_38;
  itimerspec local_28;
  
  iVar1 = epoll_create1(0);
  *(int *)(param_1 + 0x18) = iVar1;
  *(code **)(param_1 + 4) = FUN_0003aa84;
  iVar1 = timerfd_create(1,0);
  local_28.it_interval.tv_sec = 1;
  local_28.it_interval.tv_nsec = 0;
  local_28.it_value.tv_nsec = 0;
  local_28.it_value.tv_sec = 1;
  timerfd_settime(iVar1,0,&local_28,(itimerspec *)0x0);
  local_38.events = 0x80000001;
  local_38.data.fd = param_1 + 4;
  epoll_ctl(*(int *)(param_1 + 0x18),1,iVar1,&local_38);
  *(int *)(param_1 + 0x1c) = iVar1;
  return;
}

