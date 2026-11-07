// FUN_0003c23c @ 0003c23c  size=64  callers=0
// program: bmminer


int FUN_0003c23c(int param_1)

{
  int iVar1;
  epoll_event eStack_18;
  
  iVar1 = epoll_wait(*(int *)(param_1 + 0x18),&eStack_18,1,0);
  if (0 < iVar1) {
    (**(code **)eStack_18.data.ptr)(&eStack_18);
  }
  return iVar1;
}

