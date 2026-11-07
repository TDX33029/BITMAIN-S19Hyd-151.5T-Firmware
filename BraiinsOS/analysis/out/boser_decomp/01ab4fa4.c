// FUN_01ab4fa4 @ 01ab4fa4 size=1060 calls_out=7 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01ab4fa4(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int local_2d8;
  int *local_2d4;
  int local_2c0;
  int local_2bc;
  int iStack_2b8;
  int iStack_2b4;
  int iStack_2b0;
  int local_2ac;
  int iStack_2a8;
  int iStack_2a4;
  int iStack_2a0;
  int iStack_29c;
  int *local_1d0;
  int *local_1cc;
  int *local_1c8;
  int *local_1c4;
  int *local_1c0;
  int *local_1bc;
  int local_1b4;
  int *local_1b0;
  int iStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  int local_198;
  int iStack_194;
  int iStack_190;
  int local_18c;
  int local_188;
  int local_184;
  int iStack_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  int *local_48;
  int local_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  local_2c0 = param_2[1];
  iVar2 = param_2[2];
  piVar10 = (int *)&SUB_00000004;
  iStack_2b8 = *param_2;
  local_2d8 = 0;
  local_1c8 = (int *)0x0;
  local_1d0 = (int *)0x0;
  local_44 = 0;
  local_4c = 0;
  iVar5 = local_2c0 + iVar2 * 0x28;
  local_1cc = (int *)&SUB_00000004;
  local_48 = (int *)&SUB_00000004;
  local_2bc = local_2c0;
  iStack_2b4 = iVar5;
  if (iVar2 != 0) {
    piVar3 = (int *)(local_2c0 + 0x14);
    iVar2 = iVar2 * 0x28;
    piVar11 = (int *)&SUB_00000004;
    piVar7 = (int *)0x0;
    local_2d8 = 0;
    local_2bc = local_2c0;
    do {
      local_188 = piVar3[-1];
      local_18c = piVar3[-2];
      if (local_188 == -0x80000000 && local_18c == 0) {
        local_198 = piVar3[-5];
        iStack_194 = piVar3[-4];
        iStack_190 = piVar3[-3];
        local_188 = -0x80000000;
        local_18c = 0;
        local_184 = *piVar3;
        iStack_180 = piVar3[1];
        iStack_17c = piVar3[2];
        iStack_178 = piVar3[3];
        iStack_174 = piVar3[4];
        if (local_2d8 == local_4c) {
          FUN_0133e324(&local_4c);
          piVar10 = local_48;
        }
        local_44 = local_2d8 + 1;
        piVar9 = piVar10 + local_2d8 * 10;
        *piVar9 = local_198;
        piVar9[1] = iStack_194;
        piVar9[2] = iStack_190;
        piVar9[3] = local_18c;
        piVar9[4] = local_188;
        piVar9[5] = local_184;
        piVar9[6] = iStack_180;
        piVar9[7] = iStack_17c;
        piVar9[8] = iStack_178;
        piVar9[9] = iStack_174;
        local_2d8 = local_44;
      }
      else {
        local_198 = piVar3[-5];
        iStack_194 = piVar3[-4];
        iStack_190 = piVar3[-3];
        local_184 = *piVar3;
        iStack_180 = piVar3[1];
        iStack_17c = piVar3[2];
        iStack_178 = piVar3[3];
        iStack_174 = piVar3[4];
        if (piVar7 == local_1d0) {
          FUN_0133e324(&local_1d0);
          piVar11 = local_1cc;
        }
        local_1c8 = (int *)((int)piVar7 + 1);
        piVar7 = piVar11 + (int)piVar7 * 10;
        *piVar7 = local_198;
        piVar7[1] = iStack_194;
        piVar7[2] = iStack_190;
        piVar7[3] = local_18c;
        piVar7[4] = local_188;
        piVar7[5] = local_184;
        piVar7[6] = iStack_180;
        piVar7[7] = iStack_17c;
        piVar7[8] = iStack_178;
        piVar7[9] = iStack_174;
        piVar7 = local_1c8;
      }
      piVar3 = piVar3 + 10;
      iVar2 = iVar2 + -0x28;
    } while (iVar2 != 0);
    local_2bc = iVar5;
  }
  FUN_01abd230(&local_2c0);
  piVar3 = local_1c8;
  piVar7 = local_1cc;
  piVar11 = local_1d0;
  local_b0 = 5;
  local_b4 = 0;
  local_198 = 0;
  piVar6 = local_1cc + (int)local_1c8 * 10;
  local_1c8 = (int *)local_4c;
  piVar1 = piVar10 + local_2d8 * 10;
  local_1c0 = local_1cc;
  piVar9 = local_1cc;
  local_2d4 = piVar10;
  local_1d0 = piVar10;
  local_1cc = piVar10;
  local_1c4 = piVar1;
  local_1bc = piVar6;
  do {
    piVar8 = piVar9;
    if (piVar10 != (int *)0x0) {
      if (local_2d4 != piVar1) {
        do {
          local_2c0 = *local_2d4;
          local_2bc = local_2d4[1];
          iStack_2b8 = local_2d4[2];
          iStack_2b4 = local_2d4[3];
          iStack_2b0 = local_2d4[4];
          piVar4 = local_2d4 + 10;
          local_2ac = local_2d4[5];
          iStack_2a8 = local_2d4[6];
          iStack_2a4 = local_2d4[7];
          iStack_2a0 = local_2d4[8];
          iStack_29c = local_2d4[9];
          FUN_01ab54c4(&local_4c,&local_2c0);
          FUN_01ab0ac0(&local_2c0);
          local_2d4 = piVar4;
          if (local_4c != 6) {
            local_1b0 = local_48;
            iStack_1ac = local_44;
            iStack_1a8 = iStack_40;
            iStack_1a4 = iStack_3c;
            iStack_1a0 = local_38;
            iStack_19c = iStack_34;
            local_1b4 = local_4c;
            local_1cc = piVar4;
            goto LAB_01ab52dc;
          }
        } while (piVar4 != piVar1);
        local_1cc = piVar4;
      }
      FUN_01abd230(&local_1d0);
      local_1d0 = (int *)0x0;
    }
    do {
      if (piVar8 == piVar6) {
        FUN_01bed4e2(&local_2c0,&local_198,0xec);
        local_50 = 5;
        local_1c8 = piVar11;
        local_54 = 0;
        local_198 = 0;
        local_1d0 = piVar7;
        local_1cc = piVar7;
        local_1c4 = piVar6;
        if (piVar3 == (int *)0x0) goto LAB_01ab5394;
        goto LAB_01ab5344;
      }
      piVar9 = piVar8 + 10;
      local_1c0 = piVar9;
      FUN_01ab54c4(&local_1b4,piVar8);
      piVar8 = piVar9;
    } while (local_1b4 == 6);
    piVar10 = (int *)0x0;
LAB_01ab52dc:
    FUN_01ab05d8(&local_198,&local_1b4);
  } while( true );
  while( true ) {
    local_48 = (int *)piVar7[1];
    local_44 = piVar7[2];
    iStack_40 = piVar7[3];
    iStack_3c = piVar7[4];
    local_38 = piVar7[5];
    iStack_34 = piVar7[6];
    iStack_30 = piVar7[7];
    iStack_2c = piVar7[8];
    iStack_28 = piVar7[9];
    local_4c = *piVar7;
    FUN_01ab0338(&local_198,&local_4c);
    piVar10 = piVar7 + 10;
    piVar7 = piVar7 + 10;
    if (piVar10 == piVar6) break;
LAB_01ab5344:
    piVar10 = piVar7 + 10;
    if (*piVar7 == 6) goto LAB_01ab5390;
  }
  piVar10 = piVar6;
LAB_01ab5390:
  local_1cc = piVar10;
LAB_01ab5394:
  FUN_01abd230(&local_1d0);
  FUN_01bed4e2(param_1,&local_198,0x14c);
  FUN_01bed4e2(param_1 + 0x14c,&local_2c0,0xec);
  return;
}

