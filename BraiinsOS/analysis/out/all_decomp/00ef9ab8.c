// FUN_00ef9ab8 @ 00ef9ab8 size=756 calls_out=15 calls_in=1
// strings: BUG: Missing license info

void FUN_00ef9ab8(int *param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint *puVar7;
  undefined8 uVar8;
  int local_e0;
  int local_dc;
  undefined1 auStack_d8 [88];
  undefined1 auStack_80 [92];
  
  uVar8 = thunk_FUN_016de0ee(param_1,0x40);
  iVar6 = (int)uVar8 + (int)((ulonglong)uVar8 >> 0x20);
  bVar2 = *(byte *)(iVar6 + 0x38);
  if (bVar2 == 1) {
LAB_00ef9b04:
    bVar2 = ~*(byte *)(iVar6 + 0x30) & 1 | *(char *)(iVar6 + 0x31) != '\0';
  }
  else if (bVar2 != 2) {
    FUN_015e8e6c(iVar6,FUN_005bc49c);
    *(undefined1 *)(iVar6 + 0x38) = 1;
    goto LAB_00ef9b04;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x94)) {
  case 0:
    piVar5 = *(int **)(param_2 + 0x50);
    *(int **)(param_2 + 0x54) = piVar5;
    *(int **)(param_2 + 0x58) = piVar5;
    *(undefined1 *)(param_2 + 0x90) = 0;
LAB_00ef9bb0:
    iVar6 = *piVar5;
    *(undefined1 *)(param_2 + 0x6d) = 0;
    *(int *)(param_2 + 100) = iVar6 + 8;
    *(int **)(param_2 + 0x68) = piVar5 + 1;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0187c2c0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0187c2c0);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x90)) {
    case 0:
      piVar5 = *(int **)(param_2 + 0x58);
      goto LAB_00ef9bb0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018acd5c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018acd5c);
    }
  }
  bVar3 = FUN_00e7c80c(param_2 + 0x5c,param_3);
  if (bVar3 == 2) {
    *(undefined1 *)(param_2 + 0x94) = 3;
    *(undefined1 *)(param_2 + 0x90) = 3;
    iVar6 = FUN_016540e8(bVar2 == 2 | bVar2 & 1,param_2,param_3);
    if (iVar6 == 0) {
      iVar6 = 4;
    }
    else {
      iVar6 = 5;
    }
    *param_1 = iVar6;
    return;
  }
  if (*(char *)(param_2 + 0x6d) == '\x04') {
    FUN_0163bdc0(param_2 + 0x70);
    if (*(int *)(param_2 + 0x80) != 0) {
      (**(code **)(*(int *)(param_2 + 0x80) + 0xc))(*(undefined4 *)(param_2 + 0x84));
    }
    *(undefined1 *)(param_2 + 0x6c) = 0;
  }
  *(undefined1 *)(param_2 + 0x90) = 1;
  if ((bVar3 & 1) != 0) {
    local_dc = FUN_00f22cac();
    local_e0 = 3;
    goto LAB_00ef9d54;
  }
  piVar5 = *(int **)(param_2 + 0x54);
  iVar6 = *piVar5;
  puVar7 = (uint *)(iVar6 + 0x98);
  uVar4 = *(uint *)(iVar6 + 0x98);
  if ((uVar4 < 0xfffffff0) && ((uVar4 & 8) == 0)) {
    if (*puVar7 != uVar4) {
      ClearExclusiveLocal();
      goto LAB_00ef9cbc;
    }
    bVar1 = (bool)hasExclusiveAccess(puVar7);
    if (!bVar1) goto LAB_00ef9cbc;
    *puVar7 = uVar4 + 0x10;
    DataMemoryBarrier(0xb);
  }
  else {
LAB_00ef9cbc:
    FUN_0127d66c(puVar7);
  }
  FUN_0128236c(puVar7);
  FUN_0128236c((uint)puVar7 | 1);
  DataMemoryBarrier(0xb);
  piVar5[1] = *(uint *)(iVar6 + 0x100) & 0xfffffffe;
  piVar5 = (int *)0x0;
  if (*(int *)(iVar6 + 0xa0) != 3) {
    piVar5 = (int *)(iVar6 + 0xa0);
  }
  FUN_00ebe0dc(&local_e0,piVar5);
  if (local_e0 == 3) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("BUG: Missing license info",0x19,&DAT_0187c2d0);
  }
  FUN_016dd1aa(auStack_80,auStack_d8,0x58);
  FUN_01282570(puVar7);
  FUN_01282570((uint)puVar7 | 1);
  DataMemoryBarrier(0xb);
  do {
    uVar4 = *puVar7;
    bVar1 = (bool)hasExclusiveAccess(puVar7);
  } while (!bVar1);
  *puVar7 = uVar4 - 0x10;
  if ((uVar4 & 0xfffffff2) == 0x12) {
    FUN_0127d34c(puVar7);
  }
LAB_00ef9d54:
  FUN_016dd1aa(param_1 + 2,auStack_80,0x58);
  *param_1 = local_e0;
  param_1[1] = local_dc;
  *(undefined1 *)(param_2 + 0x94) = 1;
  return;
}

