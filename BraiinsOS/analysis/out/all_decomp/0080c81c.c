// FUN_0080c81c @ 0080c81c size=1368 calls_out=11 calls_in=8
// strings: 

void FUN_0080c81c(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  short sVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  code *pcVar7;
  byte *pbVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int local_48;
  byte *local_44;
  undefined4 *local_40;
  int local_3c;
  byte *local_38;
  uint local_34;
  undefined4 local_30;
  byte *local_2c;
  uint local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 2)) {
  case 0:
    uVar9 = param_2[1];
    uVar6 = *(undefined1 *)((int)param_2 + 9);
    *param_2 = uVar9;
    *(undefined1 *)((int)param_2 + 0x46) = uVar6;
    param_2[0x10] = uVar9;
    *(undefined1 *)((int)param_2 + 0x45) = 0;
LAB_0080c8b0:
    *(undefined1 *)(param_2 + 0xf) = 0;
    param_2[3] = uVar9;
    param_2[4] = 2;
    *(undefined1 *)(param_2 + 0x11) = uVar6;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0186396c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0186396c);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x45)) {
    case 0:
      uVar6 = *(undefined1 *)((int)param_2 + 0x46);
      uVar9 = param_2[0x10];
      goto LAB_0080c8b0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018639ac);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018639ac);
    }
    break;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x11)) {
    case 0:
      goto switchD_0080c90c_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018639cc);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018639cc);
    }
    goto switchD_0080c90c_caseD_3;
  case 5:
    goto switchD_0080c83c_caseD_5;
  }
  puVar10 = param_2 + 3;
  puVar12 = (undefined4 *)((int)param_2 + 0x45);
  FUN_0080d3e4(&local_3c,puVar10,param_3);
  iVar2 = local_3c;
  if (local_3c == -0x7fffffff) {
    *(undefined1 *)puVar12 = 3;
    *param_1 = -0x7fffffff;
    *(undefined1 *)(param_2 + 2) = 3;
    return;
  }
  if (*(char *)(param_2 + 0xf) == '\x03') {
    puVar13 = (undefined4 *)param_2[0xe];
    uVar9 = param_2[0xd];
    pcVar7 = (code *)*puVar13;
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(uVar9);
    }
    if (puVar13[1] != 0) {
      thunk_FUN_016d3fb4(uVar9);
    }
    if (param_2[7] != 0) {
      thunk_FUN_016d3fb4(param_2[8]);
    }
  }
  iVar11 = local_30;
  if (iVar2 == -0x80000000) {
    pbVar8 = local_38;
LAB_0080cb60:
    *(undefined1 *)puVar12 = 1;
  }
  else {
    if (local_34 < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00345075,0x1c,&DAT_018639bc);
    }
    sVar1 = *(short *)local_38;
    if (sVar1 != -0x55ab) {
      local_30 = CONCAT31((uint3)(byte)sVar1,1);
      uVar9 = local_30;
      local_30._3_1_ = SUB41(iVar11,3);
      local_30._0_3_ = CONCAT12((char)((ushort)sVar1 >> 8),(short)uVar9);
      pbVar8 = (byte *)FUN_0080b0cc(&local_30);
      if (iVar2 == 0) goto LAB_0080cb60;
      local_44 = local_38;
LAB_0080cb5c:
      thunk_FUN_016d3fb4(local_44);
      goto LAB_0080cb60;
    }
    if (iVar2 != 0) {
      thunk_FUN_016d3fb4(local_38);
    }
    *(undefined1 *)((int)param_2 + 0x45) = 1;
    param_2[3] = *param_2;
    *(undefined1 *)(param_2 + 0x11) = 0;
switchD_0080c90c_caseD_0:
    *(undefined1 *)(param_2 + 0x10) = 0;
    param_2[4] = param_2[3];
    param_2[5] = 1;
switchD_0080c90c_caseD_3:
    puVar12 = param_2 + 0x11;
    FUN_0080d3e4(&local_48,param_2 + 4,param_3);
    if (local_48 == -0x7fffffff) {
      *(undefined1 *)puVar12 = 3;
      *param_1 = -0x7fffffff;
      *(undefined1 *)(param_2 + 2) = 4;
      return;
    }
    if (*(char *)(param_2 + 0x10) == '\x03') {
      puVar10 = (undefined4 *)param_2[0xf];
      uVar9 = param_2[0xe];
      pcVar7 = (code *)*puVar10;
      if (pcVar7 != (code *)0x0) {
        (*pcVar7)(uVar9);
      }
      if (puVar10[1] != 0) {
        thunk_FUN_016d3fb4(uVar9);
      }
      if (param_2[8] != 0) {
        thunk_FUN_016d3fb4(param_2[9]);
      }
    }
    puVar10 = local_40;
    if (local_48 == -0x80000000) {
      pbVar8 = local_44;
      goto LAB_0080cb60;
    }
    if (local_40 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00345075,0x1c,&DAT_018639dc);
    }
    pbVar8 = (byte *)(uint)*local_44;
    if (pbVar8 == (byte *)0xf5) {
      local_3c = CONCAT31(local_3c._1_3_,2);
      pbVar8 = (byte *)FUN_0080b0cc(&local_3c);
LAB_0080cb4c:
      if (local_48 == 0) goto LAB_0080cb60;
      goto LAB_0080cb5c;
    }
    if (pbVar8 < &DAT_00000004) {
      local_28 = 4;
      local_30 = CONCAT31(local_30._1_3_,3);
      local_2c = pbVar8;
      pbVar8 = (byte *)FUN_0080b0cc(&local_30);
      goto LAB_0080cb4c;
    }
    if (local_48 != 0) {
      thunk_FUN_016d3fb4(local_44);
    }
    *(undefined1 *)(param_2 + 0x11) = 1;
    *(undefined1 *)(param_2 + 0x10) = 0;
    param_2[3] = pbVar8;
    param_2[4] = *param_2;
    param_2[5] = pbVar8 + -1;
switchD_0080c83c_caseD_5:
    puVar10 = param_2 + 4;
    FUN_0080d3e4(&local_30,puVar10,param_3);
    uVar4 = local_28;
    pbVar3 = local_2c;
    iVar2 = local_30;
    if (local_30 == -0x7fffffff) {
      *param_1 = -0x7fffffff;
      *(undefined1 *)(param_2 + 2) = 5;
      return;
    }
    if (*(char *)(param_2 + 0x10) == '\x03') {
      uVar9 = param_2[0xe];
      puVar10 = (undefined4 *)param_2[0xf];
      if ((code *)*puVar10 != (code *)0x0) {
        (*(code *)*puVar10)(uVar9);
      }
      if (puVar10[1] != 0) {
        thunk_FUN_016d3fb4(uVar9);
      }
      if (param_2[8] != 0) {
        thunk_FUN_016d3fb4(param_2[9]);
      }
    }
    pbVar8 = local_2c;
    if (local_30 != -0x80000000) {
      iVar11 = param_2[3];
      if (iVar11 < 0) {
        uVar9 = 0;
LAB_0080cc68:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar9,iVar11);
      }
      if (iVar11 == 0) {
        local_28 = 0;
        local_2c = &DAT_00000001;
        local_30 = 0;
        FUN_006029c0(&local_30);
      }
      else {
        local_2c = (byte *)thunk_FUN_016d4a50(iVar11);
        if (local_2c == (byte *)0x0) {
          uVar9 = 1;
          goto LAB_0080cc68;
        }
        local_30 = iVar11;
      }
      *local_2c = (byte)iVar11;
      local_28 = 1;
      if (local_30 - 1U < uVar4) {
        FUN_007f5a44(&local_30,1,uVar4,1,1);
      }
      uVar5 = local_28;
      pbVar8 = local_2c;
      iVar11 = local_30;
      FUN_016dd1aa(local_2c + local_28,pbVar3,uVar4);
      puVar10 = (undefined4 *)(uVar5 + uVar4);
      if (iVar2 != 0) {
        thunk_FUN_016d3fb4(pbVar3);
      }
      goto LAB_0080cb6c;
    }
  }
  iVar11 = -0x80000000;
LAB_0080cb6c:
  *param_1 = iVar11;
  param_1[1] = (int)pbVar8;
  param_1[2] = (int)puVar10;
  *(undefined1 *)(param_2 + 2) = 1;
  return;
}

