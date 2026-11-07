// FUN_0003aab8 @ 0003aab8  size=192  callers=3
// program: bmminer


void FUN_0003aab8(undefined4 param_1,undefined4 param_2)

{
  int __fd;
  uint uVar1;
  undefined4 local_2c;
  epoll_event local_28;
  
  signal(0xd,(__sighandler_t)0x1);
  __fd = socket(2,1,0);
  *(int *)(param_1 + 0x10) = __fd;
  local_2c = 1;
  setsockopt(__fd,1,0xf,&local_2c,4);
  FUN_0003a81c(*(undefined4 *)(param_1 + 0x10),param_1 + 0x28,param_2,
               *(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x20) = 0x10;
  uVar1 = fcntl(*(int *)(param_1 + 0x10),3,0);
  fcntl(*(int *)(param_1 + 0x10),4,uVar1 | 0x800);
  listen(*(int *)(param_1 + 0x10),0x80);
  local_28.events = 0x80000001;
  local_28.data.ptr = (void *)param_1;
  epoll_ctl(*(int *)(param_1 + 0x18),1,*(int *)(param_1 + 0x10),&local_28);
  return;
}

