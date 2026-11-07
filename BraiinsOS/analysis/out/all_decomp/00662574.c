// FUN_00662574 @ 00662574 size=984 calls_out=9 calls_in=0
// strings: 

bool FUN_00662574(int *param_1,undefined4 param_2)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  byte *pbVar7;
  int *piVar8;
  undefined1 uVar9;
  uint uVar10;
  int *local_38;
  int *local_34;
  byte local_2d;
  byte *local_2c;
  undefined1 *local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[0x10]) {
  case '\0':
    iVar3 = *param_1;
    param_1[2] = iVar3;
    iVar4 = param_1[1];
    *(undefined1 *)(param_1 + 0xf) = 0;
    param_1[3] = iVar4;
LAB_00662600:
    iVar5 = *(int *)(iVar4 + 8);
    pcVar6 = *(code **)(iVar4 + 0x28);
    piVar8 = param_1 + 4;
    *piVar8 = iVar3;
    param_1[5] = iVar4;
    iVar3 = (*pcVar6)(iVar3 + (iVar5 - 1U & 0xfffffff8) + 8);
    param_1[6] = iVar3;
    param_1[7] = (int)piVar8;
    *(undefined1 *)(param_1 + 0xe) = 0;
LAB_0066264c:
    *(undefined1 *)((int)param_1 + 0x35) = 0;
    iVar3 = iVar3 + 4;
    param_1[0xb] = iVar3;
    param_1[0xc] = (int)piVar8;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018582fc);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018582fc);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0xf]) {
    case '\0':
      iVar3 = param_1[2];
      iVar4 = param_1[3];
      goto LAB_00662600;
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
      piVar8 = (int *)param_1[7];
      goto LAB_0066264c;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187aed0);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187aed0);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)((int)param_1 + 0x35)) {
      case 0:
        iVar3 = param_1[0xb];
        piVar8 = (int *)param_1[0xc];
        break;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_0187af00);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_0187af00);
      case 3:
        goto switchD_006628d8_caseD_3;
      }
    }
  }
  *(undefined1 *)(param_1 + 0xd) = 1;
  param_1[8] = iVar3 + 4;
  param_1[9] = -1;
  param_1[10] = (int)piVar8;
switchD_006628d8_caseD_3:
  local_38 = param_1 + 2;
  local_34 = param_1 + 0xf;
  iVar3 = FUN_006f59b4(param_1 + 8,param_2);
  if (iVar3 == 0) {
    uVar9 = 3;
    *(undefined1 *)((int)param_1 + 0x35) = 3;
    *(undefined1 *)(param_1 + 0xe) = 3;
    *(undefined1 *)local_34 = 3;
  }
  else {
    iVar4 = param_1[8];
    if (iVar4 != 0) {
      FUN_006f5fbc(iVar4,param_1[9],1);
    }
    uVar10 = (uint)*(byte *)(*(int *)(iVar3 + 0x20) + 8);
    while( true ) {
      while ((1 << uVar10 & 0x8aU) != 0) {
        pbVar7 = (byte *)(*(int *)(iVar3 + 0x20) + 8);
        while (*pbVar7 == uVar10) {
          bVar1 = (bool)hasExclusiveAccess(pbVar7);
          if (bVar1) {
            *pbVar7 = 4;
            if (uVar10 == 7) goto LAB_00662854;
            goto LAB_006627c0;
          }
        }
        ClearExclusiveLocal();
        uVar10 = (uint)*pbVar7;
      }
      if ((1 << uVar10 & 0x104U) == 0) break;
      pbVar7 = (byte *)(*(int *)(iVar3 + 0x20) + 8);
      while (*pbVar7 == uVar10) {
        bVar1 = (bool)hasExclusiveAccess(pbVar7);
        if (bVar1) {
          *pbVar7 = 6;
          if (uVar10 != 8) {
LAB_006627c0:
            *(undefined1 *)(param_1 + 0xd) = 0;
            piVar8 = *(int **)param_1[10];
            iVar4 = ((undefined4 *)param_1[10])[1];
            do {
              iVar5 = *piVar8;
              bVar1 = (bool)hasExclusiveAccess(piVar8);
            } while (!bVar1);
            *piVar8 = iVar5 + 1;
            if (iVar5 < 0) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)software_udf(0xfdee,0x6629a0);
              (*pcVar6)();
            }
            (**(code **)(iVar4 + 0x38))((int)piVar8 + (*(int *)(iVar4 + 8) - 1U & 0xfffffff8) + 8);
            DataMemoryBarrier(0xb);
            do {
              iVar5 = *piVar8;
              bVar1 = (bool)hasExclusiveAccess(piVar8);
            } while (!bVar1);
            *piVar8 = iVar5 + -1;
            if (iVar5 == 1) {
              DataMemoryBarrier(0xb);
              FUN_007846b4(piVar8,iVar4);
            }
            bVar2 = FUN_006b9e24(iVar3 + 0x24);
            if (bVar2 != 2) {
              local_2d = bVar2;
            }
            if (bVar2 != 2 && bVar2 != 0) {
              local_2c = &local_2d;
              local_28 = &LAB_0100eb80;
                    /* WARNING: Subroutine does not return */
              FUN_00faa478(&DAT_0058c10f,&local_2c,&DAT_0187af10);
            }
          }
          goto LAB_00662854;
        }
      }
      ClearExclusiveLocal();
      uVar10 = (uint)*pbVar7;
    }
LAB_00662854:
    FUN_006f625c(iVar3);
    *(undefined1 *)(param_1 + 0xe) = 1;
    piVar8 = (int *)param_1[4];
    *(undefined2 *)(param_1 + 0xd) = 0x100;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar8;
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_007846b4(param_1[4],param_1[5]);
    }
    uVar9 = 1;
    *(undefined1 *)local_34 = 1;
    FUN_0065a568(local_38);
  }
  *(undefined1 *)(param_1 + 0x10) = uVar9;
  return iVar3 == 0;
}

