// FUN_00e14334 @ 00e14334 size=1128 calls_out=9 calls_in=1
// strings: 

bool FUN_00e14334(int *param_1,undefined4 param_2)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  byte *pbVar9;
  undefined1 uVar10;
  uint uVar11;
  int *local_38;
  int *local_34;
  byte local_2d;
  byte *local_2c;
  undefined1 *local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[0x11]) {
  case '\0':
    iVar3 = *(int *)(*param_1 + 0x50);
    *(undefined1 *)(param_1 + 0x10) = 0;
    piVar4 = (int *)(iVar3 + 0x18);
    param_1[1] = (int)piVar4;
LAB_00e143ac:
    piVar5 = (int *)*piVar4;
    iVar3 = piVar4[1];
    do {
      iVar7 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar7 + 1;
    if (iVar7 < 0) {
LAB_00e14808:
                    /* WARNING: Does not return */
      pcVar8 = (code *)software_udf(0xfdee,0xe14808);
      (*pcVar8)();
    }
    param_1[2] = (int)piVar5;
    param_1[3] = iVar3;
    *(undefined1 *)(param_1 + 0xf) = 0;
LAB_00e143e8:
    iVar7 = *(int *)(iVar3 + 8);
    pcVar8 = *(code **)(iVar3 + 0x28);
    piVar4 = param_1 + 4;
    *piVar4 = (int)piVar5;
    param_1[5] = iVar3;
    iVar3 = (*pcVar8)((int)piVar5 + (iVar7 - 1U & 0xfffffff8) + 8);
    param_1[6] = iVar3;
    param_1[7] = (int)piVar4;
    *(undefined1 *)(param_1 + 0xe) = 0;
LAB_00e14430:
    *(undefined1 *)((int)param_1 + 0x35) = 0;
    iVar3 = iVar3 + 4;
    param_1[0xb] = iVar3;
    param_1[0xc] = (int)piVar4;
LAB_00e1444c:
    *(undefined1 *)(param_1 + 0xd) = 1;
    param_1[8] = iVar3 + 4;
    param_1[9] = -1;
    param_1[10] = (int)piVar4;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01879a8c);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01879a8c);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0x10]) {
    case '\0':
      piVar4 = (int *)param_1[1];
      goto LAB_00e143ac;
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
      iVar3 = param_1[3];
      goto LAB_00e143e8;
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
      iVar3 = param_1[6];
      piVar4 = (int *)param_1[7];
      goto LAB_00e14430;
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
      iVar3 = param_1[0xb];
      piVar4 = (int *)param_1[0xc];
      goto LAB_00e1444c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187af00);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187af00);
    }
  }
  local_34 = param_1 + 0xf;
  local_38 = param_1 + 0xe;
  iVar3 = FUN_00e442f8(param_1 + 8,param_2);
  if (iVar3 == 0) {
    uVar10 = 3;
    *(undefined1 *)((int)param_1 + 0x35) = 3;
    *(undefined1 *)local_38 = 3;
    *(undefined1 *)local_34 = 3;
    goto LAB_00e146a4;
  }
  iVar7 = param_1[8];
  if (iVar7 != 0) {
    FUN_00e44660(iVar7,param_1[9],1);
  }
  uVar11 = (uint)*(byte *)(*(int *)(iVar3 + 0x20) + 8);
  while( true ) {
    while ((1 << uVar11 & 0x8aU) != 0) {
      pbVar9 = (byte *)(*(int *)(iVar3 + 0x20) + 8);
      while (*pbVar9 == uVar11) {
        bVar1 = (bool)hasExclusiveAccess(pbVar9);
        if (bVar1) {
          *pbVar9 = 4;
          if (uVar11 != 7) goto LAB_00e145b0;
          goto LAB_00e14644;
        }
      }
      ClearExclusiveLocal();
      uVar11 = (uint)*pbVar9;
    }
    if ((1 << uVar11 & 0x104U) == 0) break;
    pbVar9 = (byte *)(*(int *)(iVar3 + 0x20) + 8);
    while (*pbVar9 == uVar11) {
      bVar1 = (bool)hasExclusiveAccess(pbVar9);
      if (bVar1) {
        *pbVar9 = 6;
        if (uVar11 == 8) goto LAB_00e14644;
        goto LAB_00e145b0;
      }
    }
    ClearExclusiveLocal();
    uVar11 = (uint)*pbVar9;
  }
  goto LAB_00e14644;
LAB_00e145b0:
  *(undefined1 *)(param_1 + 0xd) = 0;
  piVar4 = *(int **)param_1[10];
  iVar7 = ((undefined4 *)param_1[10])[1];
  do {
    iVar6 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar6 + 1;
  if (iVar6 < 0) goto LAB_00e14808;
  (**(code **)(iVar7 + 0x38))((int)piVar4 + (*(int *)(iVar7 + 8) - 1U & 0xfffffff8) + 8);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_007846b4(piVar4,iVar7);
  }
  bVar2 = FUN_00eae6cc(iVar3 + 0x24);
  if (bVar2 != 2) {
    local_2d = bVar2;
  }
  if (bVar2 != 2 && bVar2 != 0) {
    local_2c = &local_2d;
    local_28 = &LAB_0100eb80;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_0058c10f,&local_2c,&DAT_0187af10);
  }
LAB_00e14644:
  FUN_00e44900(iVar3);
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(undefined2 *)(param_1 + 0xd) = 0x100;
  piVar4 = (int *)param_1[4];
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar7 + -1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_007846b4(param_1[4],param_1[5]);
  }
  uVar10 = 1;
  *(undefined1 *)local_34 = 1;
  FUN_00de3884(param_1 + 2);
LAB_00e146a4:
  *(undefined1 *)(param_1 + 0x11) = uVar10;
  *(undefined1 *)(param_1 + 0x10) = uVar10;
  return iVar3 == 0;
}

