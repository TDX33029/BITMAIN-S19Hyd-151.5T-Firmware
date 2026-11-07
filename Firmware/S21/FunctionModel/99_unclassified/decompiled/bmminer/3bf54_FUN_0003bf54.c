// FUN_0003bf54 @ 0003bf54  size=52  callers=0
// program: bmminer


void FUN_0003bf54(undefined4 param_1)

{
  epoll_event local_18;
  
  local_18.events = 0x80000001;
  local_18.data.ptr = (void *)param_1;
  epoll_ctl(*(int *)(param_1 + 0x18),1,*(int *)(param_1 + 0x10),&local_18);
  return;
}

