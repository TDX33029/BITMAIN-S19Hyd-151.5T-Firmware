// FUN_01313684 @ 01313684 size=244 calls_out=4 calls_in=0
// strings: 

void FUN_01313684(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 **local_28;
  int iStack_24;
  int iStack_20;
  undefined4 *local_18;
  undefined4 **local_14;
  
  iVar1 = FUN_012f5598(param_2);
  if (iVar1 == 0) {
    local_18 = &DAT_018d88b4;
    DataMemoryBarrier(0xb);
    if (DAT_018d88b4 != 0) {
      local_14 = &local_18;
      local_28 = &local_14;
      FUN_015eedc4(&DAT_018d88b4,0,&local_28,&DAT_0188f03c,&DAT_0188e9dc);
    }
    iVar1 = DAT_018d88b8;
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
  FUN_0130f7f8(param_2);
  FUN_01310120(&local_28,param_2,param_3);
  if (local_28 == (undefined4 **)0x4) {
    *param_1 = 4;
    return;
  }
  *param_1 = (int)local_28;
  param_1[1] = iStack_24;
  param_1[2] = iStack_20;
  return;
}

