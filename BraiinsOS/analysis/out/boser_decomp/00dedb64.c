// FUN_00dedb64 @ 00dedb64 size=648 calls_out=6 calls_in=3
// strings: 

void FUN_00dedb64(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *local_68;
  uint local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  iVar3 = param_2[2];
  piVar4 = (int *)param_2[3];
  iVar6 = param_2[4];
  piVar12 = (int *)*param_2;
  uVar1 = iVar3 << 6;
  param_2[4] = 0;
  if (iVar6 == 0) {
    piVar11 = (int *)param_2[1];
LAB_00dedc6c:
    piVar10 = piVar11;
    if (piVar11 != piVar4) {
      piVar10 = piVar12;
      do {
        iVar6 = piVar11[6];
        iVar5 = piVar11[7];
        local_5c = piVar11[9];
        local_58 = piVar11[10];
        local_54 = piVar11[0xb];
        local_68 = (int *)piVar11[3];
        local_64 = piVar11[4];
        local_60 = piVar11[5];
        local_50 = piVar11[0xc];
        iStack_4c = piVar11[0xd];
        iStack_48 = piVar11[0xe];
        FUN_019bb7e0(*piVar11,piVar11[1]);
        FUN_019bb7e0(iVar6,iVar5);
        piVar11 = piVar11 + 0x10;
        piVar8 = piVar10 + 9;
        *piVar10 = (int)local_68;
        piVar10[1] = local_64;
        piVar10[2] = local_60;
        piVar10[3] = local_5c;
        piVar10[4] = local_58;
        piVar10[5] = local_54;
        piVar10[6] = local_50;
        piVar10[7] = iStack_4c;
        piVar10[8] = iStack_48;
        piVar10 = piVar8;
      } while (piVar11 != piVar4);
      param_2[1] = piVar11;
      piVar10 = piVar11;
      goto LAB_00dedd34;
    }
  }
  else {
    iVar5 = param_2[1];
    uVar9 = iVar6 - 1;
    uVar2 = (uint)((int)piVar4 - iVar5) >> 6;
    uVar7 = uVar2;
    if (uVar9 < (uint)((int)piVar4 - iVar5) >> 6) {
      uVar7 = uVar9;
    }
    piVar10 = (int *)(iVar5 + uVar7 * 0x40);
    param_2[1] = piVar10;
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      FUN_00bbabc0(iVar5);
      iVar5 = iVar5 + 0x40;
    }
    if ((uVar9 <= uVar2) && (piVar10 != piVar4)) {
      piVar11 = piVar10 + 0x10;
      param_2[1] = piVar11;
      local_68 = (int *)*piVar10;
      local_64 = piVar10[1];
      local_60 = piVar10[2];
      local_5c = piVar10[3];
      local_58 = piVar10[4];
      local_54 = piVar10[5];
      local_50 = piVar10[6];
      iStack_4c = piVar10[7];
      iStack_48 = piVar10[8];
      iStack_44 = piVar10[9];
      local_40 = piVar10[10];
      iStack_3c = piVar10[0xb];
      iStack_38 = piVar10[0xc];
      iStack_34 = piVar10[0xd];
      iStack_30 = piVar10[0xe];
      iStack_2c = piVar10[0xf];
      piVar10 = piVar11;
      if (local_68 != (int *)0x80000000) {
        FUN_00bbabc0(&local_68);
        goto LAB_00dedc6c;
      }
    }
  }
  piVar8 = piVar12;
LAB_00dedd34:
  param_2[2] = 0;
  uVar7 = ((uint)((int)piVar8 - (int)piVar12) >> 2) * 0x38e38e39;
  *param_2 = 4;
  param_2[1] = 4;
  param_2[3] = 4;
  local_68 = piVar12;
  local_64 = uVar7;
  local_60 = iVar3;
  FUN_00dede64(piVar10,(uint)((int)piVar4 - (int)piVar10) >> 6);
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar2 = (uVar1 / 0x24) * 0x24;
  }
  if (iVar3 != 0 && uVar1 != uVar2) {
    if (uVar1 == 0) {
      piVar12 = (int *)&SUB_00000004;
    }
    else {
      piVar12 = (int *)FUN_01298554(piVar12,uVar1,4,uVar2);
      if (piVar12 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,uVar2);
      }
    }
  }
  *param_1 = uVar1 / 0x24;
  param_1[1] = (uint)piVar12;
  param_1[2] = uVar7;
  FUN_00dede10(param_2);
  return;
}

