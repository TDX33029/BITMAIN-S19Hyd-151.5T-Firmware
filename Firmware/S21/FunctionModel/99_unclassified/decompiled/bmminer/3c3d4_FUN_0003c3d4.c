// FUN_0003c3d4 @ 0003c3d4  size=52  callers=0
// program: bmminer


void FUN_0003c3d4(undefined4 param_1)

{
  epoll_event local_18;
  
  local_18.events = 0x80000004;
  local_18.data.ptr = (void *)param_1;
  epoll_ctl(*(int *)(*(int *)(param_1 + 0x6c) + 0x18),3,*(int *)(param_1 + 100),&local_18);
  return;
}

