// FUN_008f0d24 @ 008f0d24 size=608 calls_out=6 calls_in=2
// strings: 

void FUN_008f0d24(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined8 in_d0;
  undefined *local_48;
  undefined4 local_44;
  int *local_40;
  int *local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  int *local_30;
  int *local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  
  piVar4 = (int *)(param_1 + 0x60);
  do {
    if (*piVar4 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar4);
      goto LAB_008f0d5c;
    }
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = 1;
  DataMemoryBarrier(0xb);
LAB_008f0d5c:
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    if (*(char *)(param_1 + 100) != '\0') {
      uVar3 = 0;
LAB_008f0ecc:
      local_2c = (int *)CONCAT31(local_2c._1_3_,(char)uVar3);
      local_30 = piVar4;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00347759,0x19,&local_30,&DAT_01866e14,&DAT_01866d84);
    }
    *(undefined8 *)(param_1 + 0x70) = in_d0;
    *(uint *)(param_1 + 0x68) = param_3;
    *(undefined4 *)(param_1 + 0x6c) = param_4;
  }
  else {
    uVar3 = FUN_015bf3f8();
    uVar3 = uVar3 ^ 1;
    if (*(char *)(param_1 + 100) != '\0') goto LAB_008f0ecc;
    *(uint *)(param_1 + 0x68) = param_3;
    *(undefined4 *)(param_1 + 0x6c) = param_4;
    *(undefined8 *)(param_1 + 0x70) = in_d0;
    if (uVar3 != 0) goto LAB_008f0d98;
  }
  if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar2 = FUN_015bf3f8(), iVar2 == 0)) {
    *(undefined1 *)(param_1 + 100) = 1;
  }
LAB_008f0d98:
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = 0;
  if (iVar2 == 2) {
    FUN_016d6968(0xf0,piVar4,0x81,1);
  }
  if (((param_3 & 1) != 0) && (DataMemoryBarrier(0xb), DAT_018d8068 == 0)) {
    local_44 = 8;
    local_48 = &DAT_0056a8d8;
    FUN_009b4e0c(&local_40,DAT_018d7fb0 + 8,&local_48,1);
    if (local_40 != (int *)0x5) {
      local_24 = local_34;
      local_30 = local_40;
      local_2c = local_3c;
      uStack_28 = uStack_38;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_30,&DAT_01869dec,&DAT_01886b2c);
    }
    do {
      bVar1 = (bool)hasExclusiveAccess(local_3c + 2);
    } while (!bVar1);
    local_3c[2] = (int)in_d0;
    local_3c[3] = (int)((ulonglong)in_d0 >> 0x20);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *local_3c;
      bVar1 = (bool)hasExclusiveAccess(local_3c);
    } while (!bVar1);
    *local_3c = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078fa50();
      return;
    }
  }
  return;
}

