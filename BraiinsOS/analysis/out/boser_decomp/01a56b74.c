// FUN_01a56b74 @ 01a56b74 size=1220 calls_out=15 calls_in=2
// strings: always at least one key

void FUN_01a56b74(int *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  undefined *puVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  char *pcVar11;
  int local_160;
  int iStack_15c;
  uint uStack_158;
  int local_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  int local_144;
  undefined4 uStack_140;
  undefined4 local_13c;
  int local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  int local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  int local_118;
  int iStack_114;
  uint uStack_110;
  int local_108;
  int local_104;
  uint local_100;
  uint local_fc;
  int *local_f8;
  undefined *local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int local_d0;
  char *local_cc;
  int local_c8;
  int local_c4;
  undefined4 *local_c0;
  int local_b8 [18];
  int local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_5c;
  undefined4 local_58;
  
  uVar10 = *(undefined4 *)(param_2 + 8);
  uVar6 = *(undefined4 *)(param_2 + 0xc);
  local_c8 = 0;
  local_cc = (char *)0x4;
  local_d0 = 0;
  piVar2 = local_b8;
  local_f0 = uVar10;
  local_ec = uVar6;
  FUN_01a45eb8(piVar2,param_2);
  if (local_b8[0] == -0x80000000) {
LAB_01a56bcc:
    piVar2 = (int *)((uint)piVar2 | 4);
    local_e8 = *piVar2;
    local_e4 = piVar2[1];
    local_e0 = piVar2[2];
    iStack_dc = piVar2[3];
    iStack_d8 = piVar2[4];
    iStack_d4 = piVar2[5];
    FUN_01a456c8(&local_d0);
LAB_01a56be0:
    if (local_e8 == 3) goto LAB_01a56d3c;
    local_c0 = &local_f0;
    local_c8 = 3;
    local_d0 = 3;
    local_cc = "key";
    local_c4 = param_2;
    FUN_01a5cbd0(&local_108,&local_e8,&local_d0);
    if (local_108 == 3) goto LAB_01a56d54;
    local_160 = local_104;
    iStack_15c = local_100;
    uStack_158 = local_fc;
    piVar2 = local_f8;
  }
  else {
    FUN_01a54ba8(&local_d0);
    pcVar11 = local_cc;
    iVar8 = 0x48;
    FUN_01bed4e2(local_cc,local_b8,0x48);
    piVar2 = &local_70;
    iVar9 = 1;
    while( true ) {
      pcVar4 = *(char **)(param_2 + 8);
      iVar7 = *(int *)(param_2 + 0xc);
      local_c8 = iVar9;
      if ((iVar7 == 0) || (*pcVar4 != '.')) break;
      *(char **)(param_2 + 8) = pcVar4 + 1;
      *(int *)(param_2 + 0xc) = iVar7 + -1;
      FUN_01a45eb8(piVar2,param_2);
      if (local_70 == -0x80000000) {
        if (local_6c != 1) goto LAB_01a56bcc;
        *(char **)(param_2 + 8) = pcVar4;
        *(int *)(param_2 + 0xc) = iVar7;
        piVar2 = (int *)((uint)&local_e8 | 4);
        *piVar2 = local_d0;
        piVar2[1] = (int)local_cc;
        piVar2[2] = local_c8;
        local_e8 = 3;
        FUN_0134aee0(local_68,local_64,4,0xc);
        FUN_012d40d0(local_5c,local_58);
        goto LAB_01a56be0;
      }
      if (iVar9 == local_d0) {
        FUN_01a54ba8(&local_d0);
        pcVar11 = local_cc;
      }
      FUN_01bed864(pcVar11 + iVar8,piVar2,0x48);
      iVar8 = iVar8 + 0x48;
      iVar9 = iVar9 + 1;
    }
    *(char **)(param_2 + 8) = pcVar4;
    *(int *)(param_2 + 0xc) = iVar7;
    piVar2 = (int *)((uint)&local_e8 | 4);
    *piVar2 = local_d0;
    piVar2[1] = (int)local_cc;
    piVar2[2] = iVar9;
    local_e8 = 3;
    FUN_0134aee0(0,4,4,0xc);
    FUN_012d40d0(0);
LAB_01a56d3c:
    piVar2 = (int *)((uint)&local_e8 | 4);
    local_104 = *piVar2;
    local_100 = piVar2[1];
    local_fc = piVar2[2];
LAB_01a56d54:
    uVar1 = local_100;
    iVar8 = local_104;
    local_118 = local_104;
    iStack_114 = local_100;
    uStack_110 = local_fc;
    local_108 = local_104;
    local_104 = local_100;
    local_100 = local_fc;
    if (local_fc < 0x50) {
      piVar2 = (int *)((uint)&local_e8 | 4);
      *piVar2 = iVar8;
      piVar2[1] = uVar1;
      piVar2[2] = local_fc;
      local_e8 = *piVar2;
      iVar8 = piVar2[1];
      iVar9 = piVar2[2];
      local_13c = 0;
      local_144 = -0x80000000;
      local_148 = 0;
      local_150 = -0x80000000;
      local_e4 = iVar8;
      local_e0 = iVar9;
      local_d0 = local_e8;
      local_cc = (char *)iVar8;
      local_c8 = iVar9;
      if (iVar9 == 0) {
        puVar3 = &DAT_01d2c41c;
LAB_01a5702c:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("always at least one key",0x17,puVar3);
      }
      piVar5 = (int *)(iVar8 + 0x30);
      piVar2 = (int *)0x0;
      if (*piVar5 != -0x7ffffffd) {
        piVar2 = piVar5;
      }
      FUN_01a60888(&local_138,piVar2);
      if (local_138 != -0x7ffffffd) {
        local_150 = local_138;
        uStack_14c = uStack_134;
        local_148 = uStack_130;
        FUN_01a55794(piVar5,1,0);
      }
      iVar8 = iVar8 + iVar9 * 0x48;
      if (iVar8 == 0x48) {
        puVar3 = &DAT_01d2c42c;
        goto LAB_01a5702c;
      }
      piVar5 = (int *)(iVar8 + -0xc);
      piVar2 = (int *)0x0;
      if (*piVar5 != -0x7ffffffd) {
        piVar2 = piVar5;
      }
      FUN_01a60888(&local_128,piVar2);
      if (local_128 != -0x7ffffffd) {
        local_144 = local_128;
        uStack_140 = uStack_124;
        local_13c = uStack_120;
        iVar9 = *piVar5;
        if ((iVar9 != -0x7ffffffd) && (-1 < iVar9)) {
          FUN_0134bd64(iVar9,*(undefined4 *)(iVar8 + -8));
        }
        *(undefined4 *)(iVar8 + -4) = 0;
        *(undefined4 *)(iVar8 + -0xc) = 0x80000000;
      }
      FUN_01a45c4c((int *)(iVar8 + -0x30));
      *(int *)(iVar8 + -0x30) = local_150;
      *(undefined4 *)(iVar8 + -0x2c) = uStack_14c;
      *(undefined4 *)(iVar8 + -0x28) = local_148;
      *(int *)(iVar8 + -0x24) = local_144;
      *(undefined4 *)(iVar8 + -0x20) = uStack_140;
      *(undefined4 *)(iVar8 + -0x1c) = local_13c;
      param_1[1] = local_e8;
      param_1[2] = local_e4;
      param_1[3] = local_e0;
      local_108 = 3;
      goto LAB_01a56fa0;
    }
    local_e8 = -0x7ffffffe;
    FUN_01a456c8(&local_108);
    *(undefined4 *)(param_2 + 8) = uVar10;
    *(undefined4 *)(param_2 + 0xc) = uVar6;
    local_fc = 0;
    local_100 = 0;
    local_108 = 0;
    local_104 = 4;
    piVar2 = (int *)thunk_FUN_01be5118(0x18);
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x18);
    }
    *piVar2 = local_e8;
    piVar2[1] = local_e4;
    piVar2[2] = local_e0;
    piVar2[3] = iStack_dc;
    piVar2[4] = iStack_d8;
    piVar2[5] = iStack_d4;
    FUN_012d40d0(0);
    local_f4 = &DAT_01d2c3f0;
    local_160 = local_108;
    iStack_15c = local_104;
    uStack_158 = local_100;
    local_108 = 1;
  }
  param_1[1] = local_160;
  param_1[2] = iStack_15c;
  param_1[3] = uStack_158;
  param_1[4] = (int)piVar2;
  param_1[5] = (int)local_f4;
LAB_01a56fa0:
  *param_1 = local_108;
  return;
}

