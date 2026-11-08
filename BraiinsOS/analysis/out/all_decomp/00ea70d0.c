// FUN_00ea70d0 @ 00ea70d0 size=620 calls_out=12 calls_in=2
// strings: BUG: Missing license info

void FUN_00ea70d0(int *param_1,int *param_2,undefined4 param_3)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  int local_e0;
  int local_dc;
  undefined1 auStack_d8 [88];
  undefined1 auStack_80 [92];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0x11]) {
  case '\0':
    piVar4 = (int *)*param_2;
    param_2[1] = (int)piVar4;
    param_2[2] = (int)piVar4;
    *(undefined1 *)(param_2 + 0x10) = 0;
LAB_00ea7158:
    iVar5 = *piVar4;
    *(undefined1 *)((int)param_2 + 0x1d) = 0;
    param_2[5] = iVar5 + 8;
    param_2[6] = (int)(piVar4 + 1);
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0187c2c0);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0187c2c0);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x10]) {
    case '\0':
      piVar4 = (int *)param_2[2];
      goto LAB_00ea7158;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018acd5c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018acd5c);
    }
  }
  bVar2 = FUN_00e7c80c(param_2 + 3,param_3);
  if (bVar2 == 2) {
    *(undefined1 *)(param_2 + 0x10) = 3;
    *param_1 = 4;
    *(undefined1 *)(param_2 + 0x11) = 3;
    return;
  }
  if (*(char *)((int)param_2 + 0x1d) == '\x04') {
    FUN_0163bdc0(param_2 + 8);
    if (param_2[0xc] != 0) {
      (**(code **)(param_2[0xc] + 0xc))(param_2[0xd]);
    }
    *(undefined1 *)(param_2 + 7) = 0;
  }
  *(undefined1 *)(param_2 + 0x10) = 1;
  if ((bVar2 & 1) != 0) {
    local_dc = FUN_00f22cac();
    local_e0 = 3;
    goto LAB_00ea72e4;
  }
  piVar4 = (int *)param_2[1];
  iVar5 = *piVar4;
  puVar6 = (uint *)(iVar5 + 0x98);
  uVar3 = *(uint *)(iVar5 + 0x98);
  if ((uVar3 < 0xfffffff0) && ((uVar3 & 8) == 0)) {
    if (*puVar6 != uVar3) {
      ClearExclusiveLocal();
      goto LAB_00ea724c;
    }
    bVar1 = (bool)hasExclusiveAccess(puVar6);
    if (!bVar1) goto LAB_00ea724c;
    *puVar6 = uVar3 + 0x10;
    DataMemoryBarrier(0xb);
  }
  else {
LAB_00ea724c:
    FUN_0127d66c(puVar6);
  }
  FUN_0128236c(puVar6);
  FUN_0128236c((uint)puVar6 | 1);
  DataMemoryBarrier(0xb);
  piVar4[1] = *(uint *)(iVar5 + 0x100) & 0xfffffffe;
  piVar4 = (int *)0x0;
  if (*(int *)(iVar5 + 0xa0) != 3) {
    piVar4 = (int *)(iVar5 + 0xa0);
  }
  FUN_00ebe0dc(&local_e0,piVar4);
  if (local_e0 == 3) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("BUG: Missing license info",0x19,&DAT_0187c2d0);
  }
  FUN_016dd1aa(auStack_80,auStack_d8,0x58);
  FUN_01282570(puVar6);
  FUN_01282570((uint)puVar6 | 1);
  DataMemoryBarrier(0xb);
  do {
    uVar3 = *puVar6;
    bVar1 = (bool)hasExclusiveAccess(puVar6);
  } while (!bVar1);
  *puVar6 = uVar3 - 0x10;
  if ((uVar3 & 0xfffffff2) == 0x12) {
    FUN_0127d34c(puVar6);
  }
LAB_00ea72e4:
  *param_1 = local_e0;
  param_1[1] = local_dc;
  FUN_016dd1aa(param_1 + 2,auStack_80,0x58);
  *(undefined1 *)(param_2 + 0x11) = 1;
  return;
}

