// FUN_0151ec54 @ 0151ec54 size=2272 calls_out=25 calls_in=1
// strings: additionalProperties | patternProperties | patternProperties

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0151ec54(undefined4 *param_1,int param_2,undefined4 *param_3,char *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  undefined *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  int **ppiVar11;
  int *piVar12;
  int *piVar13;
  undefined4 uVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  int *piVar18;
  undefined8 uVar19;
  undefined1 auStack_218 [72];
  int *local_1d0;
  int *local_188;
  int *local_184;
  int *local_180;
  int *local_178;
  int *local_174;
  int *local_170;
  int *local_168;
  int *local_164;
  int *local_160;
  int *local_158;
  int local_154;
  int *local_150;
  undefined4 local_14c;
  int *local_148;
  undefined4 local_144;
  int *piStack_140;
  undefined4 uStack_13c;
  int *piStack_138;
  int local_130;
  int *local_12c;
  undefined4 local_128;
  int *piStack_124;
  undefined4 uStack_120;
  int *local_f8;
  int *local_f4;
  int *local_f0;
  int *local_e0;
  int *local_dc;
  int *local_d8;
  undefined4 local_d4;
  int *piStack_d0;
  undefined4 local_cc;
  int *local_c8;
  undefined4 local_c4;
  int *local_c0;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_70;
  undefined4 local_38;
  undefined1 local_30;
  
  pcVar4 = (char *)FUN_0196b3a8(*param_3,param_3[1],"additionalProperties",0x14);
  if ((pcVar4 != (char *)0x0) &&
     ((*pcVar4 == '\x05' || ((*pcVar4 == '\x01' && (pcVar4[1] != '\x01')))))) {
    *param_1 = 0;
    return;
  }
  if (*param_4 != '\x05') {
    uVar19 = FUN_015345a4(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                          "patternProperties",0x11);
    uVar14 = (undefined4)((ulonglong)uVar19 >> 0x20);
    piVar18 = (int *)uVar19;
    do {
      iVar10 = *piVar18;
      bVar2 = (bool)hasExclusiveAccess(piVar18);
    } while (!bVar2);
    *piVar18 = iVar10 + 1;
    if (iVar10 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x151f78c);
      (*pcVar1)();
    }
    uVar19 = FUN_015321a0();
    uVar14 = FUN_015956e0(piVar18,uVar14,piVar18,uVar14,uVar19,param_4,0x20);
    *param_1 = 1;
    param_1[1] = 0;
    param_1[2] = uVar14;
    return;
  }
  FUN_01526248(auStack_218,param_2,"patternProperties",0x11);
  piVar18 = *(int **)(param_4 + 0xc);
  uVar14 = 0;
  iVar10 = (int)piVar18 * 0x18;
  if ((int *)0x5555555 < piVar18) {
LAB_0151ecf0:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar14,iVar10);
  }
  if (iVar10 == 0) {
    piVar5 = (int *)&SUB_00000004;
    piVar8 = (int *)0x0;
  }
  else {
    uVar14 = 4;
    piVar5 = (int *)FUN_01298504(iVar10,4);
    piVar8 = piVar18;
    if (piVar5 == (int *)0x0) goto LAB_0151ecf0;
  }
  piVar12 = *(int **)(param_4 + 4);
  uVar14 = *(undefined4 *)(param_4 + 8);
  local_154 = 0;
  piVar16 = (int *)0x0;
  if (piVar12 != (int *)0x0) {
    piVar16 = piVar18;
  }
  local_160 = (int *)0x0;
  local_144 = 0;
  piVar13 = (int *)(uint)(piVar12 != (int *)0x0);
  local_168 = piVar8;
  local_164 = piVar5;
  local_158 = piVar13;
  local_150 = piVar12;
  local_14c = uVar14;
  local_148 = piVar13;
  piStack_140 = piVar12;
  uStack_13c = uVar14;
  piStack_138 = piVar16;
  iVar6 = FUN_01a41998(&local_158);
  if (iVar6 == 0) {
    local_e0 = local_168;
    local_dc = local_164;
    local_d8 = local_160;
    if (local_160 == (int *)&DAT_00000001) {
      local_d8 = (int *)0x0;
      local_b8 = *local_164;
      if (local_b8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c(&DAT_004a6786,0xb,&DAT_01cfbc00);
      }
      piVar18 = (int *)((uint)&local_b8 | 4);
      iVar10 = local_164[2];
      iVar6 = local_164[3];
      iVar15 = local_164[4];
      iVar17 = local_164[5];
      *piVar18 = local_164[1];
      piVar18[1] = iVar10;
      piVar18[2] = iVar6;
      piVar18[3] = iVar15;
      piVar18[4] = iVar17;
      piVar18 = (int *)thunk_FUN_01be5118(0x18);
      if (piVar18 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x18);
      }
      *piVar18 = local_b8;
      piVar18[1] = iStack_b4;
      piVar18[2] = iStack_b0;
      piVar18[3] = iStack_ac;
      piVar18[4] = iStack_a8;
      piVar18[5] = iStack_a4;
      FUN_0155f750(&local_e0);
      puVar7 = &DAT_01cfbbe0;
    }
    else {
      piVar18 = (int *)thunk_FUN_01be5118(0xc);
      if (piVar18 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0xc);
      }
      puVar7 = &DAT_01cfbc10;
      *piVar18 = (int)local_168;
      piVar18[1] = (int)local_164;
      piVar18[2] = (int)local_160;
    }
    param_1[2] = puVar7;
    *param_1 = 1;
    param_1[1] = piVar18;
    goto LAB_0151f6bc;
  }
  FUN_0155f038(&local_b8,auStack_218,*(undefined4 *)(iVar6 + 4),*(undefined4 *)(iVar6 + 8));
  FUN_0157cf50(&local_e0,*(undefined4 *)(iVar6 + 4),*(undefined4 *)(iVar6 + 8));
  if (local_e0 != (int *)0x4) {
                    /* WARNING: Could not recover jumptable at 0x0151eeac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_0151eeb0 + *(int *)(&DAT_0151eeb0 + (int)local_e0 * 4)))();
    return;
  }
  *param_1 = 0;
  FUN_014ff9e0(&local_b8);
  FUN_0155f750(&local_168);
  iVar6 = 0;
  local_e0 = piVar13;
  local_d8 = piVar12;
  local_d4 = uVar14;
  piStack_d0 = piVar13;
  local_c8 = piVar12;
  local_c4 = uVar14;
  local_c0 = piVar16;
  if (*local_1d0 == 2) {
    if (iVar10 == 0) {
      piVar8 = (int *)&SUB_00000004;
      piVar18 = (int *)0x0;
    }
    else {
      uVar14 = 4;
      piVar8 = (int *)FUN_01298504(iVar10,4);
      if (piVar8 == (int *)0x0) goto LAB_0151ecf0;
    }
    piVar5 = (int *)0x0;
    local_f0 = (int *)0x0;
    local_cc = 0;
    local_dc = (int *)0x0;
    local_f8 = piVar18;
    local_f4 = piVar8;
LAB_0151f28c:
    uVar19 = FUN_01a41998(&local_e0);
    uVar14 = (undefined4)((ulonglong)uVar19 >> 0x20);
    iVar10 = (int)uVar19;
    if (iVar10 != 0) {
      FUN_0155f038(&local_b8,auStack_218,*(undefined4 *)(iVar10 + 4),*(undefined4 *)(iVar10 + 8));
      piVar18 = (int *)FUN_01572244(local_70,local_38,*(undefined4 *)(iVar10 + 4),
                                    *(undefined4 *)(iVar10 + 8));
      if (piVar18 == (int *)0x0) {
        piVar8 = (int *)FUN_0155f60c(local_80,local_7c,uVar14);
      }
      else {
        uVar3 = FUN_016731b0(local_30,uVar14);
        FUN_0156aca8(&local_130,&local_b8,uVar14,uVar3);
        if (local_130 != 0) goto code_r0x0151f300;
        DataMemoryBarrier(0xb);
        do {
          iVar10 = *piVar18;
          bVar2 = (bool)hasExclusiveAccess(piVar18);
        } while (!bVar2);
        *piVar18 = iVar10 + -1;
        piVar8 = local_12c;
        if (iVar10 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0155d918(piVar18);
        }
      }
      FUN_014ff9e0(&local_b8);
      FUN_0155f588(&local_f8);
      goto LAB_0151f5e4;
    }
    if (local_f8 == (int *)&DAT_80000000) goto LAB_0151f520;
    local_178 = local_f8;
    local_174 = piVar8;
    if (piVar5 != (int *)&DAT_00000001) {
      local_170 = piVar5;
      piVar18 = (int *)thunk_FUN_01be5118(0xc);
      if (piVar18 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0xc);
      }
      ppiVar11 = &local_178;
      piVar8 = (int *)&DAT_01cfbc50;
      goto LAB_0151f6a0;
    }
    local_170 = (int *)0x0;
    local_b8 = *piVar8;
    if (local_b8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c(&DAT_004a6786,0xb,&DAT_01cfbc00);
    }
    piVar18 = (int *)((uint)&local_b8 | 4);
    iVar10 = piVar8[2];
    iVar6 = piVar8[3];
    iVar15 = piVar8[4];
    iVar17 = piVar8[5];
    *piVar18 = piVar8[1];
    piVar18[1] = iVar10;
    piVar18[2] = iVar6;
    piVar18[3] = iVar15;
    piVar18[4] = iVar17;
    piVar18 = (int *)thunk_FUN_01be5118(0x18);
    if (piVar18 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x18);
    }
    *piVar18 = local_b8;
    piVar18[1] = iStack_b4;
    piVar18[2] = iStack_b0;
    piVar18[3] = iStack_ac;
    piVar18[4] = iStack_a8;
    piVar18[5] = iStack_a4;
    FUN_0155f588(&local_178);
    piVar8 = (int *)&DAT_01cfbc70;
  }
  else {
    if (iVar10 == 0) {
      piVar8 = (int *)&SUB_00000004;
      piVar18 = (int *)0x0;
    }
    else {
      uVar14 = 4;
      piVar8 = (int *)FUN_01298504(iVar10,4);
      if (piVar8 == (int *)0x0) goto LAB_0151ecf0;
    }
    piVar5 = (int *)0x0;
    local_f0 = (int *)0x0;
    local_cc = 0;
    local_dc = (int *)0x0;
    local_f8 = piVar18;
    local_f4 = piVar8;
LAB_0151f3c0:
    uVar19 = FUN_01a41998(&local_e0);
    uVar14 = (undefined4)((ulonglong)uVar19 >> 0x20);
    iVar10 = (int)uVar19;
    if (iVar10 != 0) {
      FUN_0155f038(&local_b8,auStack_218,*(undefined4 *)(iVar10 + 4),*(undefined4 *)(iVar10 + 8));
      piVar18 = (int *)FUN_01570878(local_70,local_38,*(undefined4 *)(iVar10 + 4),
                                    *(undefined4 *)(iVar10 + 8));
      if (piVar18 == (int *)0x0) {
        piVar8 = (int *)FUN_0155f60c(local_80,local_7c,uVar14);
      }
      else {
        uVar3 = FUN_016731b0(local_30,uVar14);
        FUN_0156aca8(&local_130,&local_b8,uVar14,uVar3);
        if (local_130 != 0) goto code_r0x0151f434;
        DataMemoryBarrier(0xb);
        do {
          iVar10 = *piVar18;
          bVar2 = (bool)hasExclusiveAccess(piVar18);
        } while (!bVar2);
        *piVar18 = iVar10 + -1;
        piVar8 = local_12c;
        if (iVar10 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0155da0c(piVar18);
        }
      }
      FUN_014ff9e0(&local_b8);
      FUN_0155f6cc(&local_f8);
LAB_0151f5e4:
      piVar18 = (int *)0x0;
      goto LAB_0151f6b0;
    }
    if (local_f8 == (int *)&DAT_80000000) {
LAB_0151f520:
      piVar18 = (int *)0x0;
    }
    else {
      local_188 = local_f8;
      local_184 = piVar8;
      if (piVar5 == (int *)&DAT_00000001) {
        local_180 = (int *)0x0;
        local_b8 = *piVar8;
        if (local_b8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c(&DAT_004a6786,0xb,&DAT_01cfbc00);
        }
        piVar18 = (int *)((uint)&local_b8 | 4);
        iVar10 = piVar8[2];
        iVar6 = piVar8[3];
        iVar15 = piVar8[4];
        iVar17 = piVar8[5];
        *piVar18 = piVar8[1];
        piVar18[1] = iVar10;
        piVar18[2] = iVar6;
        piVar18[3] = iVar15;
        piVar18[4] = iVar17;
        piVar18 = (int *)thunk_FUN_01be5118(0x18);
        if (piVar18 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0x18);
        }
        *piVar18 = local_b8;
        piVar18[1] = iStack_b4;
        piVar18[2] = iStack_b0;
        piVar18[3] = iStack_ac;
        piVar18[4] = iStack_a8;
        piVar18[5] = iStack_a4;
        FUN_0155f6cc(&local_188);
        piVar8 = (int *)&DAT_01cfbc90;
      }
      else {
        local_180 = piVar5;
        piVar18 = (int *)thunk_FUN_01be5118(0xc);
        if (piVar18 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0xc);
        }
        ppiVar11 = &local_188;
        piVar8 = (int *)&DAT_01cfbc30;
LAB_0151f6a0:
        piVar5 = ppiVar11[1];
        piVar16 = ppiVar11[2];
        *piVar18 = (int)*ppiVar11;
        piVar18[1] = (int)piVar5;
        piVar18[2] = (int)piVar16;
      }
    }
  }
LAB_0151f6b0:
  param_1[2] = piVar8;
  *param_1 = 1;
  param_1[1] = piVar18;
LAB_0151f6bc:
  FUN_014ff9e0(auStack_218);
  return;
code_r0x0151f300:
  local_14c = local_128;
  local_148 = piStack_124;
  local_144 = uStack_120;
  local_154 = local_130;
  local_150 = local_12c;
  local_158 = piVar18;
  if (piVar5 == local_f8) {
    FUN_013e6234(&local_f8);
    piVar8 = local_f4;
  }
  puVar9 = (undefined4 *)((int)piVar8 + iVar6);
  piVar5 = (int *)((int)piVar5 + 1);
  *puVar9 = local_158;
  puVar9[1] = local_154;
  puVar9[2] = local_150;
  puVar9[3] = local_14c;
  puVar9[4] = local_148;
  puVar9[5] = local_144;
  local_f0 = piVar5;
  FUN_014ff9e0(&local_b8);
  iVar6 = iVar6 + 0x18;
  goto LAB_0151f28c;
code_r0x0151f434:
  local_14c = local_128;
  local_148 = piStack_124;
  local_144 = uStack_120;
  local_154 = local_130;
  local_150 = local_12c;
  local_158 = piVar18;
  if (piVar5 == local_f8) {
    FUN_013e6234(&local_f8);
    piVar8 = local_f4;
  }
  puVar9 = (undefined4 *)((int)piVar8 + iVar6);
  piVar5 = (int *)((int)piVar5 + 1);
  *puVar9 = local_158;
  puVar9[1] = local_154;
  puVar9[2] = local_150;
  puVar9[3] = local_14c;
  puVar9[4] = local_148;
  puVar9[5] = local_144;
  local_f0 = piVar5;
  FUN_014ff9e0(&local_b8);
  iVar6 = iVar6 + 0x18;
  goto LAB_0151f3c0;
}

