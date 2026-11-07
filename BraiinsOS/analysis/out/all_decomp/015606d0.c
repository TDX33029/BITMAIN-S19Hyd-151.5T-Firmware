// FUN_015606d0 @ 015606d0 size=360 calls_out=7 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_015606d0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  uint local_78;
  int *local_74;
  undefined1 local_70;
  int local_54;
  undefined1 *puStack_24;
  undefined1 auStack_20 [8];
  
  do {
    if (*param_1 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(param_1);
      goto LAB_015606fc;
    }
    bVar3 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar3);
  *param_1 = 1;
  DataMemoryBarrier(0xb);
LAB_015606fc:
  uVar2 = 0;
  if ((DAT_018dd988 & 0x7fffffff) != 0) {
    uVar2 = FUN_015bf3f8(DAT_018dd988,param_2);
    uVar2 = uVar2 ^ 1;
  }
  local_70 = (undefined1)uVar2;
  bVar3 = (char)param_1[1] != '\0';
  local_78 = (uint)bVar3;
  local_74 = param_1;
  if (bVar3) {
    FUN_0155f3e8(&local_78,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018a8e9c);
  }
  iVar1 = FUN_01533a98(param_1 + 6);
  if (iVar1 == 0) {
    local_54 = -0x80000000;
  }
  else {
    FUN_016dd1aa(&local_78,iVar1 + 0x10,0x60);
    *(undefined4 *)(iVar1 + 0x34) = 0x80000000;
    if (local_54 != -0x80000000) {
      FUN_0155e9e8(&local_78);
    }
  }
  if (((uVar2 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar1 = FUN_015bf3f8(), iVar1 == 0))
  {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar1 = *param_1;
    bVar3 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar3);
  *param_1 = 0;
  if (iVar1 == 2) {
    puStack_24 = auStack_20 + 0x14;
    software_interrupt(0);
    FUN_016d3496(param_1,0x81,1,param_5);
    return;
  }
  return;
}

