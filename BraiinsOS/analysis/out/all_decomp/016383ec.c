// FUN_016383ec @ 016383ec size=324 calls_out=8 calls_in=2
// strings: there is no signal driver running; must be called from the context of Tokio runtime

void FUN_016383ec(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  ulonglong uVar4;
  int local_68;
  int iStack_64;
  int iStack_60;
  undefined1 local_1c;
  
  uVar4 = FUN_0164ec90(param_3);
  piVar3 = (int *)(uVar4 >> 0x20);
  iVar2 = 0x180;
  if ((uVar4 & 1) != 0) {
    iVar2 = 0xb8;
  }
  if (*(int *)((int)piVar3 + iVar2 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("there is no signal driver running, must be called from the context of Tokio runtime"
                 ,0x53,param_3);
  }
  FUN_01635f84(&local_68,param_2);
  if (local_68 == 1) {
    param_1[1] = iStack_64;
    param_1[2] = iStack_60;
    *param_1 = 1;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
  }
  else {
    local_68 = iStack_64;
    iStack_64 = iStack_60;
    local_1c = 0;
    iVar2 = thunk_FUN_016d4a50(0x50);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x50);
    }
    FUN_016dd1aa(iVar2,&local_68,0x50);
    *param_1 = 0;
    param_1[1] = iVar2;
    param_1[2] = &DAT_018acdbc;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
  }
  if ((int)uVar4 == 0) {
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01659344(piVar3);
      return;
    }
  }
  else if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_016586fc(piVar3);
    return;
  }
  return;
}

