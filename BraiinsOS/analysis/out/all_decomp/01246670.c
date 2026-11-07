// FUN_01246670 @ 01246670 size=624 calls_out=8 calls_in=1
// strings: 

void FUN_01246670(undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

{
  ushort uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar10 = *param_3;
  if (iVar10 == 0) {
    *param_1 = 0;
    return;
  }
  iVar13 = param_3[1];
  while( true ) {
    uVar1 = *(ushort *)(iVar10 + 0x192);
    iVar12 = iVar10 + 0x10c;
    uVar7 = 0xffffffff;
    iVar11 = (uint)uVar1 * 0xc;
    do {
      if (iVar11 == 0) {
        uVar7 = (uint)uVar1;
        goto LAB_0124671c;
      }
      uVar8 = *(uint *)(iVar12 + 8);
      uVar6 = uVar8;
      if (0xf < uVar8) {
        uVar6 = 0x10;
      }
      iVar3 = FUN_016dd50a(&DAT_00563e80,*(undefined4 *)(iVar12 + 4),uVar6);
      if (iVar3 == 0) {
        iVar3 = 0x10 - uVar8;
      }
      iVar11 = iVar11 + -0xc;
      uVar7 = uVar7 + 1;
      iVar12 = iVar12 + 0xc;
    } while ((char)((0 < iVar3) - (iVar3 < 0)) == '\x01');
    if (0 < iVar3 == iVar3 < 0) break;
LAB_0124671c:
    if (iVar13 == 0) {
      *param_1 = 0;
      return;
    }
    iVar13 = iVar13 + -1;
    iVar10 = *(int *)(iVar10 + uVar7 * 4 + 0x198);
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)param_4) {
  case 0:
    uVar2 = 0;
    break;
  default:
    local_60 = *param_4;
    local_5c = param_4[1];
    local_58 = param_4[2];
    local_54 = param_4[3];
    uStack_50 = param_4[4];
    uStack_4c = param_4[5];
    goto LAB_01246844;
  case 3:
    uVar9 = param_4[2];
    iVar10 = param_4[3];
    if (iVar10 == 0) {
      iVar13 = 1;
    }
    else {
      iVar13 = thunk_FUN_016d4a50(iVar10);
      if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar10);
      }
    }
    FUN_016dd1aa(iVar13,uVar9,iVar10);
    uVar2 = 3;
    local_5c = iVar10;
    local_58 = iVar13;
    local_54 = iVar10;
    break;
  case 4:
    FUN_0115c22c((uint)&local_60 | 4,param_4 + 1);
    uVar2 = 4;
    break;
  case 5:
    if (param_4[3] == 0) {
      local_54 = 0;
      local_5c = 0;
    }
    else {
      if (param_4[1] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018ac52c);
      }
      FUN_011f809c((uint)&local_60 | 4,param_4[1],param_4[2]);
    }
    uVar2 = 5;
  }
  local_60 = CONCAT31(local_60._1_3_,uVar2);
LAB_01246844:
  local_44 = 1;
  local_48 = 1;
  local_40 = local_60;
  iStack_3c = local_5c;
  local_38 = local_58;
  iStack_34 = local_54;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  puVar4 = (undefined4 *)thunk_FUN_016d4a50(0x20);
  if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x20);
  }
  *puVar4 = local_48;
  puVar4[1] = local_44;
  puVar4[2] = local_40;
  puVar4[3] = iStack_3c;
  puVar4[4] = local_38;
  puVar4[5] = iStack_34;
  puVar4[6] = uStack_30;
  puVar4[7] = uStack_2c;
  piVar5 = (int *)thunk_FUN_016d4a50(4);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,4);
  }
  *piVar5 = (int)puVar4;
  param_1[1] = piVar5;
  param_1[2] = &DAT_0188ac88;
  *param_1 = 1;
  return;
}

