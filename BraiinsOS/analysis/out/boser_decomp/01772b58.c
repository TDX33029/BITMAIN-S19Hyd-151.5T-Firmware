// FUN_01772b58 @ 01772b58 size=180 calls_out=5 calls_in=1
// strings: 

void FUN_01772b58(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *unaff_r4;
  
  if (*param_1 != 3 || param_1[1] != 0) {
    FUN_0142e6dc(param_1);
  }
  if (param_1[0x25] != 0) {
    FUN_01773150();
  }
  if (((*(byte *)(param_1 + 0x20) != 0xb) && (9 < *(byte *)(param_1 + 0x20))) &&
     (param_1[0x22] != 0)) {
    thunk_FUN_01be4678(param_1[0x21]);
  }
  if (param_1[0x1e] != 0) {
    unaff_r4 = (int *)param_1[0x1f];
  }
  if (param_1[0x1e] != 0 && (int *)param_1[0x1f] != (int *)0x0) {
    FUN_014295d0(unaff_r4 + 2);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *unaff_r4;
      bVar1 = (bool)hasExclusiveAccess(unaff_r4);
    } while (!bVar1);
    *unaff_r4 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01436a38(unaff_r4);
      return;
    }
    return;
  }
  return;
}

