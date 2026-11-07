// FUN_00a7e068 @ 00a7e068 size=1152 calls_out=14 calls_in=2
// strings: 

void FUN_00a7e068(int *param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  ushort uVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint *puVar9;
  char cVar10;
  uint uVar11;
  undefined8 uVar12;
  int local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  uint local_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0x11]) {
  case '\0':
    piVar7 = (int *)*param_2;
    param_2[2] = (int)piVar7;
    param_2[1] = (int)piVar7;
    *(undefined1 *)(param_2 + 0x10) = 0;
LAB_00a7e0f0:
    iVar8 = *piVar7;
    *(undefined1 *)((int)param_2 + 0x1d) = 0;
    uVar5 = iVar8 + 8;
    param_2[5] = uVar5;
    param_2[6] = (int)(piVar7 + 1);
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0186d7a8);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0186d7a8);
  case '\x03':
    uVar5 = (&switchD_00a7e0d4::switchdataD_00a7e0d8)[*(byte *)(param_2 + 0x10)];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(byte *)(param_2 + 0x10)) {
    case 0:
      piVar7 = (int *)param_2[2];
      goto LAB_00a7e0f0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018acd5c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018acd5c);
    }
  }
  uVar12 = thunk_FUN_016de0ee(uVar5,0x40);
  iVar8 = (int)uVar12 + (int)((ulonglong)uVar12 >> 0x20);
  if (*(char *)(iVar8 + 0x38) != '\x01') {
    cVar10 = '\0';
    cVar1 = '\0';
    if (*(char *)(iVar8 + 0x38) == '\x02') goto LAB_00a7e178;
    FUN_015e8e6c(iVar8,FUN_00a303f4);
    *(undefined1 *)(iVar8 + 0x38) = 1;
  }
  cVar10 = *(char *)(iVar8 + 0x31);
  cVar1 = *(char *)(iVar8 + 0x30);
  cVar4 = cVar10;
  if (cVar1 == '\x01') {
    if (cVar10 == '\0') {
      FUN_016455a4(*param_3,param_3[1]);
LAB_00a7e418:
      *(undefined1 *)(param_2 + 0x10) = 3;
      *(undefined2 *)param_1 = 2;
      *(undefined1 *)(param_2 + 0x11) = 3;
      return;
    }
    cVar4 = cVar10 + -1;
  }
  *(char *)(iVar8 + 0x31) = cVar4;
LAB_00a7e178:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 0x1d)) {
  case 0:
    *(undefined1 *)(param_2 + 7) = 0;
    param_2[3] = param_2[5];
    param_2[4] = param_2[6];
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018ad404);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018ad404);
  case 4:
    goto switchD_00a7e184_caseD_4;
  }
  cVar4 = *(char *)(iVar8 + 0x38);
  iVar6 = param_2[3];
  if (cVar4 != '\x01') goto LAB_00a7e26c;
LAB_00a7e1bc:
  if ((*(uint *)(iVar8 + 0x24) & 1) == 0) goto LAB_00a7e2a8;
  do {
    uVar12 = CONCAT44(*(undefined4 *)(iVar8 + 0x28),*(undefined4 *)(iVar8 + 0x2c));
LAB_00a7e2c4:
    uVar5 = (uint)((ulonglong)uVar12 >> 0x20);
    uVar11 = (uint)uVar12;
    uVar5 = uVar5 ^ uVar5 << 0x11;
    *(uint *)(iVar8 + 0x28) = uVar11;
    *(undefined4 *)(iVar8 + 0x24) = 1;
    uVar5 = uVar11 >> 0x10 ^ uVar5 >> 7 ^ uVar11 ^ uVar5;
    *(uint *)(iVar8 + 0x2c) = uVar5;
    uVar5 = uVar5 + uVar11 >> 0x19 & 0x70;
    local_44 = *(uint *)(iVar6 + uVar5);
    DataMemoryBarrier(0xb);
    *(undefined1 *)(param_2 + 7) = 1;
    local_48 = iVar6 + uVar5;
    local_2c = local_2c & 0xffffff00;
    local_30 = 0;
    local_38 = 0;
    local_3c = 0;
    local_40 = 0;
    local_44 = local_44 >> 2;
    DataMemoryBarrier(0xb);
    uVar5 = *(uint *)param_2[4];
    uVar11 = *(uint *)(param_2[3] + 0x98) & 0xfffffffe;
    if (uVar5 != uVar11) {
      *(uint *)param_2[4] = uVar11;
LAB_00a7e43c:
      FUN_0163bdc0(&local_48);
      if (local_38 != 0) {
        (**(code **)(local_38 + 0xc))(local_34);
      }
      *(undefined1 *)(param_2 + 7) = 0;
      *(undefined1 *)(param_2 + 0x10) = 1;
      *(undefined1 *)((int)param_2 + 0x1d) = 1;
      if (uVar5 == uVar11) {
        uVar5 = FUN_00ac0b9c();
        iVar8 = 1;
      }
      else {
        piVar7 = (int *)param_2[1];
        iVar8 = *piVar7;
        puVar9 = (uint *)(iVar8 + 0x98);
        uVar5 = *(uint *)(iVar8 + 0x98);
        if ((uVar5 < 0xfffffff0) && ((uVar5 & 8) == 0)) {
          if (*puVar9 != uVar5) {
            ClearExclusiveLocal();
            goto LAB_00a7e4d0;
          }
          bVar3 = (bool)hasExclusiveAccess(puVar9);
          if (!bVar3) goto LAB_00a7e4d0;
          *puVar9 = uVar5 + 0x10;
          DataMemoryBarrier(0xb);
        }
        else {
LAB_00a7e4d0:
          FUN_0127d66c(puVar9);
        }
        FUN_0128236c(puVar9);
        FUN_0128236c((uint)puVar9 | 1);
        DataMemoryBarrier(0xb);
        piVar7[1] = *(uint *)(iVar8 + 0xa0) & 0xfffffffe;
        uVar2 = *(ushort *)(iVar8 + 0x9c);
        uVar5 = (uint)*(ushort *)(iVar8 + 0x9e);
        FUN_01282570(puVar9);
        FUN_01282570((uint)puVar9 | 1);
        iVar8 = (uint)uVar2 << 0x10;
        DataMemoryBarrier(0xb);
        do {
          uVar11 = *puVar9;
          bVar3 = (bool)hasExclusiveAccess(puVar9);
        } while (!bVar3);
        *puVar9 = uVar11 - 0x10;
        if ((uVar11 & 0xfffffff2) == 0x12) {
          FUN_0127d34c(puVar9);
        }
      }
      *param_1 = iVar8;
      param_1[1] = uVar5;
      *(undefined1 *)(param_2 + 0x11) = 1;
      return;
    }
    if ((*(uint *)(param_2[3] + 0x98) & 1) != 0) goto LAB_00a7e43c;
    *(undefined1 *)(param_2 + 7) = 0;
    param_2[8] = local_48;
    param_2[9] = local_44;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = local_34;
    param_2[0xe] = 0;
    param_2[0xf] = local_2c;
switchD_00a7e184_caseD_4:
    iVar6 = FUN_0163c044(param_2 + 8,param_3);
    if (iVar6 != 0) {
      *(undefined1 *)((int)param_2 + 0x1d) = 4;
      if (cVar1 == '\0') goto LAB_00a7e418;
      if (*(char *)(iVar8 + 0x38) != '\x01') {
        if (*(char *)(iVar8 + 0x38) == '\x02') goto LAB_00a7e418;
        FUN_015e8e6c(iVar8,FUN_01655ec4);
        *(undefined1 *)(iVar8 + 0x38) = 1;
      }
      *(char *)(iVar8 + 0x31) = cVar10;
      *(undefined1 *)(iVar8 + 0x30) = 1;
      goto LAB_00a7e418;
    }
    FUN_0163bdc0(param_2 + 8);
    if (param_2[0xc] != 0) {
      (**(code **)(param_2[0xc] + 0xc))(param_2[0xd]);
    }
    *(undefined1 *)(param_2 + 7) = 0;
    cVar4 = *(char *)(iVar8 + 0x38);
    iVar6 = param_2[3];
    if (cVar4 == '\x01') goto LAB_00a7e1bc;
LAB_00a7e26c:
    if (cVar4 == '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_015f853c(&DAT_018ae900);
    }
    FUN_015e8e6c(iVar8,FUN_01655ec4);
    *(undefined1 *)(iVar8 + 0x38) = 1;
  } while ((*(uint *)(iVar8 + 0x24) & 1) != 0);
LAB_00a7e2a8:
  uVar12 = FUN_0164e918();
  if ((uint)uVar12 < 2) {
    uVar12 = CONCAT44((int)((ulonglong)uVar12 >> 0x20),1);
  }
  goto LAB_00a7e2c4;
}

