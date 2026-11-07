// FUN_016a8b64 @ 016a8b64 size=1656 calls_out=9 calls_in=2
// strings: 

void FUN_016a8b64(undefined4 *param_1,int *param_2)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  int *local_d8;
  int local_d4;
  int *local_cc;
  int *local_b8;
  int *local_b4;
  int *local_b0;
  undefined4 local_ac;
  int *local_a8;
  int local_a4;
  int local_a0;
  undefined4 local_9c;
  int *local_98;
  int *local_94;
  int *local_90;
  int *local_8c;
  int *local_88;
  int *piStack_84;
  int *local_80;
  int *local_7c;
  int *local_78;
  int *local_74;
  int *local_70;
  int local_6c;
  int *local_68;
  int *local_60;
  int *local_5c;
  int *local_58;
  int *local_50;
  int *local_4c;
  int *local_48;
  int local_44;
  int local_40;
  int local_3c;
  int iStack_38;
  int local_34;
  int local_30;
  int *local_2c;
  
  iVar2 = param_2[2];
  piVar14 = (int *)0x0;
  iVar8 = *param_2;
  piVar5 = (int *)param_2[1];
  local_d8 = (int *)&DAT_00000004;
  local_5c = (int *)&DAT_00000004;
  local_b4 = (int *)&DAT_00000004;
  piVar4 = piVar5 + iVar2 * 10;
  local_58 = (int *)0x0;
  local_60 = (int *)0x0;
  local_b0 = (int *)0x0;
  local_b8 = (int *)0x0;
  piVar3 = piVar5;
  local_98 = piVar5;
  local_90 = (int *)iVar8;
  local_8c = piVar4;
  if (iVar2 != 0) {
    piVar10 = piVar5 + 5;
    iVar2 = iVar2 * 0x28;
    local_cc = &local_3c;
    piVar3 = piVar14;
    do {
      while( true ) {
        piVar14 = local_58;
        local_50 = piVar10 + -5;
        local_a8 = (int *)*local_50;
        local_a4 = piVar10[-4];
        local_a0 = piVar10[-3];
        iVar16 = piVar10[-2];
        iVar11 = piVar10[-1];
        local_80 = (int *)*piVar10;
        local_7c = (int *)piVar10[1];
        local_78 = (int *)piVar10[2];
        local_74 = (int *)piVar10[3];
        local_70 = (int *)piVar10[4];
        if (iVar11 == -0x80000000 && iVar16 == 0) break;
        local_50 = (int *)*local_50;
        local_4c = (int *)piVar10[-4];
        local_48 = (int *)piVar10[-3];
        local_3c = *piVar10;
        iStack_38 = piVar10[1];
        local_34 = piVar10[2];
        local_30 = piVar10[3];
        local_2c = (int *)piVar10[4];
        local_44 = iVar16;
        local_40 = iVar11;
        if (local_58 == local_60) {
          FUN_016a84fc(&local_60);
        }
        piVar7 = local_5c + (int)piVar14 * 10;
        *piVar7 = (int)local_a8;
        piVar7[1] = local_a4;
        piVar7[2] = local_a0;
        piVar7[3] = iVar16;
        piVar7[4] = iVar11;
        piVar7[5] = (int)local_80;
        piVar7[6] = (int)local_7c;
        piVar7[7] = (int)local_78;
        piVar7[8] = (int)local_74;
        piVar7[9] = (int)local_70;
        local_58 = (int *)((int)piVar14 + 1);
        piVar10 = piVar10 + 10;
        iVar2 = iVar2 + -0x28;
        piVar14 = piVar3;
        local_d4 = iVar16;
        if (iVar2 == 0) goto LAB_016a8d6c;
      }
      local_50 = (int *)*local_50;
      local_4c = (int *)piVar10[-4];
      local_48 = (int *)piVar10[-3];
      local_40 = -0x80000000;
      local_44 = 0;
      local_3c = *piVar10;
      iStack_38 = piVar10[1];
      local_34 = piVar10[2];
      local_30 = piVar10[3];
      local_2c = (int *)piVar10[4];
      if (piVar3 == local_b8) {
        FUN_016a84fc(&local_b8);
        local_d8 = local_b4;
      }
      piVar14 = (int *)((int)piVar3 + 1);
      piVar3 = local_d8 + (int)piVar3 * 10;
      *piVar3 = (int)local_a8;
      piVar3[1] = local_a4;
      piVar3[2] = local_a0;
      piVar3[3] = 0;
      piVar3[4] = -0x80000000;
      piVar3[5] = (int)local_80;
      piVar3[6] = (int)local_7c;
      piVar3[7] = (int)local_78;
      piVar3[8] = (int)local_74;
      piVar3[9] = (int)local_70;
      piVar10 = piVar10 + 10;
      iVar2 = iVar2 + -0x28;
      piVar3 = piVar14;
      local_b0 = piVar14;
    } while (iVar2 != 0);
LAB_016a8d6c:
    piVar3 = piVar4;
  }
  iVar2 = ((uint)((int)piVar4 - (int)piVar3) >> 3) * -0x33333333 + 1;
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_016a01b4(piVar3);
    piVar3 = piVar3 + 10;
  }
  if (iVar8 != 0) {
    thunk_FUN_016d3fb4(piVar5);
  }
  piVar10 = local_58;
  piVar5 = local_5c;
  piVar4 = local_60;
  piVar3 = local_b8;
  local_a0 = 4;
  local_a8 = (int *)0x5;
  piVar6 = local_b4 + (int)piVar14 * 10;
  piVar15 = local_5c + (int)local_58 * 10;
  local_90 = local_b8;
  local_88 = local_5c;
  local_9c = 0;
  local_a4 = 0;
  local_94 = local_b4;
  local_98 = local_b4;
  piVar14 = local_b4;
  piVar7 = local_b4;
  piVar13 = local_5c;
  local_8c = piVar6;
  piStack_84 = piVar15;
LAB_016a8e94:
  piVar12 = piVar7;
  if (piVar14 != (int *)0x0) {
    if (piVar7 != piVar6) goto LAB_016a8ea8;
    goto LAB_016a8f90;
  }
  goto LAB_016a8fb0;
LAB_016a8ea8:
  local_50 = (int *)*piVar7;
  local_4c = (int *)piVar7[1];
  local_48 = (int *)piVar7[2];
  local_44 = piVar7[3];
  local_40 = piVar7[4];
  piVar12 = piVar7 + 10;
  local_3c = piVar7[5];
  iStack_38 = piVar7[6];
  local_34 = piVar7[7];
  local_30 = piVar7[8];
  local_2c = (int *)piVar7[9];
  piVar7 = (int *)0x6;
  if (local_40 == -0x80000000) {
    iVar2 = 0;
    do {
      if (local_44 * 0x20 == iVar2) {
        FUN_0169c7a0(&local_b8,local_48,local_48 + local_44 * 8);
        piVar7 = local_2c;
        iVar2 = local_30;
        local_cc = (int *)&DAT_80000000;
        if (local_34 != -0x80000000) {
          if (local_2c == (int *)0x0) {
            local_d4 = 1;
          }
          else {
            local_d4 = thunk_FUN_016d4a50();
            if (local_d4 == 0) {
              local_94 = piVar12;
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,piVar7);
            }
          }
          FUN_016dd1aa(local_d4,iVar2,piVar7);
          local_cc = piVar7;
        }
        local_60 = local_b8;
        local_5c = local_b4;
        local_58 = local_b0;
        piVar7 = local_50;
        break;
      }
      pcVar1 = (char *)((int)local_48 + iVar2);
      iVar2 = iVar2 + 0x20;
    } while (*pcVar1 == '\a');
  }
  FUN_016a01b4(&local_50);
  if (piVar7 == (int *)0x6) {
    piVar7 = piVar12;
    if (piVar12 == piVar6) goto code_r0x016a8f88;
    goto LAB_016a8ea8;
  }
  local_7c = local_60;
  local_78 = local_5c;
  local_74 = local_58;
  local_6c = local_d4;
  local_68 = local_cc;
  local_94 = piVar12;
  local_80 = piVar7;
LAB_016a8e88:
  local_70 = local_68;
  FUN_00a066d8(&local_a8,&local_80);
  piVar7 = piVar12;
  goto LAB_016a8e94;
code_r0x016a8f88:
  local_94 = piVar6;
LAB_016a8f90:
  if (piVar3 != (int *)0x0) {
    thunk_FUN_016d3fb4(piVar14);
  }
  local_98 = (int *)0x0;
  piVar12 = piVar6;
LAB_016a8fb0:
  while (piVar7 = piVar13, piVar7 != piVar15) {
    piVar13 = piVar7 + 10;
    local_88 = piVar13;
    if (piVar7[4] == -0x80000000) {
      iVar2 = piVar7[2];
      iVar8 = 0;
      do {
        if (piVar7[3] * 0x20 == iVar8) {
          FUN_0169c7a0(&local_50,iVar2,iVar2 + piVar7[3] * 0x20);
          piVar9 = (int *)&DAT_80000000;
          if (piVar7[7] != -0x80000000) {
            piVar9 = (int *)piVar7[9];
            iVar8 = piVar7[8];
            if (piVar9 == (int *)0x0) {
              iVar2 = 1;
            }
            else {
              iVar2 = thunk_FUN_016d4a50(piVar9);
              if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600af4(1,piVar9);
              }
            }
            FUN_016dd1aa(iVar2,iVar8,piVar9);
          }
          local_7c = local_50;
          local_78 = local_4c;
          local_74 = local_48;
          piVar14 = (int *)0x0;
          local_80 = (int *)*piVar7;
          local_6c = iVar2;
          local_68 = piVar9;
          goto LAB_016a8e88;
        }
        pcVar1 = (char *)(iVar2 + iVar8);
        iVar8 = iVar8 + 0x20;
      } while (*pcVar1 == '\a');
    }
  }
  local_b8 = local_a8;
  local_b4 = (int *)local_a4;
  local_b0 = (int *)local_a0;
  local_ac = local_9c;
  local_8c = (int *)0x0;
  local_94 = (int *)0x0;
  local_98 = (int *)0x5;
  local_90 = (int *)0x4;
  local_78 = piVar4;
  local_7c = piVar5;
  local_80 = piVar5;
  local_74 = piVar15;
  if (piVar10 == (int *)0x0) goto LAB_016a9144;
  piVar3 = piVar5;
  goto LAB_016a90dc;
  while( true ) {
    local_4c = (int *)piVar3[1];
    local_48 = (int *)piVar3[2];
    local_44 = piVar3[3];
    local_40 = piVar3[4];
    local_3c = piVar3[5];
    iStack_38 = piVar3[6];
    local_34 = piVar3[7];
    local_30 = piVar3[8];
    local_2c = (int *)piVar3[9];
    local_50 = (int *)*piVar3;
    FUN_0169ffa0(&local_98,&local_50);
    piVar10 = piVar3 + 10;
    piVar3 = piVar14;
    if (piVar10 == piVar15) break;
LAB_016a90dc:
    piVar14 = piVar3 + 10;
    if ((int *)*piVar3 == (int *)0x6) goto LAB_016a913c;
  }
  piVar14 = piVar15;
LAB_016a913c:
  local_7c = piVar14;
LAB_016a9144:
  iVar2 = ((uint)((int)piVar15 - (int)local_7c) >> 3) * -0x33333333 + 1;
  piVar3 = local_7c;
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_016a01b4(piVar3);
    piVar3 = piVar3 + 10;
  }
  if (piVar4 != (int *)0x0) {
    thunk_FUN_016d3fb4(piVar5);
  }
  *param_1 = local_98;
  param_1[1] = local_94;
  param_1[2] = local_90;
  param_1[3] = local_8c;
  param_1[4] = local_b8;
  param_1[5] = local_b4;
  param_1[6] = local_b0;
  param_1[7] = local_ac;
  return;
}

