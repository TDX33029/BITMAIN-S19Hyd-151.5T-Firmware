// FUN_00711e48 @ 00711e48 size=968 calls_out=14 calls_in=2
// strings: 

bool FUN_00711e48(int *param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined *local_2c;
  undefined4 *local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 0x2d)) {
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01859f4c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01859f4c);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_1 + 0x15)) {
    case 0:
      iVar11 = param_1[3];
      piVar9 = (int *)param_1[4];
LAB_007120c0:
      *(undefined1 *)(param_1 + 5) = 1;
      *param_1 = iVar11 + 0x540;
      param_1[1] = -1;
      param_1[2] = (int)piVar9;
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01859edc);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01859edc);
    }
    iVar11 = FUN_006f5654(param_1,param_2);
    if (iVar11 == 0) {
      uVar4 = 3;
      *(undefined1 *)((int)param_1 + 0x15) = 3;
    }
    else {
      if (*param_1 != 0) {
        FUN_006f5fbc(*param_1,param_1[1],1);
      }
      *(undefined1 *)(param_1 + 5) = 0;
      piVar9 = *(int **)(iVar11 + 0x20);
      *(int *)(iVar11 + 0x20) = param_1[2];
      if (piVar9 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar13 = *piVar9;
          bVar2 = (bool)hasExclusiveAccess(piVar9);
        } while (!bVar2);
        *piVar9 = iVar13 + -1;
        if (iVar13 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00790c08();
        }
      }
      FUN_006f625c(iVar11);
      *(undefined2 *)(param_1 + 5) = 0x100;
      FUN_00711a8c(param_1);
      iVar13 = *(int *)(param_1[7] + 0x60);
      *(undefined1 *)(param_1 + 0xb) = 0;
      FUN_006e67f4(iVar13 + 0x54c,param_1[8],&DAT_01859f7c);
      uVar4 = 1;
      *(undefined1 *)(param_1 + 0xb) = 0;
    }
    *(undefined1 *)((int)param_1 + 0x2d) = uVar4;
    return iVar11 == 0;
  }
  iVar13 = param_1[10];
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[7] = param_1[9];
  iVar11 = param_1[6];
  piVar10 = *(int **)(param_1[9] + 0x60);
  do {
    iVar5 = *piVar10;
    bVar2 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar2);
  *piVar10 = iVar5 + 1;
  if (-1 < iVar5) {
    puVar14 = (undefined4 *)param_1[7];
    if (puVar14[0x1a] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00340106,0x11,&DAT_01859f3c);
    }
    local_50 = *puVar14;
    uStack_4c = puVar14[1];
    uStack_48 = puVar14[2];
    uStack_44 = puVar14[3];
    local_40 = puVar14[4];
    uStack_3c = puVar14[5];
    uStack_38 = puVar14[6];
    uStack_34 = puVar14[7];
    piVar12 = (int *)puVar14[0x19];
    do {
      iVar5 = *piVar12;
      bVar2 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar2);
    *piVar12 = iVar5 + 1;
    if (-1 < iVar5) {
      piVar9 = piVar10 + 1;
      do {
        iVar5 = *piVar9;
        while (iVar5 != -1) {
          if (iVar5 < 0) {
            local_28 = &DAT_0157d360;
            local_2c = &DAT_018ae270;
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_00590e71,&local_2c,&DAT_018ae278);
          }
          iVar6 = *piVar9;
          if (iVar6 == iVar5) {
            bVar2 = false;
            bVar3 = (bool)hasExclusiveAccess(piVar9);
            if (bVar3) {
              *piVar9 = iVar5 + 1;
              DataMemoryBarrier(0xb);
              bVar2 = true;
            }
          }
          else {
            bVar2 = false;
            ClearExclusiveLocal();
          }
          iVar5 = iVar6;
          if (bVar2) {
            iVar5 = *(int *)(iVar13 + 8);
            iVar6 = *(int *)(iVar13 + 0xc);
            iVar7 = *(int *)(iVar13 + 0x10);
            local_b0 = puVar14[0x1b];
            uStack_ac = puVar14[0x1c];
            uStack_a8 = puVar14[0x1d];
            uStack_a4 = puVar14[0x1e];
            local_a0 = puVar14[0x1f];
            uStack_9c = puVar14[0x20];
            uStack_98 = puVar14[0x21];
            uStack_94 = puVar14[0x22];
            local_90 = *(undefined4 *)(iVar13 + 0x14);
            uStack_8c = *(undefined4 *)(iVar13 + 0x18);
            uStack_88 = *(undefined4 *)(iVar13 + 0x1c);
            uStack_84 = *(undefined4 *)(iVar13 + 0x20);
            local_80 = *(undefined4 *)(iVar13 + 0x24);
            uStack_7c = *(undefined4 *)(iVar13 + 0x28);
            uStack_78 = *(undefined4 *)(iVar13 + 0x2c);
            uStack_74 = *(undefined4 *)(iVar13 + 0x30);
            iVar13 = puVar14[0x26];
            DataMemoryBarrier(0xb);
            do {
              iVar8 = *piVar10;
              bVar2 = (bool)hasExclusiveAccess(piVar10);
            } while (!bVar2);
            *piVar10 = iVar8 + -1;
            local_70 = local_50;
            uStack_6c = uStack_4c;
            uStack_68 = uStack_48;
            uStack_64 = uStack_44;
            local_60 = local_40;
            uStack_5c = uStack_3c;
            uStack_58 = uStack_38;
            uStack_54 = uStack_34;
            if (iVar8 == 1) {
              DataMemoryBarrier(0xb);
              FUN_0078fcec(piVar10);
            }
            piVar9 = (int *)thunk_FUN_016d4a50(0x88);
            if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(8,0x88);
            }
            *piVar9 = 1;
            piVar9[1] = 1;
            FUN_016dd1aa(piVar9 + 2,&local_b0,0x60);
            piVar9[0x1a] = iVar6;
            piVar9[0x1b] = iVar5;
            iVar5 = param_1[7];
            piVar9[0x1c] = iVar7;
            piVar9[0x1d] = iVar11;
            piVar9[0x1e] = iVar13;
            piVar9[0x1f] = (int)piVar10;
            piVar9[0x20] = (int)piVar12;
            *(undefined1 *)(param_1 + 0xb) = 1;
            param_1[8] = (int)piVar9;
            iVar11 = *(int *)(iVar5 + 0x60);
            do {
              iVar13 = *piVar9;
              bVar2 = (bool)hasExclusiveAccess(piVar9);
            } while (!bVar2);
            *piVar9 = iVar13 + 1;
            if (iVar13 < 0) goto LAB_0071223c;
            *(undefined1 *)((int)param_1 + 0x15) = 0;
            iVar11 = iVar11 + 0x10;
            param_1[3] = iVar11;
            param_1[4] = (int)piVar9;
            goto LAB_007120c0;
          }
        }
        HintYield();
      } while( true );
    }
  }
LAB_0071223c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x71223c);
  (*pcVar1)();
}

