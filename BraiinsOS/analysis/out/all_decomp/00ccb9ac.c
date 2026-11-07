// FUN_00ccb9ac @ 00ccb9ac size=1064 calls_out=15 calls_in=0
// strings: 

undefined4 FUN_00ccb9ac(int *param_1,undefined4 *param_2)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  undefined8 uVar13;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[0x15]) {
  case '\0':
    *(undefined1 *)(param_1 + 0x14) = 0;
    param_1[3] = (int)param_1;
    piVar2 = param_1;
LAB_00ccba24:
    param_1[4] = (int)piVar2;
    *(undefined1 *)(param_1 + 0x13) = 0;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01875aa8);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01875aa8);
  case '\x03':
    piVar2 = (int *)(&switchD_00ccba0c::switchdataD_00ccba10)[*(byte *)(param_1 + 0x14)];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(byte *)(param_1 + 0x14)) {
    case 0:
      piVar2 = (int *)param_1[3];
      goto LAB_00ccba24;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01876150);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01876150);
    }
  }
  uVar13 = thunk_FUN_016de0ee(piVar2,0x40);
  iVar11 = (int)uVar13 + (int)((ulonglong)uVar13 >> 0x20);
  if (*(char *)(iVar11 + 0x38) != '\x01') {
    cVar6 = '\0';
    cVar5 = '\0';
    if (*(char *)(iVar11 + 0x38) == '\x02') goto LAB_00ccba98;
    FUN_015e8e6c(iVar11,FUN_00bacf28);
    *(undefined1 *)(iVar11 + 0x38) = 1;
  }
  cVar5 = *(char *)(iVar11 + 0x31);
  cVar6 = *(char *)(iVar11 + 0x30);
  cVar1 = cVar5;
  if (cVar6 == '\x01') {
    if (cVar5 == '\0') {
      FUN_016455a4(*param_2,param_2[1]);
LAB_00ccbd30:
      *(undefined1 *)(param_1 + 0x14) = 3;
      *(undefined1 *)(param_1 + 0x15) = 3;
      return 1;
    }
    cVar1 = cVar5 + -1;
  }
  *(char *)(iVar11 + 0x31) = cVar1;
LAB_00ccba98:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[0x13]) {
  case '\0':
    piVar2 = (int *)param_1[4];
    uVar4 = 0;
    param_1[5] = (int)piVar2;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018775c4);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018775c4);
  case '\x03':
    goto switchD_00ccbaac_caseD_3;
  }
  do {
    iVar10 = *piVar2;
    puVar8 = (uint *)(iVar10 + 0x98);
    uVar3 = *(uint *)(iVar10 + 0x98);
    if ((uVar3 < 0xfffffff0) && ((uVar3 & 8) == 0)) {
      if (*puVar8 != uVar3) {
        ClearExclusiveLocal();
        goto LAB_00ccbbd4;
      }
      bVar12 = (bool)hasExclusiveAccess(puVar8);
      if (!bVar12) goto LAB_00ccbbd4;
      *puVar8 = uVar3 + 0x10;
      DataMemoryBarrier(0xb);
    }
    else {
LAB_00ccbbd4:
      FUN_0127d66c(puVar8);
    }
    FUN_0128236c(puVar8);
    uVar9 = (uint)puVar8 | 1;
    FUN_0128236c(uVar9);
    DataMemoryBarrier(0xb);
    uVar3 = *(uint *)(*(int *)param_1[5] + 0xa0) & 0xfffffffe;
    uVar7 = *(uint *)(param_1[5] + 4);
    *(uint *)(param_1[5] + 4) = uVar3;
    bVar12 = uVar7 == uVar3;
    if (bVar12) {
      uVar3 = uVar4 ^ 1;
    }
    if ((!bVar12 || (uVar3 & 1) != 0) && (*(char *)(iVar10 + 0x9c) != '\x01')) {
      *(undefined1 *)(param_1 + 0x14) = 1;
      *(undefined1 *)(param_1 + 0x13) = 1;
      FUN_01282570(puVar8);
      FUN_01282570(uVar9);
      DataMemoryBarrier(0xb);
      do {
        uVar4 = *puVar8;
        bVar12 = (bool)hasExclusiveAccess(puVar8);
      } while (!bVar12);
      *puVar8 = uVar4 - 0x10;
      if ((uVar4 & 0xfffffff2) == 0x12) {
        FUN_0127d34c(puVar8);
      }
      FUN_016afc94(param_1[2]);
LAB_00ccbdac:
      iVar11 = *param_1;
      piVar2 = (int *)(iVar11 + 0xa4);
      do {
        iVar10 = *piVar2;
        bVar12 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar12);
      *piVar2 = iVar10 + -1;
      if (iVar10 == 1) {
        FUN_0163b708(iVar11 + 0x88);
      }
      piVar2 = (int *)*param_1;
      DataMemoryBarrier(0xb);
      do {
        iVar11 = *piVar2;
        bVar12 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar12);
      *piVar2 = iVar11 + -1;
      if (iVar11 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00784894(*param_1);
      }
      piVar2 = (int *)param_1[2];
      DataMemoryBarrier(0xb);
      do {
        iVar11 = *piVar2;
        bVar12 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar12);
      *piVar2 = iVar11 + -1;
      if (iVar11 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f4138(param_1[2]);
      }
      *(undefined1 *)(param_1 + 0x15) = 1;
      return 0;
    }
    FUN_01282570(puVar8);
    FUN_01282570(uVar9);
    DataMemoryBarrier(0xb);
    do {
      uVar3 = *puVar8;
      bVar12 = (bool)hasExclusiveAccess(puVar8);
    } while (!bVar12);
    *puVar8 = uVar3 - 0x10;
    if ((uVar3 & 0xfffffff2) == 0x12) {
      FUN_0127d34c(puVar8);
    }
    if (uVar4 != 0) {
      *(undefined1 *)(param_1 + 0x14) = 1;
      *(undefined1 *)(param_1 + 0x13) = 1;
      goto LAB_00ccbdac;
    }
    iVar10 = *(int *)param_1[5];
    *(undefined1 *)((int)param_1 + 0x29) = 0;
    param_1[8] = iVar10 + 8;
    param_1[9] = (int)((int *)param_1[5] + 1);
switchD_00ccbaac_caseD_3:
    cVar1 = FUN_00d3ea08(param_1 + 6,param_2);
    if (cVar1 == '\x02') break;
    if (*(char *)((int)param_1 + 0x29) == '\x04') {
      FUN_0163bdc0(param_1 + 0xb);
      if (param_1[0xf] != 0) {
        (**(code **)(param_1[0xf] + 0xc))(param_1[0x10]);
      }
      *(undefined1 *)(param_1 + 10) = 0;
    }
    piVar2 = (int *)param_1[5];
    uVar4 = (uint)(cVar1 != '\0');
  } while( true );
  *(undefined1 *)(param_1 + 0x13) = 3;
  if (cVar6 != '\0') {
    if (*(char *)(iVar11 + 0x38) != '\x01') {
      if (*(char *)(iVar11 + 0x38) == '\x02') goto LAB_00ccbd30;
      FUN_015e8e6c(iVar11,FUN_01655ec4);
      *(undefined1 *)(iVar11 + 0x38) = 1;
    }
    *(char *)(iVar11 + 0x31) = cVar5;
    *(undefined1 *)(iVar11 + 0x30) = 1;
  }
  goto LAB_00ccbd30;
}

