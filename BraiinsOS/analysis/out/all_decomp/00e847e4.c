// FUN_00e847e4 @ 00e847e4 size=1208 calls_out=9 calls_in=1
// strings: 

undefined4 FUN_00e847e4(int *param_1,undefined4 param_2)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  code *pcVar10;
  byte *pbVar11;
  uint uVar12;
  int *local_3c;
  int *local_38;
  int *local_34;
  byte local_2d;
  byte *local_2c;
  undefined1 *local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[0x11]) {
  case '\0':
    piVar4 = (int *)*param_1;
    pcVar7 = (char *)(*piVar4 + 8);
    do {
      cVar1 = *pcVar7;
      bVar2 = (bool)hasExclusiveAccess(pcVar7);
    } while (!bVar2);
    *pcVar7 = '\0';
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 0x11) = 1;
      return 1;
    }
    *(undefined1 *)(param_1 + 0x10) = 0;
    piVar4 = piVar4 + 1;
    param_1[1] = (int)piVar4;
LAB_00e8487c:
    piVar5 = (int *)*piVar4;
    iVar8 = piVar4[1];
    do {
      iVar9 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar9 + 1;
    if (iVar9 < 0) {
LAB_00e84d08:
                    /* WARNING: Does not return */
      pcVar10 = (code *)software_udf(0xfdee,0xe84d08);
      (*pcVar10)();
    }
    param_1[2] = (int)piVar5;
    param_1[3] = iVar8;
    *(undefined1 *)(param_1 + 0xf) = 0;
LAB_00e848b8:
    iVar9 = *(int *)(iVar8 + 8);
    pcVar10 = *(code **)(iVar8 + 0x28);
    piVar4 = param_1 + 4;
    *piVar4 = (int)piVar5;
    param_1[5] = iVar8;
    iVar8 = (*pcVar10)((int)piVar5 + (iVar9 - 1U & 0xfffffff8) + 8);
    param_1[6] = iVar8;
    param_1[7] = (int)piVar4;
    *(undefined1 *)(param_1 + 0xe) = 0;
LAB_00e84900:
    *(undefined1 *)((int)param_1 + 0x35) = 0;
    iVar8 = iVar8 + 4;
    param_1[0xb] = iVar8;
    param_1[0xc] = (int)piVar4;
LAB_00e8491c:
    *(undefined1 *)(param_1 + 0xd) = 1;
    param_1[8] = iVar8 + 4;
    param_1[9] = -1;
    param_1[10] = (int)piVar4;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0187af60);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0187af60);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0x10]) {
    case '\0':
      piVar4 = (int *)param_1[1];
      goto LAB_00e8487c;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187b114);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187b114);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0xf]) {
    case '\0':
      piVar5 = (int *)param_1[2];
      iVar8 = param_1[3];
      goto LAB_00e848b8;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187b134);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187b134);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0xe]) {
    case '\0':
      iVar8 = param_1[6];
      piVar4 = (int *)param_1[7];
      goto LAB_00e84900;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187aed0);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187aed0);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_1 + 0x35)) {
    case 0:
      iVar8 = param_1[0xb];
      piVar4 = (int *)param_1[0xc];
      goto LAB_00e8491c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187af00);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187af00);
    }
  }
  local_34 = param_1 + 0xf;
  local_38 = param_1 + 0x10;
  local_3c = param_1 + 0xe;
  iVar8 = FUN_00e442f8(param_1 + 8,param_2);
  if (iVar8 == 0) {
    *(undefined1 *)((int)param_1 + 0x35) = 3;
    *(undefined1 *)local_3c = 3;
    *(undefined1 *)local_34 = 3;
    *(undefined1 *)local_38 = 3;
    *(undefined1 *)(param_1 + 0x11) = 3;
    return 2;
  }
  iVar9 = param_1[8];
  if (iVar9 != 0) {
    FUN_00e44660(iVar9,param_1[9],1);
  }
  uVar12 = (uint)*(byte *)(*(int *)(iVar8 + 0x20) + 8);
  while( true ) {
    while ((1 << uVar12 & 0x8aU) != 0) {
      pbVar11 = (byte *)(*(int *)(iVar8 + 0x20) + 8);
      while (*pbVar11 == uVar12) {
        bVar2 = (bool)hasExclusiveAccess(pbVar11);
        if (bVar2) {
          *pbVar11 = 4;
          if (uVar12 != 7) goto LAB_00e84aa8;
          goto LAB_00e84b3c;
        }
      }
      ClearExclusiveLocal();
      uVar12 = (uint)*pbVar11;
    }
    if ((1 << uVar12 & 0x104U) == 0) break;
    pbVar11 = (byte *)(*(int *)(iVar8 + 0x20) + 8);
    while (*pbVar11 == uVar12) {
      bVar2 = (bool)hasExclusiveAccess(pbVar11);
      if (bVar2) {
        *pbVar11 = 6;
        if (uVar12 == 8) goto LAB_00e84b3c;
        goto LAB_00e84aa8;
      }
    }
    ClearExclusiveLocal();
    uVar12 = (uint)*pbVar11;
  }
LAB_00e84b3c:
  FUN_00e44900(iVar8);
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(undefined2 *)(param_1 + 0xd) = 0x100;
  piVar4 = (int *)param_1[4];
  DataMemoryBarrier(0xb);
  do {
    iVar8 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar8 + -1;
  if (iVar8 == 1) {
    DataMemoryBarrier(0xb);
    FUN_007846b4(param_1[4],param_1[5]);
  }
  *(undefined1 *)local_34 = 1;
  FUN_00de3884(param_1 + 2);
  *(undefined1 *)local_38 = 1;
  *(undefined1 *)(param_1 + 0x11) = 1;
  return 0;
LAB_00e84aa8:
  *(undefined1 *)(param_1 + 0xd) = 0;
  piVar4 = *(int **)param_1[10];
  iVar9 = ((undefined4 *)param_1[10])[1];
  do {
    iVar6 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar6 + 1;
  if (iVar6 < 0) goto LAB_00e84d08;
  (**(code **)(iVar9 + 0x38))((int)piVar4 + (*(int *)(iVar9 + 8) - 1U & 0xfffffff8) + 8);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_007846b4(piVar4,iVar9);
  }
  bVar3 = FUN_00eae6cc(iVar8 + 0x24);
  if (bVar3 != 2) {
    local_2d = bVar3;
  }
  if (bVar3 != 2 && bVar3 != 0) {
    local_2c = &local_2d;
    local_28 = &LAB_0100eb80;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_0058c10f,&local_2c,&DAT_0187af10);
  }
  goto LAB_00e84b3c;
}

