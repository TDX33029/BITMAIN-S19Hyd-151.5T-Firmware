// FUN_0167d080 @ 0167d080 size=2164 calls_out=16 calls_in=5
// strings: 

void FUN_0167d080(uint *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint extraout_r1;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  uint *puVar28;
  int iVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  int *piVar33;
  bool bVar34;
  undefined8 uVar35;
  longlong lVar36;
  int local_230;
  int local_22c;
  int local_228;
  int local_224;
  int local_220;
  int local_21c;
  int local_218;
  int local_214;
  int local_210;
  int local_20c;
  int local_208;
  int local_204;
  int local_200;
  int local_1fc;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  int local_1d4;
  int local_1d0;
  int local_1cc;
  int iStack_1c8;
  undefined4 local_1c0;
  uint local_1bc;
  uint uStack_1b8;
  uint uStack_1b4;
  int local_170;
  undefined4 local_16c;
  int local_164 [2];
  uint local_15c;
  int local_158;
  uint local_154;
  uint local_150;
  uint uStack_14c;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108 [2];
  undefined1 auStack_100 [104];
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  int local_80;
  
  local_224 = -0x7ffffffd;
  local_230 = -0x7ffffffd;
  uVar35 = thunk_FUN_016de0ee(0x80000003,0x2c0);
  puVar28 = (uint *)((int)uVar35 + (int)((ulonglong)uVar35 >> 0x20));
  if ((char)puVar28[4] == '\0') {
    FUN_015f62e4(&local_98);
    *puVar28 = local_98;
    puVar28[1] = local_94;
    puVar28[2] = local_90;
    puVar28[3] = local_8c;
    *(undefined1 *)(puVar28 + 4) = 1;
  }
  uVar1 = puVar28[2];
  uVar31 = *puVar28;
  uVar32 = puVar28[1];
  piVar33 = (int *)((uint)&local_98 | 4);
  uVar2 = puVar28[3];
  *puVar28 = uVar31 + 1;
  puVar28[1] = uVar32 + (0xfffffffe < uVar31);
  *piVar33 = local_230;
  piVar33[1] = local_22c;
  piVar33[2] = local_228;
  piVar33[3] = local_224;
  piVar33[4] = local_220;
  piVar33[5] = local_21c;
  FUN_016dd1aa(&local_230,param_2 + 0x18,0x60);
  param_2[0x1a] = uVar31;
  param_2[0x1b] = uVar32;
  param_2[0x1c] = uVar1;
  param_2[0x1d] = uVar2;
  iVar3 = 0;
  param_2[0x18] = 0;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x24] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 8;
  param_2[0x20] = 0;
  param_2[0x21] = (int)&DAT_005674cc;
  param_2[0x25] = local_98;
  param_2[0x26] = local_94;
  param_2[0x27] = local_90;
  param_2[0x28] = local_8c;
  param_2[0x29] = local_88;
  param_2[0x2a] = local_84;
  param_2[0x2b] = local_80;
  local_1d0 = param_2[0x33];
  iVar4 = param_2[0x34];
  iVar30 = param_2[0x35];
  param_2[0x34] = 4;
  *(undefined2 *)(param_2 + 0x2f) = 0;
  param_2[0x2c] = 0;
  param_2[0x33] = 0;
  param_2[0x35] = 0;
  local_1cc = iVar4;
  iStack_1c8 = iVar30;
  if (iVar30 == 0) {
    piVar33 = (int *)param_2[7];
    while (piVar33 != (int *)param_2[7] + param_2[8] * 0x30) {
      piVar5 = piVar33 + 0x30;
      iVar29 = *piVar33;
      piVar33 = piVar5;
      if (iVar29 != 0) {
        iVar3 = iVar3 + 1;
      }
    }
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_004144c5,0x21,&DAT_018adad0);
    }
    iVar24 = param_2[1];
    iVar26 = param_2[2];
    iVar27 = param_2[3];
    iVar25 = *param_2;
    *param_2 = local_230;
    param_2[1] = local_22c;
    iVar23 = param_2[4];
    param_2[4] = local_220;
    iVar3 = param_2[5];
    param_2[5] = local_21c;
    iVar29 = param_2[6];
    param_2[6] = local_218;
    iVar6 = param_2[7];
    param_2[7] = local_214;
    iVar7 = param_2[8];
    param_2[8] = local_210;
    iVar8 = param_2[9];
    param_2[9] = local_20c;
    iVar9 = param_2[10];
    param_2[10] = local_208;
    iVar10 = param_2[0xb];
    param_2[0xb] = local_204;
    iVar11 = param_2[0xc];
    param_2[0xc] = local_200;
    iVar12 = param_2[0xd];
    param_2[0xd] = local_1fc;
    iVar13 = param_2[0xe];
    param_2[0xe] = local_1f8;
    iVar14 = param_2[0xf];
    param_2[0xf] = local_1f4;
    iVar15 = param_2[0x10];
    param_2[0x10] = local_1f0;
    iVar16 = param_2[0x11];
    param_2[0x11] = local_1ec;
    iVar17 = param_2[0x12];
    param_2[0x12] = local_1e8;
    iVar18 = param_2[0x13];
    param_2[0x13] = local_1e4;
    iVar19 = param_2[0x14];
    param_2[0x14] = local_1e0;
    iVar20 = param_2[0x15];
    param_2[0x15] = local_1dc;
    iVar21 = param_2[0x16];
    param_2[0x16] = local_1d8;
    iVar22 = param_2[0x17];
    param_2[2] = local_228;
    param_2[3] = local_224;
    param_2[0x17] = local_1d4;
    local_230 = iVar25;
    local_22c = iVar24;
    local_228 = iVar26;
    local_224 = iVar27;
    local_220 = iVar23;
    local_21c = iVar3;
    local_218 = iVar29;
    local_214 = iVar6;
    local_210 = iVar7;
    local_20c = iVar8;
    local_208 = iVar9;
    local_204 = iVar10;
    local_200 = iVar11;
    local_1fc = iVar12;
    local_1f8 = iVar13;
    local_1f4 = iVar14;
    local_1f0 = iVar15;
    local_1ec = iVar16;
    local_1e8 = iVar17;
    local_1e4 = iVar18;
    local_1e0 = iVar19;
    local_1dc = iVar20;
    local_1d8 = iVar21;
    local_1d4 = iVar22;
LAB_0167d3b8:
    *param_1 = 0x80000003;
    iVar3 = iVar4;
    for (; iVar30 != 0; iVar30 = iVar30 + -1) {
      FUN_01666b88(iVar3);
      iVar3 = iVar3 + 0x48;
    }
  }
  else {
    iVar29 = iVar30 + -1;
    iVar3 = iVar4;
    if ((char)param_2[0x37] == '\0') {
      FUN_0167da58(&local_98,param_2,iVar4,iVar29,0);
      uVar1 = local_94;
      if (local_98 == 0x80000003) {
        FUN_01676758(&local_1c0,iVar4 + iVar29 * 0x48);
        FUN_01681fc0(&local_98,uVar1 + 8,&local_1c0);
        if (local_98 == 0x80000000) {
          local_154 = local_94;
          local_150 = local_90;
          uStack_14c = local_8c;
          local_158 = -0x80000000;
        }
        else {
          FUN_016dd1aa(&local_158,&local_98,0x50);
          if (local_158 != -0x80000000) {
            FUN_016dd1aa(auStack_100,&local_230,0x60);
            local_108[0] = 2;
            FUN_0168248c(local_110,local_10c,&local_158,local_108);
            goto LAB_0167d860;
          }
        }
        if (*(uint *)(local_154 + 8) <= local_150) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(local_150,*(uint *)(local_154 + 8),&DAT_018add7c);
        }
        piVar33 = (int *)(*(int *)(local_154 + 4) + local_150 * 0xc0);
        if ((*piVar33 == 2) && ((char)piVar33[0x19] != '\0')) {
          iVar3 = piVar33[2];
          piVar33[2] = local_230;
          iVar29 = piVar33[3];
          piVar33[3] = local_22c;
          iVar6 = piVar33[4];
          piVar33[4] = local_228;
          iVar7 = piVar33[5];
          piVar33[5] = local_224;
          iVar8 = piVar33[6];
          piVar33[6] = local_220;
          iVar9 = piVar33[7];
          piVar33[7] = local_21c;
          iVar10 = piVar33[8];
          piVar33[8] = local_218;
          iVar11 = piVar33[9];
          piVar33[9] = local_214;
          iVar12 = piVar33[10];
          piVar33[10] = local_210;
          iVar13 = piVar33[0xb];
          piVar33[0xb] = local_20c;
          iVar14 = piVar33[0xc];
          piVar33[0xc] = local_208;
          iVar15 = piVar33[0xd];
          piVar33[0xd] = local_204;
          iVar16 = piVar33[0xe];
          piVar33[0xe] = local_200;
          iVar17 = piVar33[0xf];
          piVar33[0xf] = local_1fc;
          iVar18 = piVar33[0x10];
          piVar33[0x10] = local_1f8;
          iVar19 = piVar33[0x11];
          piVar33[0x11] = local_1f4;
          iVar20 = piVar33[0x12];
          piVar33[0x12] = local_1f0;
          iVar21 = piVar33[0x13];
          piVar33[0x13] = local_1ec;
          iVar22 = piVar33[0x14];
          piVar33[0x14] = local_1e8;
          iVar23 = piVar33[0x15];
          piVar33[0x15] = local_1e4;
          iVar24 = piVar33[0x16];
          piVar33[0x16] = local_1e0;
          iVar25 = piVar33[0x17];
          piVar33[0x17] = local_1dc;
          iVar26 = piVar33[0x18];
          piVar33[0x18] = local_1d8;
          iVar27 = piVar33[0x19];
          piVar33[0x19] = local_1d4;
          local_230 = iVar3;
          local_22c = iVar29;
          local_228 = iVar6;
          local_224 = iVar7;
          local_220 = iVar8;
          local_21c = iVar9;
          local_218 = iVar10;
          local_214 = iVar11;
          local_210 = iVar12;
          local_20c = iVar13;
          local_208 = iVar14;
          local_204 = iVar15;
          local_200 = iVar16;
          local_1fc = iVar17;
          local_1f8 = iVar18;
          local_1f4 = iVar19;
          local_1f0 = iVar20;
          local_1ec = iVar21;
          local_1e8 = iVar22;
          local_1e4 = iVar23;
          local_1e0 = iVar24;
          local_1dc = iVar25;
          local_1d8 = iVar26;
          local_1d4 = iVar27;
          goto LAB_0167d3b8;
        }
        FUN_0168f8b0(&local_98,iVar4,iVar30,iVar29);
        *param_1 = local_98;
        param_1[1] = local_94;
        param_1[2] = local_90;
        param_1[3] = local_8c;
        param_1[4] = local_88;
        param_1[5] = local_84;
      }
      else {
        *param_1 = local_98;
        param_1[1] = local_94;
        param_1[2] = local_90;
        param_1[3] = local_8c;
        param_1[4] = local_88;
        param_1[5] = local_84;
      }
    }
    else {
      FUN_0167da58(&local_98,param_2,iVar4,iVar29,0);
      uVar1 = local_94;
      if (local_98 == 0x80000003) {
        FUN_01676758(&local_1c0,iVar4 + iVar29 * 0x48);
        FUN_01681fc0(&local_98,uVar1 + 8,&local_1c0);
        if (local_98 == 0x80000000) {
          local_1bc = local_94;
          uStack_1b8 = local_90;
          uStack_1b4 = local_8c;
          local_1c0 = 0x80000000;
        }
        else {
          FUN_016dd1aa(&local_1c0,&local_98,0x50);
        }
        local_80 = 0;
        local_88 = 0;
        local_94 = 0;
        local_84 = 8;
        local_98 = 3;
        piVar33 = (int *)FUN_0168b748(&local_1c0,&local_98);
        if (*piVar33 == 3) {
          FUN_016dd1aa(&local_90,&local_230,0x60);
          local_98 = 2;
          iVar3 = piVar33[6];
          if (iVar3 == piVar33[4]) {
            FUN_0166e448();
          }
          lVar36 = FUN_016dd1aa(piVar33[5] + iVar3 * 0x70,&local_98,0x70);
          uVar1 = 0;
          piVar33[6] = iVar3 + 1;
          if (iVar3 != -1) {
            iVar29 = piVar33[5];
            FUN_016716cc(&local_170,iVar29);
            FUN_016716cc(local_164,iVar29 + (iVar3 + 1) * 0x70 + -0x70);
            lVar36 = CONCAT44(extraout_r1,local_170);
            if (local_170 == 1) {
              bVar34 = local_164[0] != 0;
              uVar2 = extraout_r1;
              if (bVar34) {
                uVar2 = local_15c;
              }
              uVar1 = (uint)bVar34;
              lVar36 = (ulonglong)uVar2 << 0x20;
              if (bVar34) {
                lVar36 = CONCAT44(uVar2,local_16c);
              }
            }
          }
          piVar33[1] = uVar1;
          *(longlong *)(piVar33 + 2) = lVar36;
LAB_0167d860:
          *param_1 = 0x80000003;
          iVar3 = iVar4;
          for (; iVar30 != 0; iVar30 = iVar30 + -1) {
            FUN_01666b88(iVar3);
            iVar3 = iVar3 + 0x48;
          }
          if (local_1d0 == 0) {
            return;
          }
          thunk_FUN_016d3fb4(iVar4);
          return;
        }
        FUN_0168f8b0(&local_98,iVar4,iVar30,iVar29);
        *param_1 = local_98;
        param_1[1] = local_94;
        param_1[2] = local_90;
        param_1[3] = local_8c;
        param_1[4] = local_88;
        param_1[5] = local_84;
      }
      else {
        *param_1 = local_98;
        param_1[1] = local_94;
        param_1[2] = local_90;
        param_1[3] = local_8c;
        param_1[4] = local_88;
        param_1[5] = local_84;
      }
    }
    for (; iVar30 != 0; iVar30 = iVar30 + -1) {
      FUN_01666b88(iVar3);
      iVar3 = iVar3 + 0x48;
    }
  }
  if (local_1d0 != 0) {
    thunk_FUN_016d3fb4(iVar4);
  }
  FUN_0167d968(&local_230);
  return;
}

