// FUN_0175a4bc @ 0175a4bc size=2348 calls_out=12 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0175a4bc(int param_1,undefined4 *param_2,int *param_3,int param_4,undefined4 *param_5,
                 byte *param_6,int param_7,int param_8,undefined1 param_9,undefined1 param_10)

{
  uint uVar1;
  code *pcVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int *piVar16;
  undefined4 unaff_r4;
  int *piVar17;
  int *piVar18;
  int *piVar19;
  undefined1 uVar20;
  undefined4 uVar21;
  int *piVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 *puVar25;
  undefined1 uVar26;
  int iVar27;
  int iVar28;
  undefined4 uVar29;
  uint uVar30;
  int *piVar31;
  int *piVar32;
  int *piVar33;
  int iVar34;
  bool bVar35;
  bool bVar36;
  int local_250;
  int *local_24c;
  uint local_240;
  undefined4 local_23c;
  uint local_234;
  int local_230;
  int local_22c;
  int local_228;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  undefined4 local_1d0;
  uint local_1cc;
  int local_1c8;
  uint local_1c4;
  uint local_1c0;
  int local_1bc;
  uint local_1b8;
  int local_1b4;
  int local_1b0;
  int iStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  int iStack_1a0;
  int local_19c;
  undefined4 uStack_198;
  int iStack_194;
  undefined4 uStack_190;
  int local_18c;
  int iStack_188;
  int iStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  int local_178;
  int *local_174;
  int *local_170;
  int local_16c;
  undefined1 local_168;
  int *local_164;
  int local_160;
  int *local_15c;
  int local_158;
  int *local_154;
  int local_150;
  int *local_14c;
  int *local_148;
  int local_144;
  int *local_140;
  int local_13c;
  int local_138;
  undefined1 local_134;
  undefined1 local_133;
  undefined1 local_132;
  undefined1 local_131;
  undefined1 local_130 [4];
  int iStack_12c;
  int iStack_128;
  int local_120;
  undefined4 uStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  int local_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  undefined4 uStack_100;
  int local_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int local_e0;
  int local_dc;
  int iStack_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  undefined4 local_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  undefined4 local_a8;
  
  uVar20 = 0;
  uVar26 = 0;
  if (*param_6 == 2) {
LAB_0175a50c:
    uVar20 = uVar26;
    uVar26 = 0;
  }
  else {
    unaff_r4 = *(undefined4 *)(param_6 + 1);
    if ((*param_6 & 1) != 0) {
      FUN_01bed4e2(&local_e0,param_6 + 5,0xc);
      uVar26 = 1;
      goto LAB_0175a50c;
    }
    uVar26 = 1;
  }
  iVar7 = FUN_01823e90(param_2);
  *(undefined1 *)(iVar7 + 0x75) = uVar26;
  *(undefined4 *)(iVar7 + 0x7b) = unaff_r4;
  *(undefined1 *)(iVar7 + 0x7a) = uVar20;
  *(undefined4 *)(iVar7 + 0x76) = unaff_r4;
  FUN_01bed4e2(iVar7 + 0x7f,&local_e0,0xc);
  if (param_7 != 0) {
    if (param_8 < 0) {
      uVar21 = 0;
LAB_0175a564:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar21,param_8);
    }
    if (param_8 == 0) {
      iVar7 = 0;
      iVar8 = 1;
    }
    else {
      uVar21 = 1;
      iVar8 = FUN_01298504(param_8,1);
      if (iVar8 == 0) goto LAB_0175a564;
      iVar7 = param_8;
    }
    FUN_01bed4e2(iVar8,param_7,param_8);
    iVar9 = FUN_01823e90(param_2);
    if (*(int *)(iVar9 + 0x68) != -0x80000000) {
      FUN_019bb7e0(*(int *)(iVar9 + 0x68),*(undefined4 *)(iVar9 + 0x6c));
    }
    *(int *)(iVar9 + 0x6c) = iVar8;
    *(int *)(iVar9 + 0x68) = iVar7;
    *(int *)(iVar9 + 0x70) = param_8;
  }
  iVar7 = FUN_01823e90(param_2);
  *(undefined1 *)(iVar7 + 0x8b) = param_9;
  iVar7 = FUN_01823e90(param_2);
  *(undefined1 *)(iVar7 + 0x74) = 0;
  if (*(int *)(param_4 + 0x10) == 0) {
    FUN_01bed4e2(&iStack_d8,param_3,0xb0);
    local_dc = 1;
    local_e0 = 1;
    piVar22 = (int *)thunk_FUN_01be5118(0xb8);
    if (piVar22 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0xb8);
    }
    FUN_01bed4e2(piVar22,&local_e0,0xb8);
    do {
      iVar7 = *piVar22;
      bVar35 = (bool)hasExclusiveAccess(piVar22);
    } while (!bVar35);
    *piVar22 = iVar7 + 1;
    piVar17 = piVar22;
    if (-1 < iVar7) {
LAB_0175a810:
      uVar21 = param_2[1];
      uVar23 = param_2[2];
      *(undefined4 *)(param_1 + 0x2c) = *param_2;
      *(undefined4 *)(param_1 + 0x30) = uVar21;
      *(undefined4 *)(param_1 + 0x34) = uVar23;
      uVar21 = param_5[1];
      uVar23 = param_5[2];
      uVar24 = param_5[3];
      uVar29 = param_5[4];
      *(undefined4 *)(param_1 + 0x18) = *param_5;
      *(undefined4 *)(param_1 + 0x1c) = uVar21;
      *(undefined4 *)(param_1 + 0x20) = uVar23;
      *(undefined4 *)(param_1 + 0x24) = uVar24;
      *(undefined4 *)(param_1 + 0x28) = uVar29;
      *(undefined1 *)(param_1 + 0x45) = param_9;
      *(undefined1 *)(param_1 + 0x44) = 0;
      *(int **)(param_1 + 0x38) = piVar17;
      *(int **)(param_1 + 0x3c) = piVar22;
      *(int *)(param_1 + 0x40) = param_4;
      *(undefined1 *)(param_1 + 0x46) = param_10;
      *(undefined1 **)(param_1 + 8) = &DAT_3b9aca00;
      *(undefined4 *)(param_1 + 0x10) = 0;
      return;
    }
  }
  else {
    FUN_018e3ee8(local_130,param_3[3],param_3[4]);
    piVar22 = (int *)param_3[0x1c];
    do {
      iVar7 = *piVar22;
      bVar35 = (bool)hasExclusiveAccess(piVar22);
    } while (!bVar35);
    *piVar22 = iVar7 + 1;
    if (-1 < iVar7) {
      iVar34 = *param_3;
      iVar8 = param_3[1];
      iVar9 = param_3[0x1d];
      piVar17 = (int *)param_3[0x1f];
      iVar7 = param_3[0x1e];
      do {
        iVar10 = *piVar17;
        bVar35 = (bool)hasExclusiveAccess(piVar17);
      } while (!bVar35);
      *piVar17 = iVar10 + 1;
      if (-1 < iVar10) {
        iVar27 = param_3[0x20];
        piVar19 = (int *)param_3[0x21];
        iVar10 = param_3[0x2b];
        do {
          iVar11 = *piVar19;
          bVar35 = (bool)hasExclusiveAccess(piVar19);
        } while (!bVar35);
        *piVar19 = iVar11 + 1;
        if (-1 < iVar11) {
          iVar11 = param_3[0x22];
          piVar31 = (int *)param_3[0x23];
          uVar26 = *(undefined1 *)((int)param_3 + 0xaf);
          uVar20 = *(undefined1 *)((int)param_3 + 0xae);
          uVar3 = *(undefined1 *)((int)param_3 + 0xad);
          do {
            iVar12 = *piVar31;
            bVar35 = (bool)hasExclusiveAccess(piVar31);
          } while (!bVar35);
          *piVar31 = iVar12 + 1;
          if (-1 < iVar12) {
            piVar33 = (int *)param_3[0x25];
            iVar12 = param_3[0x24];
            do {
              iVar13 = *piVar33;
              bVar35 = (bool)hasExclusiveAccess(piVar33);
            } while (!bVar35);
            *piVar33 = iVar13 + 1;
            if (-1 < iVar13) {
              piVar32 = (int *)param_3[0x26];
              iVar13 = param_3[0x29];
              iVar28 = param_3[0x2a];
              do {
                iVar14 = *piVar32;
                bVar35 = (bool)hasExclusiveAccess(piVar32);
              } while (!bVar35);
              *piVar32 = iVar14 + 1;
              if (-1 < iVar14) {
                uVar21 = 0;
                uVar15 = param_3[7];
                iVar14 = param_3[0x27];
                bVar36 = 0x1ffffffe < uVar15;
                bVar35 = uVar15 == 0x1fffffff;
                uVar1 = uVar15 * 8;
                if (uVar15 < 0x20000000) {
                  bVar36 = 0x7ffffffb < uVar1;
                  bVar35 = uVar1 == 0x7ffffffc;
                  local_230 = iVar28;
                  local_22c = iVar13;
                  local_228 = iVar34;
                }
                if (bVar36 && !bVar35) {
LAB_0175a79c:
                    /* WARNING: Subroutine does not return */
                  FUN_00664620(uVar21,uVar1);
                }
                iVar34 = param_3[6];
                if (uVar1 == 0) {
                  iVar13 = 4;
                  local_234 = 0;
                }
                else {
                  iVar13 = FUN_01298504(uVar1,4);
                  uVar21 = 4;
                  local_234 = uVar15;
                  if (iVar13 == 0) goto LAB_0175a79c;
                }
                local_23c = 0;
                FUN_01bed4e2(iVar13,iVar34,uVar1);
                uVar30 = param_3[10];
                bVar36 = 0x1ffffffe < uVar30;
                bVar35 = uVar30 == 0x1fffffff;
                uVar1 = uVar30 * 8;
                if (uVar30 < 0x20000000) {
                  bVar36 = 0x7ffffffb < uVar1;
                  bVar35 = uVar1 == 0x7ffffffc;
                }
                if (bVar36 && !bVar35) {
LAB_0175a8dc:
                    /* WARNING: Subroutine does not return */
                  FUN_00664620(local_23c,uVar1);
                }
                iVar28 = param_3[9];
                iVar34 = 4;
                if (uVar1 == 0) {
                  local_240 = 0;
                }
                else {
                  local_23c = 4;
                  iVar34 = FUN_01298504(uVar1,4);
                  local_240 = uVar30;
                  if (iVar34 == 0) goto LAB_0175a8dc;
                }
                FUN_01bed4e2(iVar34,iVar28,uVar1);
                piVar18 = (int *)param_3[0x28];
                do {
                  iVar28 = *piVar18;
                  bVar35 = (bool)hasExclusiveAccess(piVar18);
                } while (!bVar35);
                *piVar18 = iVar28 + 1;
                if (-1 < iVar28) {
                  iVar28 = param_3[0xb];
                  if (iVar28 == -0x7ffffffe) {
                    local_1b4 = -0x7ffffffe;
                  }
                  else if (iVar28 == -0x7fffffff) {
                    iVar28 = param_3[0x10];
                    local_250 = param_3[0xf];
                    local_24c = &local_e0;
                    FUN_015e8ad4(local_24c,param_3[0xd],param_3[0xe]);
                    local_1b4 = -0x7fffffff;
                    local_f8 = local_e0;
                    iStack_f4 = local_dc;
                    iStack_f0 = iStack_d8;
                    iStack_ec = local_250;
                    iStack_e8 = iVar28;
                    local_d4 = local_250;
                    local_d0 = iVar28;
                  }
                  else {
                    if (iVar28 == -0x80000000) {
                      iVar28 = param_3[0xf];
                      FUN_015e8ad4((uint)&local_e0 | 4,param_3[0xd],param_3[0xe]);
                      local_e0 = -0x80000000;
                      local_d0 = iVar28;
                    }
                    else {
                      iVar28 = param_3[0x11];
                      iVar4 = param_3[0x12];
                      FUN_015e8ad4(&local_120,param_3[0xc],param_3[0xd]);
                      FUN_018e34d4(&local_1e0,param_3[0xf],param_3[0x10]);
                      local_c4 = CONCAT31(local_c4._1_3_,(char)iVar4);
                      local_e0 = local_120;
                      local_d4 = local_1e0;
                      local_d0 = local_1dc;
                      local_cc = local_1d8;
                      iVar4 = param_3[0x19];
                      local_c8 = iVar28;
                      if (param_3[0x16] == -0x80000000) {
                        local_1e0 = param_3[0x16];
                        local_1dc = param_3[0x17];
                        local_1d8 = param_3[0x18];
                      }
                      else {
                        FUN_006666fc(&local_1e0,param_3[0x17],param_3[0x18]);
                      }
                      iVar6 = local_1d8;
                      iVar5 = local_1dc;
                      iVar28 = local_1e0;
                      FUN_018e333c(&local_120,param_3[0x14],param_3[0x15]);
                      iStack_c0 = local_120;
                      uStack_bc = uStack_11c;
                      local_b8 = iStack_118;
                      local_a8 = CONCAT31(local_a8._1_3_,(char)iVar4);
                      local_ac = iVar6;
                      local_b0 = iVar5;
                      local_b4 = iVar28;
                    }
                    piVar16 = (int *)((uint)&local_e0 | 4);
                    local_250 = param_3[0x1a];
                    local_24c = (int *)param_3[0x1b];
                    local_f8 = *piVar16;
                    iStack_f4 = piVar16[1];
                    iStack_f0 = piVar16[2];
                    iStack_ec = piVar16[3];
                    local_120 = local_c8;
                    uStack_11c = local_c4;
                    iStack_118 = iStack_c0;
                    uStack_114 = uStack_bc;
                    local_110 = local_b8;
                    iStack_10c = local_b4;
                    iStack_108 = local_b0;
                    iStack_104 = local_ac;
                    uStack_100 = local_a8;
                    local_1b4 = local_e0;
                    iStack_e8 = piVar16[4];
                  }
                  local_1e0 = local_228;
                  local_138 = local_230;
                  local_13c = local_22c;
                  local_1c0 = local_240;
                  local_1cc = local_234;
                  local_1b0 = local_f8;
                  iStack_1ac = iStack_f4;
                  iStack_1a8 = iStack_f0;
                  iStack_1a4 = iStack_ec;
                  iStack_1a0 = iStack_e8;
                  local_19c = local_120;
                  uStack_198 = uStack_11c;
                  iStack_194 = iStack_118;
                  uStack_190 = uStack_114;
                  local_18c = local_110;
                  iStack_188 = iStack_10c;
                  iStack_184 = iStack_108;
                  iStack_180 = iStack_104;
                  uStack_17c = uStack_100;
                  puVar25 = (undefined4 *)(iStack_12c + 4);
                  local_174 = local_24c;
                  local_178 = local_250;
                  local_1d0 = 0;
                  local_1dc = iVar8;
                  local_1c8 = iVar13;
                  local_1c4 = uVar15;
                  local_1bc = iVar34;
                  local_1b8 = uVar30;
                  local_170 = piVar22;
                  local_16c = iVar9;
                  local_168 = (char)iVar7;
                  local_164 = piVar17;
                  local_160 = iVar27;
                  local_15c = piVar19;
                  local_158 = iVar11;
                  local_154 = piVar31;
                  local_150 = iVar12;
                  local_14c = piVar33;
                  local_148 = piVar32;
                  local_144 = iVar14;
                  local_140 = piVar18;
                  local_134 = (char)iVar10;
                  local_133 = uVar3;
                  local_132 = uVar20;
                  local_131 = uVar26;
                  for (iVar28 = iStack_128; iVar28 != 0; iVar28 = iVar28 + -1) {
                    FUN_019bb7e0(puVar25[-1],*puVar25);
                    puVar25 = puVar25 + 3;
                  }
                  FUN_01bed4e2(&iStack_d8,param_3,0xb0);
                  local_dc = 1;
                  local_e0 = 1;
                  piVar17 = (int *)thunk_FUN_01be5118(0xb8);
                  if (piVar17 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0066439c(4,0xb8);
                  }
                  FUN_01bed4e2(piVar17,&local_e0,0xb8);
                  FUN_01bed4e2(&iStack_d8,&local_1e0,0xb0);
                  local_dc = 1;
                  local_e0 = 1;
                  piVar22 = (int *)thunk_FUN_01be5118(0xb8);
                  if (piVar22 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0066439c(4,0xb8);
                  }
                  FUN_01bed4e2(piVar22,&local_e0,0xb8);
                  goto LAB_0175a810;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)software_udf(0xfdee,0x175adf8);
  (*pcVar2)();
}

