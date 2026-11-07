// FUN_0130a8ac @ 0130a8ac size=244 calls_out=4 calls_in=0
// strings: 

void FUN_0130a8ac(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 **local_28;
  int iStack_24;
  int iStack_20;
  undefined4 *local_18;
  undefined4 **local_14;
  
  iVar1 = FUN_012f6850(param_2);
  if (iVar1 == 0) {
    local_18 = &DAT_018d889c;
    DataMemoryBarrier(0xb);
    if (DAT_018d889c != 0) {
      local_14 = &local_18;
      local_28 = &local_14;
      FUN_015eedc4(&DAT_018d889c,0,&local_28,&DAT_0188f050,&DAT_0188e9dc);
    }
    iVar1 = DAT_018d88a0;
    *param_1 = 3;
    iVar1 = *(int *)(iVar1 + 0x68);
    if (*(char *)(iVar1 + 0xc) == '\x01') {
      iVar2 = *(int *)(iVar1 + 4);
      iVar1 = *(int *)(iVar1 + 8);
    }
    else {
      iVar2 = 1;
      iVar1 = 0;
    }
    param_1[1] = iVar2;
    param_1[2] = iVar1;
    return;
  }
  FUN_0130a360(param_2);
  FUN_01309af8(&local_28,param_2,param_3);
  if (local_28 == (undefined4 **)0x4) {
    *param_1 = 4;
    return;
  }
  *param_1 = (int)local_28;
  param_1[1] = iStack_24;
  param_1[2] = iStack_20;
  return;
}

