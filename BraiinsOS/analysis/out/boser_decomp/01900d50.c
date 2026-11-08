// FUN_01900d50 @ 01900d50 size=2632 calls_out=26 calls_in=1
// strings: internal error: entered unreachable code

void FUN_01900d50(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  undefined2 uVar3;
  short sVar4;
  char cVar5;
  short **ppsVar6;
  undefined2 uVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  short *psVar11;
  undefined4 *puVar12;
  int *piVar13;
  short *psVar14;
  undefined2 extraout_r1;
  short extraout_r1_00;
  undefined2 *puVar15;
  int iVar16;
  undefined4 uVar17;
  short *psVar18;
  short *psVar19;
  undefined4 uVar20;
  int iVar21;
  undefined4 *puVar22;
  short *psVar23;
  uint uVar24;
  int iVar25;
  bool bVar26;
  bool bVar27;
  undefined8 uVar28;
  int local_228;
  uint local_224;
  short *local_220;
  short *local_21c;
  short *local_218;
  uint local_214;
  int local_210;
  uint local_20c;
  short *local_208;
  int local_204;
  short *local_200;
  undefined2 local_1fc;
  undefined2 local_1fa;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  short *local_198;
  int local_194;
  uint local_190;
  short *local_188;
  short *local_184;
  short *local_180;
  short *local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined2 local_110;
  short *local_108;
  short *local_104;
  short **local_100;
  undefined4 local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  short *local_90;
  short *local_8c;
  short *local_88;
  
  uVar24 = *(uint *)(param_3 + 0x14);
  uVar17 = 0;
  iVar10 = uVar24 * 2;
  if ((int)(uVar24 | uVar24 << 1) < 0) {
LAB_01900d74:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar17,iVar10);
  }
  uVar20 = *(undefined4 *)(param_3 + 0x10);
  uVar7 = *(undefined2 *)(param_3 + 0x26);
  uVar3 = *(undefined2 *)(param_3 + 0x24);
  if (iVar10 == 0) {
    iVar9 = 1;
    local_224 = 0;
  }
  else {
    uVar17 = 1;
    iVar9 = FUN_01298504(iVar10,1);
    local_224 = uVar24;
    if (iVar9 == 0) goto LAB_01900d74;
  }
  FUN_01bed4e2(iVar9,uVar20,iVar10);
  psVar18 = *(short **)(param_3 + 4);
  iVar21 = *(int *)(param_3 + 8);
  local_104 = (short *)0x4;
  iVar10 = iVar21 << 2;
  local_100 = (short **)0x0;
  local_108 = (short *)0x0;
  psVar23 = psVar18;
  do {
    psVar14 = psVar23;
    if (iVar10 == 0) {
      local_21c = (short *)0x2;
      psVar23 = (short *)0x0;
      local_220 = (short *)0x0;
      goto LAB_01900ed8;
    }
    sVar8 = *psVar14;
    iVar10 = iVar10 + -4;
    psVar23 = psVar14 + 2;
  } while (sVar8 == 3);
  sVar4 = psVar14[1];
  psVar11 = (short *)FUN_01298504(0x10,2);
  if (psVar11 == (short *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(2,0x10);
  }
  *psVar11 = sVar8;
  psVar23 = (short *)0x1;
  psVar11[1] = sVar4;
  local_180 = (short *)0x1;
  local_188 = (short *)0x4;
  psVar14 = psVar14 + 2;
  local_184 = psVar11;
  while (psVar19 = psVar14, psVar19 != psVar18 + iVar21 * 2) {
    sVar8 = *psVar19;
    psVar14 = psVar19 + 2;
    if (sVar8 != 3) {
      sVar4 = psVar19[1];
      if (psVar23 == local_188) {
        FUN_006520b4(&local_188,psVar23,1,2,4);
        psVar11 = local_184;
      }
      iVar10 = (int)psVar23 * 2;
      psVar11[iVar10] = sVar8;
      psVar23 = (short *)((int)psVar23 + 1);
      (psVar11 + iVar10)[1] = sVar4;
      local_180 = psVar23;
    }
  }
  local_21c = local_184;
  local_220 = local_188;
LAB_01900ed8:
  ppsVar6 = local_100;
  local_1f8 = *(undefined4 *)(param_2 + 0x6c);
  uStack_1f4 = *(undefined4 *)(param_2 + 0x70);
  uStack_1f0 = *(undefined4 *)(param_2 + 0x74);
  uStack_1ec = *(undefined4 *)(param_2 + 0x78);
  local_1e8 = *(undefined4 *)(param_2 + 0x7c);
  uStack_1e4 = *(undefined4 *)(param_2 + 0x80);
  uStack_1e0 = *(undefined4 *)(param_2 + 0x84);
  uStack_1dc = *(undefined4 *)(param_2 + 0x88);
  local_1d8 = *(undefined4 *)(param_3 + 0x48);
  uStack_1d4 = *(undefined4 *)(param_3 + 0x4c);
  uStack_1d0 = *(undefined4 *)(param_3 + 0x50);
  uStack_1cc = *(undefined4 *)(param_3 + 0x54);
  local_1c8 = *(undefined4 *)(param_3 + 0x58);
  uStack_1c4 = *(undefined4 *)(param_3 + 0x5c);
  uStack_1c0 = *(undefined4 *)(param_3 + 0x60);
  uStack_1bc = *(undefined4 *)(param_3 + 100);
  uStack_1b8 = *(undefined4 *)(param_3 + 0x68);
  local_214 = local_224;
  local_208 = local_108;
  local_204 = (int)local_104;
  local_200 = (short *)local_100;
  local_188 = (short *)&DAT_80000000;
  local_218 = psVar23;
  local_210 = iVar9;
  local_20c = uVar24;
  local_1fc = uVar3;
  local_1fa = uVar7;
  if (local_100 == (short **)local_108) {
    FUN_01ac589c(&local_208);
  }
  local_200 = (short *)((int)ppsVar6 + 1);
  puVar12 = (undefined4 *)(local_204 + (int)ppsVar6 * 0x24);
  *puVar12 = local_188;
  puVar12[1] = local_184;
  puVar12[2] = local_180;
  puVar12[3] = local_17c;
  puVar12[4] = local_178;
  puVar12[5] = local_174;
  puVar12[6] = uStack_170;
  puVar12[7] = uStack_16c;
  puVar12[8] = uStack_168;
  iVar10 = *(int *)(param_3 + 0x20);
  if (iVar10 == 0) {
    local_1ac = 4;
    local_1a8 = 0;
    local_1b0 = 0;
    local_19c = 0;
    local_1a0 = 2;
    local_1a4 = 0;
  }
  else {
    iVar9 = iVar10 * 0x24;
    bVar1 = *(byte *)(param_2 + 0x3c);
    bVar2 = *(byte *)(param_2 + 0x8c);
    local_228 = FUN_01298504(iVar9,4);
    if (local_228 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,iVar9);
    }
    iVar25 = 0;
    local_1a8 = 0;
    local_1b0 = iVar10;
    local_1ac = local_228;
    iVar21 = FUN_01298504(iVar10 << 2,2);
    if (iVar21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(2,iVar10 << 2);
    }
    iVar16 = *(int *)(param_3 + 0x1c);
    piVar13 = (int *)((uint)&local_188 | 4);
    local_19c = 0;
    local_224 = 0;
    local_1a4 = iVar10;
    local_1a0 = iVar21;
    do {
      uVar24 = FUN_018e9a80(iVar16);
      if ((0x17 < (uVar24 & 0xffff)) || ((1 << (uVar24 & 0xff) & 0xa00800U) == 0)) {
        sVar8 = FUN_018e9a80(iVar16);
        if (sVar8 == 0) {
          if (((bVar1 ^ 1) & bVar2 & 1) != 0) {
            FUN_018e8e60(&local_108,param_2 + 0x40);
            psVar23 = local_200;
            *piVar13 = (int)local_108;
            piVar13[1] = (int)local_104;
            piVar13[2] = (int)local_100;
            local_188 = (short *)&DAT_80000004;
            if (local_200 == local_208) {
              FUN_01ac589c(&local_208);
            }
            puVar12 = (undefined4 *)(local_204 + (int)psVar23 * 0x24);
            *puVar12 = local_188;
            puVar12[1] = local_184;
            puVar12[2] = local_180;
            puVar12[3] = local_17c;
            puVar12[4] = local_178;
            puVar12[5] = local_174;
            puVar12[6] = uStack_170;
            puVar12[7] = uStack_16c;
            puVar12[8] = uStack_168;
            goto LAB_0190120c;
          }
        }
        else {
          uVar24 = FUN_018e9a80(iVar16);
          uVar24 = (uVar24 & 0xffff) - 5;
          if ((uVar24 < 0x1e) && ((1 << (uVar24 & 0xff) & 0x30e00921U) != 0)) {
            FUN_01901cb4(&local_188,iVar16);
            if (local_224 == local_1b0) {
              FUN_01ac589c(&local_1b0);
              local_228 = local_1ac;
            }
            puVar12 = (undefined4 *)(local_228 + local_224 * 0x24);
            *puVar12 = local_188;
            puVar12[1] = local_184;
            puVar12[2] = local_180;
            puVar12[3] = local_17c;
            puVar12[4] = local_178;
            puVar12[5] = local_174;
            puVar12[6] = uStack_170;
            puVar12[7] = uStack_16c;
            puVar12[8] = uStack_168;
            local_1a8 = local_224 + 1;
            uVar7 = FUN_018e9a80(iVar16);
            if (iVar25 == local_1a4) {
              FUN_018fa9a8(&local_1a4);
              iVar21 = local_1a0;
            }
            puVar15 = (undefined2 *)(iVar21 + iVar25 * 4);
            *puVar15 = uVar7;
            iVar25 = iVar25 + 1;
            puVar15[1] = extraout_r1;
            local_224 = local_224 + 1;
            local_19c = iVar25;
          }
          else {
            FUN_01901cb4(&local_188,iVar16);
            psVar23 = local_200;
            if (local_200 == local_208) {
              FUN_01ac589c(&local_208);
            }
            puVar12 = (undefined4 *)(local_204 + (int)psVar23 * 0x24);
            *puVar12 = local_188;
            puVar12[1] = local_184;
            puVar12[2] = local_180;
            puVar12[3] = local_17c;
            puVar12[4] = local_178;
            puVar12[5] = local_174;
            puVar12[6] = uStack_170;
            puVar12[7] = uStack_16c;
            puVar12[8] = uStack_168;
LAB_0190120c:
            local_200 = (short *)((int)psVar23 + 1);
          }
        }
      }
      iVar16 = iVar16 + 0x24;
      iVar9 = iVar9 + -0x24;
    } while (iVar9 != 0);
  }
  iVar21 = local_1a8;
  iVar9 = local_1ac;
  iVar10 = local_1b0;
  psVar23 = local_200;
  psVar18 = local_200;
  if (((local_200 != (short *)0x0) &&
      (piVar13 = (int *)(local_204 + (int)local_200 * 0x24 + -0x24), piVar13 != (int *)0x0)) &&
     (*piVar13 == -0x7ffffff6)) {
    psVar18 = (short *)((int)local_200 + -1);
  }
  uVar28 = FUN_01935674(psVar18,psVar18,local_200,&DAT_01d2fe30);
  psVar18 = (short *)((ulonglong)uVar28 >> 0x20);
  local_f8 = (int)psVar23 - (int)psVar18;
  local_e8 = iVar9 + iVar21 * 0x24;
  local_ec = iVar10;
  puVar12 = (undefined4 *)(local_204 + (int)psVar18 * 0x24);
  local_f0 = iVar9;
  local_f4 = iVar9;
  local_100 = &local_208;
  if ((short *)uVar28 != psVar18) {
    puVar22 = (undefined4 *)(local_204 + (int)(short *)uVar28 * 0x24);
    local_104 = (short *)puVar12;
    do {
      local_fc = (undefined4)((ulonglong)uVar28 >> 0x20);
      local_200 = (short *)uVar28;
      if ((short *)*puVar22 == (short *)&DAT_80000018) break;
      local_184 = (short *)puVar22[1];
      local_180 = (short *)puVar22[2];
      local_17c = (short *)puVar22[3];
      local_178 = puVar22[4];
      local_174 = puVar22[5];
      uStack_170 = puVar22[6];
      uStack_16c = puVar22[7];
      uStack_168 = puVar22[8];
      local_188 = (short *)*puVar22;
      FUN_01926efc(&local_188);
      uVar28 = CONCAT44(local_fc,local_200);
      puVar22 = puVar22 + 9;
    } while (puVar22 != puVar12);
  }
  local_fc = (undefined4)((ulonglong)uVar28 >> 0x20);
  local_200 = (short *)uVar28;
  local_104 = (short *)0x4;
  local_108 = (short *)0x4;
  if (psVar23 == psVar18) {
    FUN_018e2350(&local_208,&local_f4);
  }
  else {
    iVar10 = FUN_019267a8(&local_208,psVar18,&local_f4);
    if (iVar10 != 0) {
      if (local_e8 == local_f0) {
        iVar10 = local_e8;
      }
      else {
        FUN_01926850(&local_108,((uint)(local_e8 - local_f0) >> 2) * 0x38e38e39);
        iVar10 = FUN_019267a8(local_100,local_fc,&local_f4);
        if (iVar10 == 0) goto LAB_01901494;
        iVar10 = local_f0;
      }
      uVar24 = local_e8 - iVar10;
      uVar17 = 0;
      if (0x7fffffec < uVar24) {
LAB_019013e8:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar17,uVar24);
      }
      if (local_e8 == iVar10) {
        local_8c = (short *)&SUB_00000004;
        local_90 = (short *)0x0;
      }
      else {
        uVar17 = 4;
        local_8c = (short *)FUN_01298504(uVar24,4);
        if (local_8c == (short *)0x0) goto LAB_019013e8;
        local_90 = (short *)((uVar24 >> 2) * 0x38e38e39);
      }
      local_88 = (short *)0x0;
      FUN_018e2350(&local_90,&local_f4);
      local_180 = local_90;
      local_188 = local_8c;
      local_17c = local_8c + (int)local_88 * 0x12;
      local_184 = local_8c;
      if (local_88 != (short *)0x0) {
        FUN_01926850(&local_108);
        FUN_019267a8(local_100,local_fc,&local_188);
      }
      FUN_0192f418(&local_188);
    }
  }
LAB_01901494:
  FUN_01928bc0(&local_108);
  FUN_0192f418(&local_f4);
  psVar23 = local_200;
  iVar10 = local_204;
  uVar17 = 0;
  bVar27 = (short *)0x3ffffffe < local_200;
  bVar26 = local_200 == (short *)0x3fffffff;
  uVar24 = (int)local_200 * 4;
  if (local_200 < (short *)0x40000000) {
    bVar27 = 0x7ffffffd < uVar24;
    bVar26 = uVar24 == 0x7ffffffe;
  }
  if (!bVar27 || bVar26) {
    if (uVar24 == 0) {
      psVar14 = (short *)0x2;
      psVar18 = (short *)0x0;
    }
    else {
      uVar17 = 2;
      psVar14 = (short *)FUN_01298504(uVar24,2);
      psVar18 = psVar23;
      if (psVar14 == (short *)0x0) goto LAB_019014c0;
    }
    local_180 = (short *)0x0;
    psVar11 = (short *)0x0;
    local_188 = psVar18;
    local_184 = psVar14;
    if (psVar23 != (short *)0x0) {
      psVar14 = psVar14 + 1;
      psVar18 = psVar23;
      do {
        sVar8 = FUN_018e9a80(iVar10);
        *psVar14 = extraout_r1_00;
        iVar10 = iVar10 + 0x24;
        psVar14[-1] = sVar8;
        psVar14 = psVar14 + 2;
        psVar18 = (short *)((int)psVar18 - 1);
      } while (psVar18 != (short *)0x0);
      psVar11 = psVar23;
    }
    local_108 = local_188;
    local_104 = local_184;
    local_180 = psVar11;
    local_100 = (short **)psVar11;
    FUN_0134aee0(*(uint *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20),2,4);
    *(uint *)(param_2 + 0x1c) = (uint)local_108;
    *(short **)(param_2 + 0x20) = local_104;
    *(short ***)(param_2 + 0x24) = local_100;
    if (param_5 != 0) {
      FUN_01bed4e2(&local_188,&local_220,0x6c);
      FUN_01926c28(&local_108,param_5,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),
                   &local_188);
      local_90 = local_108;
      local_8c = local_104;
      local_88 = (short *)local_100;
      uVar24 = *(uint *)(param_2 + 0x60);
      if (uVar24 != 0) {
        FUN_01443048(uVar24,*(undefined4 *)(param_2 + 100));
      }
      *(uint *)(param_2 + 0x60) = (uint)local_90;
      *(short **)(param_2 + 100) = local_8c;
      *(short **)(param_2 + 0x68) = local_88;
      if ((int)local_188 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d24bf8);
      }
      FUN_01bed4e2(&local_220,&local_188,0x6c);
    }
    local_180 = (short *)0x0;
    local_184 = (short *)0x1;
    local_188 = (short *)0x0;
    FUN_018e9638(&local_220,&local_188,&local_1a4);
    psVar23 = local_180;
    local_198 = local_188;
    local_194 = (int)local_184;
    local_190 = (uint)local_180;
    uVar24 = (uint)*(byte *)(param_2 + 0x8e);
    if (uVar24 == 0) {
      uVar24 = 0xffffffff;
    }
    if (*(char *)(param_2 + 0x3c) == '\x01') {
      uVar24 = (uVar24 & 0xff) + 9;
    }
    else {
      bVar1 = UnsignedSaturate((char)uVar24 - *(char *)(param_2 + 0x48),0x10);
      cVar5 = *(char *)(param_2 + 0x48) >> 7;
      UnsignedSaturate((char)(uVar24 >> 8) - cVar5,0x10);
      UnsignedSaturate((char)(uVar24 >> 0x10) - cVar5,0x10);
      UnsignedSaturate((char)(uVar24 >> 0x18) - cVar5,0x10);
      uVar24 = (uint)bVar1;
    }
    FUN_018a7af8(&local_188,-(uVar24 + (int)local_180) & 0x1f);
    psVar11 = local_180;
    psVar14 = local_184;
    psVar18 = local_188;
    if ((uint)((int)local_198 - (int)psVar23) < local_180) {
      FUN_006520b4(&local_198,psVar23,local_180,1,1);
      psVar23 = (short *)local_190;
    }
    FUN_01bed4e2(local_194 + (int)psVar23,psVar14,psVar11);
    local_190 = (int)psVar23 + (int)psVar11;
    FUN_0134bd64(psVar18,psVar14);
    FUN_01bed4e2(&local_90,&local_220,0x6c);
    FUN_0191d7c0(&local_108,&local_90);
    local_110 = 4;
    if (param_4 == 0) {
      local_110 = 2;
    }
    FUN_01bed4e2(&local_188,&local_108,0x78);
    FUN_0191e3c0(param_2,&local_188);
    *param_1 = (int)local_198;
    param_1[1] = local_194;
    param_1[2] = local_190;
    FUN_01901c2c(&local_188);
    return;
  }
LAB_019014c0:
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar17,uVar24);
}

