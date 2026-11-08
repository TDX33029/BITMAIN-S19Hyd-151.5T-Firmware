// FUN_0003c0f8 @ 0003c0f8  size=68  callers=1
// program: bmminer


void FUN_0003c0f8(int param_1)

{
  epoll_ctl(*(int *)(*(int *)(param_1 + 0x6c) + 0x18),2,*(int *)(param_1 + 100),(epoll_event *)0x0);
  epoll_ctl(*(int *)(*(int *)(param_1 + 0x6c) + 0x18),2,*(int *)(param_1 + 8),(epoll_event *)0x0);
  close(*(int *)(param_1 + 8));
  return;
}

