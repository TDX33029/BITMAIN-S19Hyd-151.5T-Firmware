// FUN_0003a96c @ 0003a96c  size=220  callers=3
// program: bmminer


void FUN_0003a96c(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  epoll_event local_18;
  
  iVar2 = FUN_0003a874();
  if (iVar2 == 0) {
    *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) | 2;
    return;
  }
  if (*(int *)(param_1 + 0x24) == *(int *)(param_1 + 0x2c) >> 0x1f &&
      *(int *)(param_1 + 0x20) == *(int *)(param_1 + 0x2c)) {
    bVar1 = *(byte *)(param_1 + 0x7c);
    if ((bVar1 & 0x20) == 0) {
      if ((bVar1 & 1) == 0) {
        *(byte *)(param_1 + 0x7c) = bVar1 | 2;
      }
      else {
        *(uint *)(param_1 + 0x60) = bVar1 & 0x20;
        FUN_0003a8c4(param_1);
        *(undefined4 *)(param_1 + 0x68) = 0x78;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x68) = 0x14;
      *(undefined4 *)(param_1 + 0x60) = 2;
      FUN_0003a8c4(param_1);
      (**(code **)(param_1 + 0xc))(param_1);
    }
  }
  else {
    local_18.events = 0x80000004;
    local_18.data.ptr = (void *)param_1;
    epoll_ctl(*(int *)(*(int *)(param_1 + 0x6c) + 0x18),3,*(int *)(param_1 + 100),&local_18);
    *(undefined4 *)(param_1 + 0x60) = 2;
    *(undefined4 *)(param_1 + 0x68) = 0x14;
  }
  return;
}

