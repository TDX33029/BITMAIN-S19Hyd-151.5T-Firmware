// FUN_01921aec @ 01921aec size=1688 calls_out=21 calls_in=4
// strings: 

void FUN_01921aec(int *param_1,undefined4 *param_2,int *param_3,uint *param_4)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined2 uVar7;
  uint *puVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  undefined1 uVar14;
  undefined4 *puVar15;
  int *piVar16;
  undefined1 *puVar17;
  int iVar18;
  int iVar19;
  int *piVar20;
  int *piVar21;
  int iVar22;
  int *piVar23;
  undefined4 uVar24;
  int iVar25;
  uint local_1d4;
  int *local_1d0;
  uint local_1cc;
  int *local_1c8;
  uint uStack_1c4;
  uint uStack_1c0;
  uint uStack_1bc;
  int *piStack_1b8;
  uint uStack_1b4;
  int *local_1b0;
  int *local_1ac;
  uint local_1a8;
  int *local_1a4;
  int *piStack_1a0;
  uint uStack_19c;
  int *local_198;
  int iStack_194;
  int iStack_190;
  int local_18c;
  int iStack_188;
  int iStack_184;
  int local_17c;
  int *local_178;
  int *local_174;
  uint local_170;
  int local_16c;
  int local_168;
  int local_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 local_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined1 auStack_fc [148];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*(char *)(param_2 + 0x4e) == '\0') {
    FUN_0191e124(param_2,param_4);
  }
  if ((*param_4 < 0x80000001) && ((undefined1 *)param_4[3] == &DAT_80000005)) {
    local_1b0 = (int *)param_4[4];
    local_1ac = (int *)param_4[5];
    local_1a8 = param_4[6];
    local_1a4 = (int *)param_4[7];
    piStack_1a0 = (int *)param_4[8];
    uStack_19c = param_4[9];
    bVar1 = true;
  }
  else {
    FUN_01bed4e2(&local_178,param_4,0x78);
    FUN_0191d9a0(&local_198,&local_178,&DAT_0052389f,1,&DAT_00523837,1);
    piVar3 = local_198;
    puVar8 = (uint *)((uint)&local_198 | 4);
    local_1b0 = (int *)*puVar8;
    local_1ac = (int *)puVar8[1];
    local_1a8 = puVar8[2];
    local_1a4 = (int *)puVar8[3];
    piStack_1a0 = (int *)puVar8[4];
    uStack_19c = puVar8[5];
    FUN_0191edf0(&local_178);
    bVar1 = false;
    if (piVar3 != (int *)0x80000029) {
      local_1c8 = local_1b0;
      uStack_1c4 = (uint)local_1ac;
      uStack_1c0 = local_1a8;
      uStack_1bc = (uint)local_1a4;
      piStack_1b8 = piStack_1a0;
      uStack_1b4 = uStack_19c;
      param_1[1] = (int)local_1b0;
      param_1[2] = (int)local_1ac;
      param_1[3] = local_1a8;
      param_1[4] = (int)local_1a4;
      param_1[5] = (int)piStack_1a0;
      param_1[6] = uStack_19c;
      param_1[7] = local_17c;
      *param_1 = (int)piVar3;
      goto LAB_01921de8;
    }
  }
  uVar11 = uStack_19c;
  piVar5 = piStack_1a0;
  piVar4 = local_1ac;
  piVar3 = local_1b0;
  local_1c8 = local_1b0;
  uStack_1c4 = (uint)local_1ac;
  uStack_1c0 = local_1a8;
  uStack_1bc = (uint)local_1a4;
  piStack_1b8 = piStack_1a0;
  uStack_1b4 = uStack_19c;
  local_1d4 = (uint)local_1a4;
  local_1d0 = piStack_1a0;
  local_1cc = uStack_19c;
  if (local_1a8 == 0) {
    piVar12 = piStack_1a0 + uStack_19c * 6;
    iVar19 = uStack_19c * 0x18;
    piVar23 = piStack_1a0;
    while (piVar23 != piVar12) {
      piVar20 = (int *)piVar23[1];
      piVar16 = piVar23 + 2;
      piVar23 = piVar23 + 6;
      local_170 = 0;
      local_178 = (int *)0x0;
      iVar13 = *piVar16 << 4;
      do {
        iVar25 = iVar13;
        if (iVar25 == 0) break;
        uVar7 = (undefined2)piVar20[3];
        if (*piVar20 == -0x7fffffff) {
          uVar7 = 5;
        }
        uVar9 = FUN_018eb328(uVar7,*(undefined2 *)((int)piVar20 + 0xe));
        iVar10 = FUN_01930aa8(&local_178,uVar9);
        piVar20 = piVar20 + 4;
        iVar13 = iVar25 + -0x10;
      } while (iVar10 != 0);
      FUN_0192f740(&local_178);
      if (iVar25 != 0) goto LAB_01921d18;
    }
    if (uVar11 == 0) goto LAB_01921ebc;
    piVar16 = piVar5;
    do {
      piVar20 = piVar16 + 1;
      piVar21 = piVar16 + 2;
      piVar16 = piVar16 + 6;
      iVar13 = *piVar21 << 4;
      puVar6 = (undefined4 *)*piVar20;
      while (puVar15 = puVar6, iVar13 != 0) {
        piVar23 = (int *)*puVar15;
        iVar13 = iVar13 + -0x10;
        puVar6 = puVar15 + 4;
        if ((piVar23 != (int *)&DAT_80000001) && (*(short *)(puVar15 + 3) != 5)) goto LAB_01921d18;
      }
    } while (piVar16 != piVar12);
    piVar16 = (int *)piVar5[1];
    iVar25 = 0;
    iVar13 = piVar5[2] << 4;
    piVar20 = piVar16 + -1;
    do {
      piVar21 = piVar20;
      if (iVar13 == 0) goto LAB_01921ebc;
      iVar18 = *piVar16;
      piVar20 = piVar21 + 4;
      if (iVar18 != -0x7fffffff) {
        piVar23 = (int *)(uint)*(ushort *)(piVar16 + 3);
        iVar13 = iVar13 + -0x10;
        piVar16 = piVar16 + 4;
      }
    } while (iVar18 != -0x7fffffff && piVar23 != (int *)&DAT_00000005);
    iVar10 = 1;
    iVar22 = 1;
    if (iVar18 == -0x7fffffff) {
      iVar25 = *piVar20;
      if (iVar25 < 0) {
        uVar9 = 0;
        iVar25 = iVar13;
LAB_01921ea8:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar9,iVar25);
      }
      iVar22 = piVar21[3];
      if (iVar25 == 0) {
        iVar25 = 0;
      }
      else {
        uVar9 = 1;
        iVar10 = FUN_01298504(iVar25,1);
        if (iVar10 == 0) goto LAB_01921ea8;
      }
    }
    goto LAB_01921ec0;
  }
  iVar19 = *param_3;
  local_100 = CONCAT22(local_100._2_2_,4);
  local_174 = (int *)0x100001;
  local_178 = (int *)0x80000001;
  FUN_018f1fc4(iVar19,&local_178,*(char *)(iVar19 + 0x31) == '\x02');
  uVar14 = 5;
  puVar17 = &DAT_80000016;
LAB_01921d6c:
  *(undefined1 *)(param_1 + 1) = uVar14;
  *param_1 = (int)puVar17;
  *(undefined1 *)(iVar19 + 0x255) = 1;
  FUN_0134bd64(piVar3,piVar4);
  FUN_018e21f4(&local_1d4);
  if (bVar1) {
    uVar11 = *param_4;
    if (uVar11 < 0x80000001) {
      if ((undefined1 *)param_4[3] != &DAT_80000005) {
        FUN_0191eea4(param_4 + 3);
        uVar11 = *param_4;
      }
      if (uVar11 != 0x80000000) {
        FUN_0134bd64(uVar11,param_4[1]);
      }
    }
    else {
      FUN_0191edf0(param_4);
    }
  }
LAB_01921de8:
  FUN_01922550(param_2);
  return;
LAB_01921d18:
  iVar19 = *param_3;
  local_100 = CONCAT22(local_100._2_2_,4);
  local_174 = (int *)0x1a0001;
  local_178 = (int *)0x80000001;
  FUN_018f1fc4(iVar19,&local_178,*(char *)(iVar19 + 0x31) == '\x02');
  uVar14 = 1;
  puVar17 = &DAT_8000001c;
  goto LAB_01921d6c;
LAB_01921ebc:
  iVar25 = 0;
  iVar10 = 1;
  iVar22 = 1;
LAB_01921ec0:
  FUN_01bed4e2(iVar10,iVar22,iVar25);
  uVar2 = local_1d4;
  local_1a8 = local_1d4;
  local_1ac = piVar5;
  local_1b0 = piVar5;
  piVar23 = piVar5;
  local_1a4 = piVar12;
  if (uVar11 != 0) {
    iVar13 = 0;
    piVar16 = piVar5;
    do {
      piVar23 = (int *)((int)piVar5 + iVar13);
      local_198 = (int *)*piVar23;
      iStack_194 = piVar23[1];
      iStack_190 = piVar23[2];
      local_18c = piVar23[3];
      iStack_188 = piVar23[4];
      iStack_184 = piVar23[5];
      local_178 = (int *)*piVar23;
      local_174 = (int *)piVar23[1];
      local_170 = piVar23[2];
      local_16c = piVar23[3];
      local_168 = piVar23[4];
      local_164 = piVar23[5];
      FUN_018e22b8(&local_178);
      piVar23 = piVar16 + 3;
      iVar13 = iVar13 + 0x18;
      *piVar16 = local_18c;
      piVar16[1] = iStack_188;
      piVar16[2] = iStack_184;
      piVar16 = piVar23;
    } while (iVar19 != iVar13);
    local_1ac = piVar12;
  }
  local_170 = uVar2;
  iVar19 = ((uint)((int)piVar23 - (int)piVar5) >> 2) * -0x55555555;
  local_178 = piVar5;
  local_174 = (int *)iVar19;
  FUN_0192f1e4(&local_1b0);
  FUN_0192f2b8(&local_1b0);
  local_178 = (int *)(uVar2 << 1);
  local_174 = piVar5;
  local_170 = iVar19;
  FUN_0134bd64(piVar3,piVar4);
  FUN_018eb5a8(&local_198,&local_178);
  local_178 = local_198;
  local_174 = (int *)iStack_194;
  local_170 = iStack_190;
  uVar24 = param_2[0x17];
  local_118 = param_2[0x12];
  uStack_114 = param_2[0x13];
  uStack_110 = param_2[0x14];
  uStack_10c = param_2[0x15];
  uStack_108 = param_2[0x16];
  local_68 = param_2[0x3e];
  uStack_64 = param_2[0x3f];
  uStack_60 = param_2[0x40];
  uStack_5c = param_2[0x41];
  uStack_58 = param_2[0x42];
  local_54 = param_2[0x43];
  uStack_50 = param_2[0x44];
  uStack_4c = param_2[0x45];
  uStack_48 = param_2[0x46];
  uStack_44 = param_2[0x47];
  local_40 = param_2[0x48];
  uStack_3c = param_2[0x49];
  uStack_38 = param_2[0x4a];
  uStack_34 = param_2[0x4b];
  uStack_30 = param_2[0x4c];
  uStack_2c = param_2[0x4d];
  uVar9 = param_2[0x18];
  local_160 = *param_2;
  uStack_15c = param_2[1];
  uStack_158 = param_2[2];
  local_154 = param_2[3];
  uStack_150 = param_2[4];
  uStack_14c = param_2[5];
  uStack_148 = param_2[6];
  FUN_01bed4e2(auStack_fc,param_2 + 0x19,0x94);
  local_138 = param_2[10];
  uStack_134 = param_2[0xb];
  uStack_130 = param_2[0xc];
  uStack_12c = param_2[0xd];
  local_128 = param_2[0xe];
  uStack_124 = param_2[0xf];
  uStack_120 = param_2[0x10];
  uStack_11c = param_2[0x11];
  local_144 = param_2[7];
  uStack_140 = param_2[8];
  uStack_13c = param_2[9];
  local_16c = iVar25;
  local_168 = iVar10;
  local_164 = iVar25;
  local_104 = uVar24;
  local_100 = uVar9;
  iVar19 = thunk_FUN_01be5118(0x150);
  if (iVar19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x150);
  }
  FUN_01bed4e2(iVar19,&local_178,0x150);
  *param_1 = -0x7fffffd7;
  param_1[1] = iVar19;
  param_1[2] = (int)&DAT_01d25424;
  if (bVar1) {
    uVar11 = *param_4;
    if (uVar11 < 0x80000001) {
      if ((undefined1 *)param_4[3] != &DAT_80000005) {
        FUN_0191eea4(param_4 + 3);
        uVar11 = *param_4;
      }
      if (uVar11 != 0x80000000) {
        FUN_0134bd64(uVar11,param_4[1]);
      }
    }
    else {
      FUN_0191edf0(param_4);
    }
  }
  thunk_FUN_01be4678(param_2);
  return;
}

