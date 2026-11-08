// FUN_00a247a8 @ 00a247a8 size=1576 calls_out=17 calls_in=0
// strings: 

undefined4 FUN_00a247a8(int param_1,undefined4 *param_2)

{
  short sVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint *puVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  byte *pbVar12;
  int *piVar13;
  bool bVar14;
  undefined8 uVar15;
  uint local_2a0 [144];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x204)) {
  case 0:
    FUN_016dd1aa(param_1 + 0x48,param_1,0x48);
    iVar4 = *(int *)(param_1 + 0x68);
    *(undefined1 **)(param_1 + 0x128) = &DAT_3b9aca00;
    *(undefined1 **)(param_1 + 0x118) = &DAT_3b9aca00;
    puVar7 = (uint *)(iVar4 + 0x98);
    uVar6 = *(uint *)(iVar4 + 0x98);
    if ((uVar6 < 0xfffffff0) && ((uVar6 & 8) == 0)) {
      if (*puVar7 != uVar6) {
        ClearExclusiveLocal();
        goto LAB_00a248a4;
      }
      bVar14 = (bool)hasExclusiveAccess(puVar7);
      if (!bVar14) goto LAB_00a248a4;
      *puVar7 = uVar6 + 0x10;
      DataMemoryBarrier(0xb);
    }
    else {
LAB_00a248a4:
      FUN_0127d66c(puVar7);
    }
    FUN_0128236c(puVar7);
    FUN_0128236c((uint)puVar7 | 1);
    DataMemoryBarrier(0xb);
    sVar1 = *(short *)(iVar4 + 0x9c);
    FUN_01282570(puVar7);
    FUN_01282570((uint)puVar7 | 1);
    DataMemoryBarrier(0xb);
    do {
      uVar6 = *puVar7;
      bVar14 = (bool)hasExclusiveAccess(puVar7);
    } while (!bVar14);
    *puVar7 = uVar6 - 0x10;
    if ((uVar6 & 0xfffffff2) == 0x12) {
      FUN_0127d34c(puVar7);
    }
    bVar14 = sVar1 != 0;
    *(undefined1 **)(param_1 + 0x140) = &DAT_3b9aca00;
    *(bool *)(param_1 + 0x205) = bVar14;
    FUN_00a834a8(param_1 + 0x48,param_1 + 0x90,param_1 + 0x120,bVar14,param_1 + 0x138);
    pbVar12 = (byte *)(param_1 + 0x206);
    *pbVar12 = 0;
    *(int *)(param_1 + 0x1bc) = param_1 + 0x68;
    *(undefined1 *)(param_1 + 0x200) = 0;
    *(undefined1 *)(param_1 + 0x1b8) = 0;
    *(undefined1 *)(param_1 + 0x170) = 0;
    *(undefined1 *)(param_1 + 0x15c) = 0;
    iVar4 = param_1 + 0x120;
    piVar13 = (int *)(param_1 + 0x158);
    *piVar13 = iVar4;
    *(int *)(param_1 + 0x180) = param_1 + 0x78;
    *(int *)(param_1 + 0x16c) = param_1 + 0x138;
    *(byte **)(param_1 + 0x150) = pbVar12;
    *(int **)(param_1 + 0x154) = piVar13;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0186ba94);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0186ba94);
  case 3:
    pbVar12 = *(byte **)(param_1 + 0x150);
    piVar13 = *(int **)(param_1 + 0x154);
    iVar4 = 0;
  }
  uVar15 = thunk_FUN_016de0ee(iVar4,0x40);
  iVar4 = (int)uVar15 + (int)((ulonglong)uVar15 >> 0x20);
  if (*(char *)(iVar4 + 0x38) != '\x01') {
    if (*(char *)(iVar4 + 0x38) == '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_015f853c(&DAT_018ae900);
    }
    FUN_015e8e6c(iVar4,FUN_00a303f4);
    *(undefined1 *)(iVar4 + 0x38) = 1;
  }
  cVar2 = *(char *)(iVar4 + 0x30);
  bVar14 = cVar2 == '\x01';
  if (bVar14) {
    cVar2 = *(char *)(iVar4 + 0x31);
  }
  if (bVar14 && cVar2 == '\0') {
    FUN_016455a4(*param_2,param_2[1]);
    goto LAB_00a27310;
  }
  if ((*(uint *)(iVar4 + 0x24) & 1) == 0) {
    uVar15 = FUN_0164e918();
    if ((uint)uVar15 < 2) {
      uVar15 = CONCAT44((int)((ulonglong)uVar15 >> 0x20),1);
    }
  }
  else {
    uVar15 = CONCAT44(*(undefined4 *)(iVar4 + 0x28),*(undefined4 *)(iVar4 + 0x2c));
  }
  uVar6 = (uint)((ulonglong)uVar15 >> 0x20);
  uVar11 = (uint)uVar15;
  uVar6 = uVar6 ^ uVar6 << 0x11;
  *(uint *)(iVar4 + 0x28) = uVar11;
  *(undefined4 *)(iVar4 + 0x24) = 1;
  uVar6 = uVar11 >> 0x10 ^ uVar6 >> 7 ^ uVar11 ^ uVar6;
  *(uint *)(iVar4 + 0x2c) = uVar6;
  piVar9 = piVar13 + 5;
  piVar10 = piVar13 + 10;
  piVar8 = piVar13 + 0x19;
  switch(uVar6 + uVar11 >> 0x1e) {
  case 0:
    uVar6 = (uint)*pbVar12;
    uVar11 = uVar6 & 1 ^ 1;
    if ((*pbVar12 & 1) == 0) {
      iVar4 = FUN_00a7df24(piVar13,param_2);
      if (iVar4 != 0) {
        uVar6 = (uint)*pbVar12;
        goto LAB_00a24ab8;
      }
LAB_00a24d18:
      uVar6 = 2;
      bVar3 = *pbVar12 | 1;
      goto LAB_00a24d8c;
    }
LAB_00a24ab8:
    if ((uVar6 & 2) == 0) {
      iVar4 = FUN_00a7df24(piVar9,param_2);
      if (iVar4 == 0) goto LAB_00a24d80;
      uVar6 = (uint)*pbVar12;
      uVar11 = 1;
    }
    if ((uVar6 & 4) == 0) {
      cVar2 = FUN_00a7e67c(piVar10,param_2);
      if (cVar2 != '\x02') goto LAB_00a24d38;
      uVar6 = (uint)*pbVar12;
      uVar11 = 1;
    }
    if ((uVar6 & 8) != 0) goto LAB_00a24d28;
    FUN_00a7e068(local_2a0,piVar8,param_2);
    if ((short)local_2a0[0] == 2) goto LAB_00a27310;
    break;
  case 1:
    uVar6 = (uint)*pbVar12;
    uVar11 = (uVar6 & 2) >> 1 ^ 1;
    if ((*pbVar12 & 2) != 0) {
LAB_00a24ca4:
      if ((uVar6 & 4) == 0) {
        cVar2 = FUN_00a7e67c(piVar10,param_2);
        if (cVar2 != '\x02') goto LAB_00a24d38;
        uVar6 = (uint)*pbVar12;
        uVar11 = 1;
      }
      if ((uVar6 & 8) == 0) {
        FUN_00a7e068(local_2a0,piVar8,param_2);
        if ((short)local_2a0[0] != 2) break;
        uVar6 = (uint)*pbVar12;
        uVar11 = 1;
      }
      if ((uVar6 & 1) == 0) {
        iVar4 = FUN_00a7df24(piVar13,param_2);
        if (iVar4 != 0) goto LAB_00a27310;
        goto LAB_00a24d18;
      }
LAB_00a24d28:
      uVar6 = 6;
      if (uVar11 != 0) goto LAB_00a27310;
      goto LAB_00a24d90;
    }
    iVar4 = FUN_00a7df24(piVar9,param_2);
    if (iVar4 != 0) {
      uVar6 = (uint)*pbVar12;
      goto LAB_00a24ca4;
    }
LAB_00a24d80:
    uVar6 = 3;
    bVar3 = *pbVar12 | 2;
LAB_00a24d8c:
    *pbVar12 = bVar3;
    goto LAB_00a24d90;
  case 2:
    uVar6 = (uint)*pbVar12;
    uVar11 = (uVar6 & 4) >> 2 ^ 1;
    if ((*pbVar12 & 4) != 0) {
LAB_00a24b60:
      if ((uVar6 & 8) == 0) {
        FUN_00a7e068(local_2a0,piVar8,param_2);
        if ((short)local_2a0[0] != 2) break;
        uVar6 = (uint)*pbVar12;
        uVar11 = 1;
      }
      if ((uVar6 & 1) == 0) {
        iVar4 = FUN_00a7df24(piVar13,param_2);
        if (iVar4 == 0) goto LAB_00a24d18;
        uVar6 = (uint)*pbVar12;
        uVar11 = 1;
      }
      if ((uVar6 & 2) == 0) {
        iVar4 = FUN_00a7df24(piVar9,param_2);
        if (iVar4 != 0) goto LAB_00a27310;
        goto LAB_00a24d80;
      }
      goto LAB_00a24d28;
    }
    cVar2 = FUN_00a7e67c(piVar10,param_2);
    if (cVar2 == '\x02') {
      uVar6 = (uint)*pbVar12;
      goto LAB_00a24b60;
    }
LAB_00a24d38:
    *pbVar12 = *pbVar12 | 4;
    uVar6 = 4;
    goto LAB_00a24d90;
  case 3:
    uVar6 = (uint)*pbVar12;
    uVar11 = (uVar6 & 8) >> 3 ^ 1;
    if ((*pbVar12 & 8) != 0) {
LAB_00a24c0c:
      if ((uVar6 & 1) == 0) {
        iVar4 = FUN_00a7df24(piVar13,param_2);
        if (iVar4 == 0) goto LAB_00a24d18;
        uVar6 = (uint)*pbVar12;
        uVar11 = 1;
      }
      if ((uVar6 & 2) == 0) {
        iVar4 = FUN_00a7df24(piVar9,param_2);
        if (iVar4 == 0) goto LAB_00a24d80;
        uVar6 = (uint)*pbVar12;
        uVar11 = 1;
      }
      if ((uVar6 & 4) == 0) {
        cVar2 = FUN_00a7e67c(piVar10,param_2);
        if (cVar2 == '\x02') goto LAB_00a27310;
        goto LAB_00a24d38;
      }
      goto LAB_00a24d28;
    }
    FUN_00a7e068(local_2a0,piVar8,param_2);
    if ((short)local_2a0[0] == 2) {
      uVar6 = (uint)*pbVar12;
      goto LAB_00a24c0c;
    }
  }
  *pbVar12 = *pbVar12 | 8;
  uVar6 = local_2a0[0];
  if ((local_2a0[0] & 0xffff) == 7) {
LAB_00a27310:
    *(undefined1 *)(param_1 + 0x204) = 3;
    return 1;
  }
LAB_00a24d90:
  FUN_00a07f48(param_1 + 0x158);
  uVar11 = 3;
  if (1 < (uVar6 & 0xffff)) {
    uVar11 = uVar6 - 2;
  }
                    /* WARNING: Could not recover jumptable at 0x00a24db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (*(code *)(&DAT_00a24dbc + *(int *)(&DAT_00a24dbc + (uVar11 & 0xffff) * 4)))();
  return uVar5;
}

