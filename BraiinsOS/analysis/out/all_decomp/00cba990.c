// FUN_00cba990 @ 00cba990 size=372 calls_out=7 calls_in=1
// strings: No temperature from hashboards available

void FUN_00cba990(undefined4 *param_1,int *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((char)param_2[1] != '\0') {
    if ((char)param_2[1] == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018770cc);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018770cc);
  }
  iVar3 = *(int *)(*(int *)(*param_2 + 0x3c8) + 0xc);
  puVar4 = (uint *)(iVar3 + 0x98);
  uVar2 = *(uint *)(iVar3 + 0x98);
  if ((uVar2 < 0xfffffff0) && ((uVar2 & 8) == 0)) {
    if (*puVar4 == uVar2) {
      bVar1 = (bool)hasExclusiveAccess(puVar4);
      if (bVar1) {
        *puVar4 = uVar2 + 0x10;
        DataMemoryBarrier(0xb);
        goto LAB_00cba9fc;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  }
  FUN_0127d66c(puVar4);
LAB_00cba9fc:
  FUN_0128236c(puVar4);
  uVar2 = (uint)puVar4 | 1;
  FUN_0128236c(uVar2);
  DataMemoryBarrier(0xb);
  if ((*(int *)(iVar3 + 0xa0) == 2) || (*(int *)(iVar3 + 0xf8) != 1)) {
    uVar5 = FUN_00c70f88("No temperature from hashboards available",0x28);
    FUN_01282570(puVar4);
    FUN_01282570(uVar2);
    DataMemoryBarrier(0xb);
    do {
      uVar2 = *puVar4;
      bVar1 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar1);
    *puVar4 = uVar2 - 0x10;
    if ((uVar2 & 0xfffffff2) == 0x12) {
      FUN_0127d34c(puVar4);
    }
    uVar6 = 1;
  }
  else {
    uVar5 = *(undefined4 *)(iVar3 + 0xfc);
    FUN_01282570(puVar4);
    FUN_01282570(uVar2);
    DataMemoryBarrier(0xb);
    do {
      uVar2 = *puVar4;
      bVar1 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar1);
    *puVar4 = uVar2 - 0x10;
    uVar6 = 0;
    if ((uVar2 & 0xfffffff2) == 0x12) {
      FUN_0127d34c(puVar4);
    }
  }
  *param_1 = uVar6;
  param_1[1] = uVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return;
}

