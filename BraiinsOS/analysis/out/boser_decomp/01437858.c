// FUN_01437858 @ 01437858 size=340 calls_out=3 calls_in=2
// strings: hunked

undefined4 FUN_01437858(int param_1)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 local_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  int local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1c;
  int local_18;
  undefined2 local_14;
  
  if (*(uint *)(param_1 + 8) == 2) {
    return 0;
  }
  if ((*(uint *)(param_1 + 8) & 1) == 0) {
    uVar4 = *(uint *)(param_1 + 0x14);
    uVar2 = *(uint *)(*(int *)(param_1 + 0x10) + 0x28);
    if (uVar2 <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar4,uVar2,&DAT_01cf5278);
    }
    iVar3 = uVar4 * 0x34 + *(int *)(*(int *)(param_1 + 0x10) + 0x24) + 0xc;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0xc);
    uVar4 = *(uint *)(*(int *)(param_1 + 0x10) + 0x34);
    if (uVar4 <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar2,uVar4,&DAT_01cf5288);
    }
    iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 0x30) + uVar2 * 0x24 + 0x10;
  }
  iStack_34 = *(int *)(iVar3 + 4);
  iStack_30 = *(int *)(iVar3 + 8);
  iVar3 = 0;
  while (iStack_30 != iVar3) {
    pbVar1 = (byte *)(iStack_34 + iVar3);
    iVar3 = iVar3 + 1;
    if ((*pbVar1 != 9) && (0x5e < *pbVar1 - 0x20)) {
      return 0;
    }
  }
  uStack_2c = 0;
  local_14 = 1;
  local_20 = 1;
  local_1c = 0;
  local_24 = 0x2c;
  local_38 = 0x2c;
  local_28 = iStack_30;
  local_18 = iStack_30;
  iVar3 = FUN_0140d230(&local_38);
  if (iVar3 == 0) {
    return 0;
  }
  uVar5 = FUN_013245a0();
  if ((int)((ulonglong)uVar5 >> 0x20) != 7) {
    return 0;
  }
  iVar3 = 0;
  do {
    if (iVar3 == 7) {
      return 1;
    }
    uVar2 = (uint)*(byte *)((int)uVar5 + iVar3);
    uVar4 = (uint)(byte)"c"[iVar3];
    iVar3 = iVar3 + 1;
    if (uVar2 - 0x41 < 0x1a) {
      uVar2 = uVar2 | 0x20;
    }
    if (uVar4 - 0x41 < 0x1a) {
      uVar4 = uVar4 | 0x20;
    }
  } while (uVar2 == uVar4);
  return 0;
}

